module rca_4bit(
    input  logic a0, a1, a2, a3,
    input  logic b0, b1, b2, b3,
    input  logic cin,
    output logic s0, s1, s2, s3,
    output logic cout
);
logic c0, c1, c2;
full_adder fa0(.a(a0), .b(b0), .cin(cin), .s(s0), .cout(c0));
full_adder fa1(.a(a1), .b(b1), .cin(c0), .s(s1), .cout(c1));
full_adder fa2(.a(a2), .b(b2), .cin(c1), .s(s2), .cout(c2));
full_adder fa3(.a(a3), .b(b3), .cin(c2), .s(s3), .cout(cout));
endmodule