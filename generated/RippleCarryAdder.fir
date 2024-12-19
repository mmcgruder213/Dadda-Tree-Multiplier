FIRRTL version 1.2.0
circuit RippleCarryAdder :
  module FullAdder :
    input clock : Clock
    input reset : Reset
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

  module FullAdder_1 :
    input clock : Clock
    input reset : Reset
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

  module FullAdder_2 :
    input clock : Clock
    input reset : Reset
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

  module RippleCarryAdder :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip a : UInt<3>, flip b : UInt<3>, flip cin : UInt<1>, sum : UInt<3>, cout : UInt<1>} @[src/main/scala/dadda_tree_mult.scala 19:14]

    wire carries : UInt<1>[4] @[src/main/scala/dadda_tree_mult.scala 28:21]
    carries[0] <= io.cin @[src/main/scala/dadda_tree_mult.scala 29:14]
    wire sumBits : UInt<1>[3] @[src/main/scala/dadda_tree_mult.scala 32:21]
    inst fa of FullAdder @[src/main/scala/dadda_tree_mult.scala 36:20]
    fa.clock <= clock
    fa.reset <= reset
    node _fa_io_a_T = bits(io.a, 0, 0) @[src/main/scala/dadda_tree_mult.scala 37:20]
    fa.io.a <= _fa_io_a_T @[src/main/scala/dadda_tree_mult.scala 37:13]
    node _fa_io_b_T = bits(io.b, 0, 0) @[src/main/scala/dadda_tree_mult.scala 38:20]
    fa.io.b <= _fa_io_b_T @[src/main/scala/dadda_tree_mult.scala 38:13]
    fa.io.cin <= carries[0] @[src/main/scala/dadda_tree_mult.scala 39:15]
    sumBits[0] <= fa.io.sum @[src/main/scala/dadda_tree_mult.scala 41:16]
    carries[1] <= fa.io.cout @[src/main/scala/dadda_tree_mult.scala 42:20]
    inst fa_1 of FullAdder_1 @[src/main/scala/dadda_tree_mult.scala 36:20]
    fa_1.clock <= clock
    fa_1.reset <= reset
    node _fa_io_a_T_1 = bits(io.a, 1, 1) @[src/main/scala/dadda_tree_mult.scala 37:20]
    fa_1.io.a <= _fa_io_a_T_1 @[src/main/scala/dadda_tree_mult.scala 37:13]
    node _fa_io_b_T_1 = bits(io.b, 1, 1) @[src/main/scala/dadda_tree_mult.scala 38:20]
    fa_1.io.b <= _fa_io_b_T_1 @[src/main/scala/dadda_tree_mult.scala 38:13]
    fa_1.io.cin <= carries[1] @[src/main/scala/dadda_tree_mult.scala 39:15]
    sumBits[1] <= fa_1.io.sum @[src/main/scala/dadda_tree_mult.scala 41:16]
    carries[2] <= fa_1.io.cout @[src/main/scala/dadda_tree_mult.scala 42:20]
    inst fa_2 of FullAdder_2 @[src/main/scala/dadda_tree_mult.scala 36:20]
    fa_2.clock <= clock
    fa_2.reset <= reset
    node _fa_io_a_T_2 = bits(io.a, 2, 2) @[src/main/scala/dadda_tree_mult.scala 37:20]
    fa_2.io.a <= _fa_io_a_T_2 @[src/main/scala/dadda_tree_mult.scala 37:13]
    node _fa_io_b_T_2 = bits(io.b, 2, 2) @[src/main/scala/dadda_tree_mult.scala 38:20]
    fa_2.io.b <= _fa_io_b_T_2 @[src/main/scala/dadda_tree_mult.scala 38:13]
    fa_2.io.cin <= carries[2] @[src/main/scala/dadda_tree_mult.scala 39:15]
    sumBits[2] <= fa_2.io.sum @[src/main/scala/dadda_tree_mult.scala 41:16]
    carries[3] <= fa_2.io.cout @[src/main/scala/dadda_tree_mult.scala 42:20]
    node io_sum_hi = cat(sumBits[2], sumBits[1]) @[src/main/scala/dadda_tree_mult.scala 46:21]
    node _io_sum_T = cat(io_sum_hi, sumBits[0]) @[src/main/scala/dadda_tree_mult.scala 46:21]
    io.sum <= _io_sum_T @[src/main/scala/dadda_tree_mult.scala 46:10]
    io.cout <= carries[3] @[src/main/scala/dadda_tree_mult.scala 47:11]

