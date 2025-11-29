// Testbench for Full Adder
// Tests all 8 input combinations

module tb_full_adder;

// Declare testbench signals
logic a;
logic b;
logic cin;
logic s;
logic cout;

// Instantiate the Full Adder (Unit Under Test)
full_adder uut(
    .a(a),
    .b(b),
    .cin(cin),
    .s(s),
    .cout(cout)
);

// Test stimulus
initial begin
$display("===========================================");
$display("     Full Adder Testbench");
$display("===========================================");
$display("Time | A B Cin | S Cout | Expected");
$display("-------------------------------------------");

// Test case 1: 0 + 0 + 0 = 0
a = 0; b = 0; cin = 0;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=0 C=0 %s",
    $time, a, b, cin, s, cout,
    (s == 0 && cout == 0) ? "PASS" : "FAIL");

// Test case 2: 0 + 0 + 1 = 1
a = 0; b = 0; cin = 1;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=1 C=0 %s",
    $time, a, b, cin, s, cout,
    (s == 1 && cout == 0) ? "PASS" : "FAIL");

// Test case 3: 0 + 1 + 0 = 1
a = 0; b = 1; cin = 0;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=1 C=0 %s",
    $time, a, b, cin, s, cout,
    (s == 1 && cout == 0) ? "PASS" : "FAIL");

// Test case 4: 0 + 1 + 1 = 10 (binary)
a = 0; b = 1; cin = 1;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=0 C=1 %s",
    $time, a, b, cin, s, cout,
    (s == 0 && cout == 1) ? "PASS" : "FAIL");

// Test case 5: 1 + 0 + 0 = 1
a = 1; b = 0; cin = 0;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=1 C=0 %s",
    $time, a, b, cin, s, cout,
    (s == 1 && cout == 0) ? "PASS" : "FAIL");

// Test case 6: 1 + 0 + 1 = 10 (binary)
a = 1; b = 0; cin = 1;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=0 C=1 %s",
    $time, a, b, cin, s, cout,
    (s == 0 && cout == 1) ? "PASS" : "FAIL");

// Test case 7: 1 + 1 + 0 = 10 (binary)
a = 1; b = 1; cin = 0;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=0 C=1 %s",
    $time, a, b, cin, s, cout,
    (s == 0 && cout == 1) ? "PASS" : "FAIL");

// Test case 8: 1 + 1 + 1 = 11 (binary)
a = 1; b = 1; cin = 1;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=1 C=1 %s",
    $time, a, b, cin, s, cout,
    (s == 1 && cout == 1) ? "PASS" : "FAIL");

$display("===========================================");
$display("     Full Adder Test Complete");
$display("===========================================");
$finish;
end

endmodule
