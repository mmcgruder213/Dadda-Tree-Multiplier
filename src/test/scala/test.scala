import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class DaddaTreeMultiplierTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "DaddaTreeMultiplier"

  it should "compute correct multiplication results" in {
    test(new DaddaTreeMultiplier(width = 4)) { dut =>
      // Define test cases
      val testCases = Seq(
        (3, 3, 9),    // 3 * 3 = 9
        (0, 5, 0),    // 0 * 5 = 0
        (7, 8, 56),   // 7 * 8 = 56
        (15, 15, 225) // 15 * 15 = 225
      )

      // Test each case
      for ((x, y, expected) <- testCases) {
        dut.io.a.poke(x.U)
        dut.io.b.poke(y.U)

        // Step the clock to allow computation
        dut.clock.step(1)

        // Print intermediate results (Optional)
        println(s"Inputs: x=$x, y=$y")
        println(s"Expected: $expected, Output: ${dut.io.product.peek().litValue}")

        // Check the result
        dut.io.product.expect(expected.U)
      }
    }
  }
}
