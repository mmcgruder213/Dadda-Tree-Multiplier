import chisel3._
import chisel3.util._

// A Full Adder Module
class FullAdder extends Module {
  val io = IO(new Bundle {
    val a = Input(Bool())
    val b = Input(Bool())
    val cin = Input(Bool())
    val sum = Output(Bool())
    val cout = Output(Bool())
  })

  io.sum := io.a ^ io.b ^ io.cin
  io.cout := (io.a & io.b) | (io.b & io.cin) | (io.a & io.cin)
}

// A Half Adder Module
class HalfAdder extends Module {
  val io = IO(new Bundle {
    val a = Input(Bool())
    val b = Input(Bool())
    val sum = Output(Bool())
    val cout = Output(Bool())
  })

  io.sum := io.a ^ io.b
  io.cout := io.a & io.b
}

class RippleCarryAdder(val width: Int) extends Module {
  val io = IO(new Bundle {
    val a   = Input(UInt(width.W))  // First input number
    val b   = Input(UInt(width.W))  // Second input number
    val cin = Input(Bool())         // Initial carry-in
    val sum = Output(UInt(width.W)) // Sum output
    val cout = Output(Bool())       // Final carry-out
  })

  // Intermediate signals for carry bits
  val carries = Wire(Vec(width + 1, Bool()))
  carries(0) := io.cin // Initial carry-in

  // Vector to hold the sum bits
  val sumBits = Wire(Vec(width, Bool()))

  // Generate Full Adders for each bit
  for (i <- 0 until width) {
    val fa = Module(new FullAdder())
    fa.io.a := io.a(i)    // Connect input a bit
    fa.io.b := io.b(i)    // Connect input b bit
    fa.io.cin := carries(i) // Connect carry-in

    sumBits(i) := fa.io.sum   // Collect sum bit
    carries(i + 1) := fa.io.cout // Propagate carry-out
  }

  // Assign outputs
  io.sum := sumBits.asUInt // Combine sum bits into a UInt
  io.cout := carries(width) // Final carry-out
}

class DaddaTreeMultiplier(val width: Int) extends Module {
   val io = IO(new Bundle {
    val a   = Input(UInt(width.W))  // First input number
    val b   = Input(UInt(width.W))  // Second input number
    val product = Output(UInt((2 * width).W)) // Product
  })

  def dadda(j: Int): Int = {
    //Base case
    if (j == 1) 
    {
      2
    }
    else
    {
      3 * dadda(j - 1) / 2
    }
  }

  def highestStage(length: Int, answer: Int = 1): Int = {
    if (dadda(answer) >= length) {
      answer-1
    }
    else
    {
      highestStage(length, answer+1)
    }
  }

  def generatePartialProducts(x: UInt, y: UInt): Seq[Seq[Bool]] = {
    val x_bool = x.asBools
    val y_bool = y.asBools.reverse

    val front = for (j <- 1 to width) yield (x_bool.drop(width - j)).zip(y_bool.take(j)).map({case (x, y) => x & y})
    val back = for (j <- 1 to width-1) yield (x_bool.take(width - j)).zip(y_bool.drop(j)).map({case (x, y) => x & y})

    (front ++ back).reverse
  }

  def fullAdder(a: Bool, b: Bool, cin: Bool): (Bool, Bool) = {
  val sum = a ^ b ^ cin // XOR for the sum
  val carry = (a & b) | (b & cin) | (a & cin) // Carry logic
  (sum, carry)
  }

  def halfAdder(a: Bool, b: Bool): (Bool, Bool) = {
  val sum = a ^ b       // XOR for the sum
  val carry = a & b     // AND for the carry
  (sum, carry)
  }

  def reducePartialProducts(partialProducts: Seq[Seq[Bool]], targetHeight: Int): Seq[Seq[Bool]] = {
    val (_, backPartials) = partialProducts.splitAt(2)
    partialProducts match {
      case Seq(currentCol, nextCol, _*) => {
        if (currentCol.length <= targetHeight)
        {
          val nextPartial = backPartials match {
            case Seq() => Seq(nextCol)
            case _ => Seq(nextCol) ++ backPartials
          }
          Seq(currentCol) ++ reducePartialProducts(nextPartial, targetHeight)
        }
        else if (currentCol.length == targetHeight + 1)
        {
          val (_, rest) = currentCol.splitAt(2)
          val (sum, carry) = halfAdder(currentCol(0), currentCol(1))
          val reducedCol = sum +: rest
          val nextPartial = backPartials match {
            case Seq() => Seq(reducedCol) ++ Seq(carry +: nextCol)
            case _ => (Seq(reducedCol) ++ Seq(carry +: nextCol)) ++ backPartials
          }
          reducePartialProducts(nextPartial, targetHeight)
        }
        else
        {
          val (_, rest) = currentCol.splitAt(3)
          val (sum, carry) = fullAdder(currentCol(0), currentCol(1), currentCol(2))
          val reducedCol = sum +: rest
          val nextPartial = backPartials match {
            case Seq() => Seq(reducedCol) ++ Seq(carry +: nextCol)
            case _ => (Seq(reducedCol) ++ Seq(carry +: nextCol)) ++ backPartials
          }
          reducePartialProducts(nextPartial, targetHeight)
        }
      }
      case _ => partialProducts
    }
  }

  def flatten(column: Seq[Bool]): Seq[Bool] = {
    column.padTo(2, false.B)
  }

  def rippleAdd(finalPartials: Seq[Seq[Bool]]): UInt = {
    val flatPartials = finalPartials.map(flatten)
    val bool0 = for (i <- 0 until 2*width - 1) yield flatPartials(i)(0)
    val bool1 = for (i <- 0 until 2*width - 1) yield flatPartials(i)(1)

    val (num0, num1) = (Cat(bool0.reverse), Cat(bool1.reverse))
    val rca = Module(new RippleCarryAdder(2*width-1))
    rca.io.a := num0
    rca.io.b := num1
    rca.io.cin := false.B
    
    Cat(rca.io.cout, rca.io.sum)
  }

  def finalPartialProducts(partialProducts: Seq[Seq[Bool]], stage: Int = highestStage(width)): Seq[Seq[Bool]] = {
    if (stage == 0)
    {
      partialProducts
    }
    else
    {
    val targetHeight = dadda(stage)
    val reducedPartials = reducePartialProducts(partialProducts, targetHeight)
    finalPartialProducts(reducedPartials, stage-1)
    }
  }

  val partials = generatePartialProducts(io.a, io.b)
  val reducedPartials = finalPartialProducts(partials)
  io.product := rippleAdd(reducedPartials)
}

// Generate the Verilog
object DaddaTreeMultiplier extends App {
  println("Starting Verilog generation...")
  (new chisel3.stage.ChiselStage).emitVerilog(
    new DaddaTreeMultiplier(32),
    Array("--target-dir", "generated")
  )
  println("Verilog generation complete!")
}

