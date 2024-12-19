#Cocotb imports
import cocotb
import os
import sys
from cocotb.triggers import Timer, Edge, RisingEdge, FallingEdge, ClockCycles
from cocotb.runner import get_runner
from cocotb.clock import Clock
from pathlib import Path

#Single directed test
@cocotb.test()
async def multiplier_basic_test(dut):
    dut.io_a.value = 14
    dut.io_b.value = 14
    await Timer(1, "ns")
    assert dut.io_product.value == 196

@cocotb.test()
async def multiplier_all_test(dut):
    for i in range(0, 256):
        for j in range(0, 256):
            dut.io_a.value = i
            dut.io_b.value = j
            await Timer(1, "ns")
            assert dut.io_product.value == i*j

def test_multiplier_runner():
    sim = os.getenv("SIM", "icarus")

    proj_path = Path(__file__).resolve().parent

    sources = [proj_path / "DaddaTreeMultiplier.v"]

    runner = get_runner(sim)
    runner.build(
        verilog_sources=sources,
        hdl_toplevel="DaddaTreeMultiplier",
        always=True,
        waves=True,
        build_args=[],
    )
    runner.test(
        hdl_toplevel="DaddaTreeMultiplier", test_module="test", test_args=[]
    )


if __name__ == "__main__":
    test_multiplier_runner()