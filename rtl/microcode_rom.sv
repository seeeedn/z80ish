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
    rom[FETCH_2].load_ir      = 1'b1;
    rom[FETCH_2].pc_inc       = 1'b1;
    rom[FETCH_2].data_bus_sel = 2'b10;
    rom[FETCH_2].seq          = SEQ_NEXT;

    rom[DECODE].seq = SEQ_DISPATCH;

    rom[LOAD_RR].rf_we        = 1'b1;
    rom[LOAD_RR].seq          = SEQ_JUMP;
    rom[LOAD_RR].target       = FETCH;

    rom[LOAD_RM].mem_rd       = 1'b1;
    rom[LOAD_RM].addr_bus_sel = 2'b10;
    rom[LOAD_RM].seq          = SEQ_NEXT;

    rom[LOAD_RM + 1].rf_we        = 1'b1;
    rom[LOAD_RM + 1].data_bus_sel = 2'b10;
    rom[LOAD_RM + 1].seq          = SEQ_JUMP;
    rom[LOAD_RM + 1].target       = FETCH;

    rom[LOAD_MR].mem_wr       = 1'b1;
    rom[LOAD_MR].addr_bus_sel = 2'b10;
    rom[LOAD_MR].seq          = SEQ_JUMP;
    rom[LOAD_MR].target       = FETCH;

    rom[HALT].seq = SEQ_HALT;
  end

  always_comb begin
    uinstr_o = rom[micro_pc_i];
  end

endmodule
