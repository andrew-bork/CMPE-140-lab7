all: bin/mips mips.vcd gtkwave

SRCS:=$(wildcard src/**/*.v)
INCLUDES:=src ${wildcard src/*/}
TARGET:=src/testbench/tb_mips_top.v

.PHONY: all gtkwave

bin/mips: bin ${SRCS}
	@echo "Building..."
	iverilog -o ./bin/mips ${SRCS}
	@echo "Built"

bin/memfile.mem: src/memfile.mem
	cp src/memfile.mem bin/memfile.mem

mips.vcd: bin/mips bin/memfile.mem
	@echo "Simulating..."
	cd bin; vvp mips
	@echo "Simulated"

bin:
	mkdir bin


gtkwave:
	gtkwave bin/mips.vcd