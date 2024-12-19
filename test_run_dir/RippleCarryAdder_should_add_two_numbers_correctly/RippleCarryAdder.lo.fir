FIRRTL version 1.2.0
circuit RippleCarryAdder :
  module FullAdder :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<1> @[src/main/scala/dadda_tree_mult.scala 6:14]
    input io_b : UInt<1> @[src/main/scala/dadda_tree_mult.scala 6:14]
    input io_cin : UInt<1> @[src/main/scala/dadda_tree_mult.scala 6:14]
    output io_sum : UInt<1> @[src/main/scala/dadda_tree_mult.scala 6:14]
    output io_cout : UInt<1> @[src/main/scala/dadda_tree_mult.scala 6:14]

    node _io_sum_T = xor(io_a, io_b) @[src/main/scala/dadda_tree_mult.scala 14:18]
    node _io_sum_T_1 = xor(_io_sum_T, io_cin) @[src/main/scala/dadda_tree_mult.scala 14:25]
    node _io_cout_T = and(io_a, io_b) @[src/main/scala/dadda_tree_mult.scala 15:20]
    node _io_cout_T_1 = and(io_b, io_cin) @[src/main/scala/dadda_tree_mult.scala 15:36]
    node _io_cout_T_2 = or(_io_cout_T, _io_cout_T_1) @[src/main/scala/dadda_tree_mult.scala 15:28]
    node _io_cout_T_3 = and(io_a, io_cin) @[src/main/scala/dadda_tree_mult.scala 15:54]
    node _io_cout_T_4 = or(_io_cout_T_2, _io_cout_T_3) @[src/main/scala/dadda_tree_mult.scala 15:46]
    io_sum <= _io_sum_T_1 @[src/main/scala/dadda_tree_mult.scala 14:10]
    io_cout <= _io_cout_T_4 @[src/main/scala/dadda_tree_mult.scala 15:11]

  module RippleCarryAdder :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<4> @[src/main/scala/dadda_tree_mult.scala 19:14]
    input io_b : UInt<4> @[src/main/scala/dadda_tree_mult.scala 19:14]
    input io_cin : UInt<1> @[src/main/scala/dadda_tree_mult.scala 19:14]
    output io_sum : UInt<4> @[src/main/scala/dadda_tree_mult.scala 19:14]
    output io_cout : UInt<1> @[src/main/scala/dadda_tree_mult.scala 19:14]

    inst fa of FullAdder @[src/main/scala/dadda_tree_mult.scala 36:20]
    inst fa_1 of FullAdder @[src/main/scala/dadda_tree_mult.scala 36:20]
    inst fa_2 of FullAdder @[src/main/scala/dadda_tree_mult.scala 36:20]
    inst fa_3 of FullAdder @[src/main/scala/dadda_tree_mult.scala 36:20]
    node _fa_io_a_T = bits(io_a, 0, 0) @[src/main/scala/dadda_tree_mult.scala 37:20]
    node _fa_io_b_T = bits(io_b, 0, 0) @[src/main/scala/dadda_tree_mult.scala 38:20]
    node _fa_io_a_T_1 = bits(io_a, 1, 1) @[src/main/scala/dadda_tree_mult.scala 37:20]
    node _fa_io_b_T_1 = bits(io_b, 1, 1) @[src/main/scala/dadda_tree_mult.scala 38:20]
    node _fa_io_a_T_2 = bits(io_a, 2, 2) @[src/main/scala/dadda_tree_mult.scala 37:20]
    node _fa_io_b_T_2 = bits(io_b, 2, 2) @[src/main/scala/dadda_tree_mult.scala 38:20]
    node _fa_io_a_T_3 = bits(io_a, 3, 3) @[src/main/scala/dadda_tree_mult.scala 37:20]
    node _fa_io_b_T_3 = bits(io_b, 3, 3) @[src/main/scala/dadda_tree_mult.scala 38:20]
    node sumBits_1 = fa_1.io_sum @[src/main/scala/dadda_tree_mult.scala 32:21 41:16]
    node sumBits_0 = fa.io_sum @[src/main/scala/dadda_tree_mult.scala 32:21 41:16]
    node io_sum_lo = cat(sumBits_1, sumBits_0) @[src/main/scala/dadda_tree_mult.scala 46:21]
    node sumBits_3 = fa_3.io_sum @[src/main/scala/dadda_tree_mult.scala 32:21 41:16]
    node sumBits_2 = fa_2.io_sum @[src/main/scala/dadda_tree_mult.scala 32:21 41:16]
    node io_sum_hi = cat(sumBits_3, sumBits_2) @[src/main/scala/dadda_tree_mult.scala 46:21]
    node _io_sum_T = cat(io_sum_hi, io_sum_lo) @[src/main/scala/dadda_tree_mult.scala 46:21]
    node carries_0 = io_cin @[src/main/scala/dadda_tree_mult.scala 28:21 29:14]
    node carries_1 = fa.io_cout @[src/main/scala/dadda_tree_mult.scala 28:21 42:20]
    node carries_2 = fa_1.io_cout @[src/main/scala/dadda_tree_mult.scala 28:21 42:20]
    node carries_3 = fa_2.io_cout @[src/main/scala/dadda_tree_mult.scala 28:21 42:20]
    node carries_4 = fa_3.io_cout @[src/main/scala/dadda_tree_mult.scala 28:21 42:20]
    io_sum <= _io_sum_T @[src/main/scala/dadda_tree_mult.scala 46:10]
    io_cout <= carries_4 @[src/main/scala/dadda_tree_mult.scala 47:11]
    fa.clock <= clock
    fa.reset <= reset
    fa.io_a <= _fa_io_a_T @[src/main/scala/dadda_tree_mult.scala 37:13]
    fa.io_b <= _fa_io_b_T @[src/main/scala/dadda_tree_mult.scala 38:13]
    fa.io_cin <= carries_0 @[src/main/scala/dadda_tree_mult.scala 39:15]
    fa_1.clock <= clock
    fa_1.reset <= reset
    fa_1.io_a <= _fa_io_a_T_1 @[src/main/scala/dadda_tree_mult.scala 37:13]
    fa_1.io_b <= _fa_io_b_T_1 @[src/main/scala/dadda_tree_mult.scala 38:13]
    fa_1.io_cin <= carries_1 @[src/main/scala/dadda_tree_mult.scala 39:15]
    fa_2.clock <= clock
    fa_2.reset <= reset
    fa_2.io_a <= _fa_io_a_T_2 @[src/main/scala/dadda_tree_mult.scala 37:13]
    fa_2.io_b <= _fa_io_b_T_2 @[src/main/scala/dadda_tree_mult.scala 38:13]
    fa_2.io_cin <= carries_2 @[src/main/scala/dadda_tree_mult.scala 39:15]
    fa_3.clock <= clock
    fa_3.reset <= reset
    fa_3.io_a <= _fa_io_a_T_3 @[src/main/scala/dadda_tree_mult.scala 37:13]
    fa_3.io_b <= _fa_io_b_T_3 @[src/main/scala/dadda_tree_mult.scala 38:13]
    fa_3.io_cin <= carries_3 @[src/main/scala/dadda_tree_mult.scala 39:15]
