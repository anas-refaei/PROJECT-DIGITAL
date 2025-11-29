module tb_rca4;
// Separate inputs
logic a0, a1, a2, a3;
logic b0, b1, b2, b3;
logic cin;

// Separate outputs
logic s0, s1, s2, s3;
logic cout;

// Connect to the RCA
rca_4bit uut(
    .a0(a0), .a1(a1), .a2(a2), .a3(a3),
    .b0(b0), .b1(b1), .b2(b2), .b3(b3),
    .cin(cin),
    .s0(s0), .s1(s1), .s2(s2), .s3(s3),
    .cout(cout)
);

initial begin
// Initialize all to 0
a0 = 0; a1 = 0; a2 = 0; a3 = 0;
b0 = 0; b1 = 0; b2 = 0; b3 = 0;
cin = 0;
#10;

// Test 1: Add 1 + 0 (Only bit 0 changes)
a0 = 1;
#10;

// Test 2: Add 3 + 0 (Bits 0 and 1 are High)
// This will create a nice "step" shape in the waveform
a1 = 1;
#10;

// Test 3: Add 7 + 0 (Bits 0, 1, 2 are High)
a2 = 1;
#10;

$finish;
end
endmodule