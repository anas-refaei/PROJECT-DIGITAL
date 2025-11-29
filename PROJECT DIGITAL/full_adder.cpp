module full_adder(
    input  logic a,      // First input bit
    input  logic b,      // Second input bit
    input  logic cin,    // Carry input
    output logic s,      // Sum output
    output logic cout    // Carry output
);

// Internal wires to connect the half adders
// logic is a data type in SystemVerilog used to represent binary values (0, 1, X, Z for high impedance).
logic sum1;    // Output sum from first half adder
logic carry1;  // Output carry from first half adder
logic carry2;  // Output carry from second half adder



// First Half Adder: adds a + b
// THINK OF IT LIKE THE OOP I CREATED INSTANCE OBJECT FROM THE HALF_ADDER CLASS
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
assign cout = carry1 | carry2;

endmodule