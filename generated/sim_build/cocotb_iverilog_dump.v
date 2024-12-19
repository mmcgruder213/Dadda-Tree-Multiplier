module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/mlm439/chisel-project/generated/sim_build/DaddaTreeMultiplier.fst");
    $dumpvars(0, DaddaTreeMultiplier);
end
endmodule
