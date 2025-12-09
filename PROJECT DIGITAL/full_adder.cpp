
module full_adder(
    input  logic a,
    input  logic b,
    input  logic cin,
    output logic s,
    output logic cout
);

// Internal wires to connect the half adders

logic sum1;
logic carry1;
logic carry2;



// First Half Adder: adds a + b
half_adder ha1(
    .a(a),
    .b(b),
    .s(sum1),
    .c(carry1)
);

// Second Half Adder: adds sum1 + cin
half_adder ha2(
    .a(sum1),
    .b(cin),   //add the caryy input to the summ of the first half adder    
    .s(s),
    .c(carry2)
);

// OR gate: combines both carry outputs
or_gate carry_or(
    .a(carry1),
    .b(carry2),
    .y(cout)
);

endmodule