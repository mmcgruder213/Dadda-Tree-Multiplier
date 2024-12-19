###############################################################################
# Created by write_sdc
# Wed Dec 18 22:22:01 2024
###############################################################################
current_design DaddaTreeMultiplier
###############################################################################
# Timing Constraints
###############################################################################
create_clock -name clk -period 25.0000 [get_ports {clock}]
set_clock_transition 0.1500 [get_clocks {clk}]
set_clock_uncertainty 0.2500 clk
set_propagated_clock [get_clocks {clk}]
set_clock_latency -source -min 4.6500 [get_clocks {clk}]
set_clock_latency -source -max 5.5700 [get_clocks {clk}]
###############################################################################
# Environment
###############################################################################
set_load -pin_load 0.1900 [get_ports {io_product[63]}]
set_load -pin_load 0.1900 [get_ports {io_product[62]}]
set_load -pin_load 0.1900 [get_ports {io_product[61]}]
set_load -pin_load 0.1900 [get_ports {io_product[60]}]
set_load -pin_load 0.1900 [get_ports {io_product[59]}]
set_load -pin_load 0.1900 [get_ports {io_product[58]}]
set_load -pin_load 0.1900 [get_ports {io_product[57]}]
set_load -pin_load 0.1900 [get_ports {io_product[56]}]
set_load -pin_load 0.1900 [get_ports {io_product[55]}]
set_load -pin_load 0.1900 [get_ports {io_product[54]}]
set_load -pin_load 0.1900 [get_ports {io_product[53]}]
set_load -pin_load 0.1900 [get_ports {io_product[52]}]
set_load -pin_load 0.1900 [get_ports {io_product[51]}]
set_load -pin_load 0.1900 [get_ports {io_product[50]}]
set_load -pin_load 0.1900 [get_ports {io_product[49]}]
set_load -pin_load 0.1900 [get_ports {io_product[48]}]
set_load -pin_load 0.1900 [get_ports {io_product[47]}]
set_load -pin_load 0.1900 [get_ports {io_product[46]}]
set_load -pin_load 0.1900 [get_ports {io_product[45]}]
set_load -pin_load 0.1900 [get_ports {io_product[44]}]
set_load -pin_load 0.1900 [get_ports {io_product[43]}]
set_load -pin_load 0.1900 [get_ports {io_product[42]}]
set_load -pin_load 0.1900 [get_ports {io_product[41]}]
set_load -pin_load 0.1900 [get_ports {io_product[40]}]
set_load -pin_load 0.1900 [get_ports {io_product[39]}]
set_load -pin_load 0.1900 [get_ports {io_product[38]}]
set_load -pin_load 0.1900 [get_ports {io_product[37]}]
set_load -pin_load 0.1900 [get_ports {io_product[36]}]
set_load -pin_load 0.1900 [get_ports {io_product[35]}]
set_load -pin_load 0.1900 [get_ports {io_product[34]}]
set_load -pin_load 0.1900 [get_ports {io_product[33]}]
set_load -pin_load 0.1900 [get_ports {io_product[32]}]
set_load -pin_load 0.1900 [get_ports {io_product[31]}]
set_load -pin_load 0.1900 [get_ports {io_product[30]}]
set_load -pin_load 0.1900 [get_ports {io_product[29]}]
set_load -pin_load 0.1900 [get_ports {io_product[28]}]
set_load -pin_load 0.1900 [get_ports {io_product[27]}]
set_load -pin_load 0.1900 [get_ports {io_product[26]}]
set_load -pin_load 0.1900 [get_ports {io_product[25]}]
set_load -pin_load 0.1900 [get_ports {io_product[24]}]
set_load -pin_load 0.1900 [get_ports {io_product[23]}]
set_load -pin_load 0.1900 [get_ports {io_product[22]}]
set_load -pin_load 0.1900 [get_ports {io_product[21]}]
set_load -pin_load 0.1900 [get_ports {io_product[20]}]
set_load -pin_load 0.1900 [get_ports {io_product[19]}]
set_load -pin_load 0.1900 [get_ports {io_product[18]}]
set_load -pin_load 0.1900 [get_ports {io_product[17]}]
set_load -pin_load 0.1900 [get_ports {io_product[16]}]
set_load -pin_load 0.1900 [get_ports {io_product[15]}]
set_load -pin_load 0.1900 [get_ports {io_product[14]}]
set_load -pin_load 0.1900 [get_ports {io_product[13]}]
set_load -pin_load 0.1900 [get_ports {io_product[12]}]
set_load -pin_load 0.1900 [get_ports {io_product[11]}]
set_load -pin_load 0.1900 [get_ports {io_product[10]}]
set_load -pin_load 0.1900 [get_ports {io_product[9]}]
set_load -pin_load 0.1900 [get_ports {io_product[8]}]
set_load -pin_load 0.1900 [get_ports {io_product[7]}]
set_load -pin_load 0.1900 [get_ports {io_product[6]}]
set_load -pin_load 0.1900 [get_ports {io_product[5]}]
set_load -pin_load 0.1900 [get_ports {io_product[4]}]
set_load -pin_load 0.1900 [get_ports {io_product[3]}]
set_load -pin_load 0.1900 [get_ports {io_product[2]}]
set_load -pin_load 0.1900 [get_ports {io_product[1]}]
set_load -pin_load 0.1900 [get_ports {io_product[0]}]
set_input_transition 0.6100 [get_ports {clock}]
set_timing_derate -early 0.9500
set_timing_derate -late 1.0500
###############################################################################
# Design Rules
###############################################################################
set_max_transition 1.0000 [current_design]
set_max_fanout 16.0000 [current_design]
