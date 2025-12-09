module tb_rca4;

logic a0, a1, a2, a3;
logic b0, b1, b2, b3;
logic cin;

logic s0, s1, s2, s3;
logic cout;

rca_4bit uut(
    .a0(a0), .a1(a1), .a2(a2), .a3(a3),
    .b0(b0), .b1(b1), .b2(b2), .b3(b3),
    .cin(cin),
    .s0(s0), .s1(s1), .s2(s2), .s3(s3),
    .cout(cout)
);

initial begin

// Test 1: (0 + 0 = 0)
a0 = 0; a1 = 0; a2 = 0; a3 = 0;
b0 = 0; b1 = 0; b2 = 0; b3 = 0;
cin = 0;
#10;

// Test 2: (5 + 10 = 15)
// Binary: 0101 + 1010 = 1111 
a0 = 1; a1 = 0; a2 = 1; a3 = 0;
b0 = 0; b1 = 1; b2 = 0; b3 = 1;
cin = 0;
#10;

// Test 3: (10 + 5 = 15)
// Binary: 1010 + 0101 = 1111
a0 = 0; a1 = 1; a2 = 0; a3 = 1;
b0 = 1; b1 = 0; b2 = 1; b3 = 0;
cin = 0;
#10;

// Test 4: (7 + 1 = 8)
// Binary: 0111 + 0001 = 1000
a0 = 1; a1 = 1; a2 = 1; a3 = 0;
b0 = 1; b1 = 0; b2 = 0; b3 = 0;
cin = 0;
#10;

// Test 5: (0 + 0 + 1 = 1)
a0 = 0; a1 = 0; a2 = 0; a3 = 0;
b0 = 0; b1 = 0; b2 = 0; b3 = 0;
cin = 1;
#10;

// Test 6: (6 + 7 = 13)
// Binary: 0110 + 0111 = 1101
a0 = 0; a1 = 1; a2 = 1; a3 = 0; // A = 6
b0 = 1; b1 = 1; b2 = 1; b3 = 0; // B = 7
cin = 0;
#10;

// Test 7:(15 + 15 + 1 = 31)
// Binary: 1111 + 1111 + 1 = 1111 (Sum) + 1 (Cout)
a0 = 1; a1 = 1; a2 = 1; a3 = 1; // A = 15
b0 = 1; b1 = 1; b2 = 1; b3 = 1; // B = 15
cin = 1;
#10;

// Test 8: (8 + 8 = 16)
// Binary: 1000 + 1000 = 0000 (Sum) + 1 (Cout)
a0 = 0; a1 = 0; a2 = 0; a3 = 1; // A = 8
b0 = 0; b1 = 0; b2 = 0; b3 = 1; // B = 8
cin = 0;
#10;

$finish;
end
endmodule