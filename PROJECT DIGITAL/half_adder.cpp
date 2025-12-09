module half_adder(
    input  logic a,    // First input
    input  logic b,    // Second input
    output logic s,    // (A XOR B)
    output logic c     // (A AND B)
);

xor_gate sum_inst(
    .a(a),
    .b(b),
    .y(s)
);


and_gate carry_inst(
    .a(a),
    .b(b),
    .y(c)
);

endmodule