
VERILATOR = verilator
GTKWAVE = gtkwave

TOP = tb
OBJ_DIR = obj_dir
SIM = $(OBJ_DIR)/V$(TOP)
WAVE = cpu.vcd

RTL = \
	rtl/microcode_pkg.svh \
	rtl/single_reg.sv \
	rtl/regfile.sv \
	rtl/alu.sv \
	rtl/idu.sv \
	rtl/dispatcher.sv \
	rtl/microsequencer.sv \
	rtl/microcode_rom.sv \
	rtl/control.sv \
	rtl/memory.sv \
	rtl/cpu.sv \
	rtl/computer.sv

TB = tb/tb.sv

VERILATOR_FLAGS = \
	--binary \
	--timing \
	--trace \
	--trace-structs \
	--top-module $(TOP) \
	-Wall \
	-Wno-fatal \
	--Mdir $(OBJ_DIR)

.PHONY: all compile run wave clean

all: compile

compile:
	mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) $(RTL) $(TB)

run: compile
	./$(SIM)

wave:
	$(GTKWAVE) $(WAVE)

clean:
	rm -rf $(OBJ_DIR) $(WAVE)

