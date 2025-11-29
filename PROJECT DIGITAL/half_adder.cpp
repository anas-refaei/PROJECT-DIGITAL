//What is a Module ?
//A module is like a building block or component in digital design.Think of it like a box with :
//Inputs(wires going IN)
//Outputs(wires coming OUT)
//Logic inside(what the box does)

module half_adder(
    input  logic a,    // First input bit
    input  logic b,    // Second input bit
    output logic s,    // Sum output (a XOR b)
    output logic c     // Carry output (a AND b)
);

// Half Adder Logic
assign s = a ^ b;  // Sum = a XOR b
assign c = a & b;  // Carry = a AND b

endmodule