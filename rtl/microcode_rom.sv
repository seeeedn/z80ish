module microcode_rom
    import microcode_pkg::*;
(
    input logic [9:0] micro_pc_i,

    output microinstr_t uinstr_o
);

  microinstr_t rom [1024];

  function automatic microinstr_t make_nop();
    microinstr_t u;
    u = '0;
    u.seq = SEQ_NEXT;
    return u;
  endfunction

  initial begin
    foreach (rom[i])
      rom[i] = make_nop();

    // Load PC on ABUS.
    rom[FETCH].mem_rd     = 1'b1;
    rom[FETCH].seq        = SEQ_NEXT;

    // Put Mem on DBUS, prep for IR load.
    rom[1].load_ir      = 1'b1;
    rom[1].pc_inc       = 1'b1;
    rom[1].data_bus_sel = 2'b10;
    rom[1].seq          = SEQ_NEXT;

    // rom[2]: Decode here
    rom[DECODE].seq = SEQ_DISPATCH;

    // TODO: rest of the ROM
    rom[LOAD_REG].reg_we = 1'b1;
    rom[LOAD_REG].seq    = SEQ_END;

    rom[MEM_RD].mem_rd       = 1'b1;
    rom[MEM_RD].addr_bus_sel = 2'b10;
    rom[MEM_RD].seq          = SEQ_MEM_RD;

    rom[MEM_WR].mem_wr       = 1'b1;
    rom[MEM_WR].addr_bus_sel = 2'b10;
    rom[MEM_WR].seq          = SEQ_MEM_WR;
    //
    rom[HALT].seq = SEQ_HALT;
  end

  always_comb begin
    uinstr_o = rom[micro_pc_i];
  end

endmodule
