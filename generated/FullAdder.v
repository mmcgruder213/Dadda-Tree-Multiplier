module FullAdder(
  input   clock,
  input   reset,
  input   io_a, // @[src/main/scala/dadda_tree_mult.scala 6:14]
  input   io_b, // @[src/main/scala/dadda_tree_mult.scala 6:14]
  input   io_cin, // @[src/main/scala/dadda_tree_mult.scala 6:14]
  output  io_sum, // @[src/main/scala/dadda_tree_mult.scala 6:14]
  output  io_cout // @[src/main/scala/dadda_tree_mult.scala 6:14]
);
  assign io_sum = io_a ^ io_b ^ io_cin; // @[src/main/scala/dadda_tree_mult.scala 14:25]
  assign io_cout = io_a & io_b | io_b & io_cin | io_a & io_cin; // @[src/main/scala/dadda_tree_mult.scala 15:46]
endmodule
