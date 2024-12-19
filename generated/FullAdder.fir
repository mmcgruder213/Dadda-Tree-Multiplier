FIRRTL version 1.2.0
circuit FullAdder :
  module FullAdder :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip a : UInt<1>, flip b : UInt<1>, flip cin : UInt<1>, sum : UInt<1>, cout : UInt<1>} @[src/main/scala/dadda_tree_mult.scala 6:14]

    node _io_sum_T = xor(io.a, io.b) @[src/main/scala/dadda_tree_mult.scala 14:18]
    node _io_sum_T_1 = xor(_io_sum_T, io.cin) @[src/main/scala/dadda_tree_mult.scala 14:25]
    io.sum <= _io_sum_T_1 @[src/main/scala/dadda_tree_mult.scala 14:10]
    node _io_cout_T = and(io.a, io.b) @[src/main/scala/dadda_tree_mult.scala 15:20]
    node _io_cout_T_1 = and(io.b, io.cin) @[src/main/scala/dadda_tree_mult.scala 15:36]
    node _io_cout_T_2 = or(_io_cout_T, _io_cout_T_1) @[src/main/scala/dadda_tree_mult.scala 15:28]
    node _io_cout_T_3 = and(io.a, io.cin) @[src/main/scala/dadda_tree_mult.scala 15:54]
    node _io_cout_T_4 = or(_io_cout_T_2, _io_cout_T_3) @[src/main/scala/dadda_tree_mult.scala 15:46]
    io.cout <= _io_cout_T_4 @[src/main/scala/dadda_tree_mult.scala 15:11]

