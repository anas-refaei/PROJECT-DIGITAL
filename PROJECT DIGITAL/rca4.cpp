module rca4 (
    input  logic [3:0] A,
    input  logic [3:0] B,
    input  logic       Cin,
    output logic [3:0] Sum,
    output logic       Cout
);

    logic c0, c1, c2; 

    full_adder fa0 (.a(A[0]), .b(B[0]), .cin(Cin), .s(Sum[0]), .cout(c0));
    full_adder fa1 (.a(A[1]), .b(B[1]), .cin(c0),  .s(Sum[1]), .cout(c1));
    full_adder fa2 (.a(A[2]), .b(B[2]), .cin(c1),  .s(Sum[2]), .cout(c2));
    full_adder fa3 (.a(A[3]), .b(B[3]), .cin(c2),  .s(Sum[3]), .cout(Cout));

endmodule
