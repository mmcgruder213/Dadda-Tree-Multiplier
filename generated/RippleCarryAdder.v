module FullAdder(
  input   io_a, // @[src/main/scala/dadda_tree_mult.scala 6:14]
  input   io_b, // @[src/main/scala/dadda_tree_mult.scala 6:14]
  input   io_cin, // @[src/main/scala/dadda_tree_mult.scala 6:14]
  output  io_sum, // @[src/main/scala/dadda_tree_mult.scala 6:14]
  output  io_cout // @[src/main/scala/dadda_tree_mult.scala 6:14]
);
  assign io_sum = io_a ^ io_b ^ io_cin; // @[src/main/scala/dadda_tree_mult.scala 14:25]
  assign io_cout = io_a & io_b | io_b & io_cin | io_a & io_cin; // @[src/main/scala/dadda_tree_mult.scala 15:46]
endmodule
module RippleCarryAdder(
  input        clock,
  input        reset,
  input  [2:0] io_a, // @[src/main/scala/dadda_tree_mult.scala 19:14]
  input  [2:0] io_b, // @[src/main/scala/dadda_tree_mult.scala 19:14]
  input        io_cin, // @[src/main/scala/dadda_tree_mult.scala 19:14]
  output [2:0] io_sum, // @[src/main/scala/dadda_tree_mult.scala 19:14]
  output       io_cout // @[src/main/scala/dadda_tree_mult.scala 19:14]
);
  wire  fa_io_a; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_io_b; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_io_cin; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_io_sum; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_io_cout; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_1_io_a; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_1_io_b; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_1_io_cin; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_1_io_sum; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_1_io_cout; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_2_io_a; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_2_io_b; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_2_io_cin; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_2_io_sum; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  fa_2_io_cout; // @[src/main/scala/dadda_tree_mult.scala 36:20]
  wire  sumBits_2 = fa_2_io_sum; // @[src/main/scala/dadda_tree_mult.scala 32:21 41:16]
  wire  sumBits_1 = fa_1_io_sum; // @[src/main/scala/dadda_tree_mult.scala 32:21 41:16]
  wire [1:0] io_sum_hi = {sumBits_2,sumBits_1}; // @[src/main/scala/dadda_tree_mult.scala 46:21]
  wire  sumBits_0 = fa_io_sum; // @[src/main/scala/dadda_tree_mult.scala 32:21 41:16]
  FullAdder fa ( // @[src/main/scala/dadda_tree_mult.scala 36:20]
    .io_a(fa_io_a),
    .io_b(fa_io_b),
    .io_cin(fa_io_cin),
    .io_sum(fa_io_sum),
    .io_cout(fa_io_cout)
  );
  FullAdder fa_1 ( // @[src/main/scala/dadda_tree_mult.scala 36:20]
    .io_a(fa_1_io_a),
    .io_b(fa_1_io_b),
    .io_cin(fa_1_io_cin),
    .io_sum(fa_1_io_sum),
    .io_cout(fa_1_io_cout)
  );
  FullAdder fa_2 ( // @[src/main/scala/dadda_tree_mult.scala 36:20]
    .io_a(fa_2_io_a),
    .io_b(fa_2_io_b),
    .io_cin(fa_2_io_cin),
    .io_sum(fa_2_io_sum),
    .io_cout(fa_2_io_cout)
  );
  assign io_sum = {io_sum_hi,sumBits_0}; // @[src/main/scala/dadda_tree_mult.scala 46:21]
  assign io_cout = fa_2_io_cout; // @[src/main/scala/dadda_tree_mult.scala 28:21 42:20]
  assign fa_io_a = io_a[0]; // @[src/main/scala/dadda_tree_mult.scala 37:20]
  assign fa_io_b = io_b[0]; // @[src/main/scala/dadda_tree_mult.scala 38:20]
  assign fa_io_cin = io_cin; // @[src/main/scala/dadda_tree_mult.scala 28:21 29:14]
  assign fa_1_io_a = io_a[1]; // @[src/main/scala/dadda_tree_mult.scala 37:20]
  assign fa_1_io_b = io_b[1]; // @[src/main/scala/dadda_tree_mult.scala 38:20]
  assign fa_1_io_cin = fa_io_cout; // @[src/main/scala/dadda_tree_mult.scala 28:21 42:20]
  assign fa_2_io_a = io_a[2]; // @[src/main/scala/dadda_tree_mult.scala 37:20]
  assign fa_2_io_b = io_b[2]; // @[src/main/scala/dadda_tree_mult.scala 38:20]
  assign fa_2_io_cin = fa_1_io_cout; // @[src/main/scala/dadda_tree_mult.scala 28:21 42:20]
endmodule
