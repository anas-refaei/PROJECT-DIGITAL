module tb_full_adder;

logic a;
logic b;
logic cin;
logic s;
logic cout;

full_adder uut(
    .a(a),
    .b(b),
    .cin(cin),
    .s(s),
    .cout(cout)
);


initial begin

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

// Test case 4: 0 + 1 + 1 = 10 
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

// Test case 6: 1 + 0 + 1 = 10 
a = 1; b = 0; cin = 1;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=0 C=1 %s",
    $time, a, b, cin, s, cout,
    (s == 0 && cout == 1) ? "PASS" : "FAIL");

// Test case 7: 1 + 1 + 0 = 10 
a = 1; b = 1; cin = 0;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=0 C=1 %s",
    $time, a, b, cin, s, cout,
    (s == 0 && cout == 1) ? "PASS" : "FAIL");

// Test case 8: 1 + 1 + 1 = 11 
a = 1; b = 1; cin = 1;
#10;
$display("%4t | %b %b  %b  | %b  %b   | S=1 C=1 %s",
    $time, a, b, cin, s, cout,
    (s == 1 && cout == 1) ? "PASS" : "FAIL");


$finish;
end

endmodule