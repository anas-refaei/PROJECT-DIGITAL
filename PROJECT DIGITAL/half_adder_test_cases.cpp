module tb_half_adder;

logic a;
logic b;
logic s;
logic c;

half_adder uut(
    .a(a),
    .b(b),
    .s(s),
    .c(c)
);

initial begin

// Test case 1: 0 + 0 = 0
a = 0; b = 0;
#10;
$display("%4t | %b %b | %b %b | S=0 C=0 %s",
    $time, a, b, s, c,
    (s == 0 && c == 0) ? "PASS" : "FAIL");

// Test case 2: 0 + 1 = 1
a = 0; b = 1;
#10;
$display("%4t | %b %b | %b %b | S=1 C=0 %s",
    $time, a, b, s, c,
    (s == 1 && c == 0) ? "PASS" : "FAIL");

// Test case 3: 1 + 0 = 1
a = 1; b = 0;
#10;
$display("%4t | %b %b | %b %b | S=1 C=0 %s",
    $time, a, b, s, c,
    (s == 1 && c == 0) ? "PASS" : "FAIL");

// Test case 4: 1 + 1 = 10 (binary)
a = 1; b = 1;
#10;
$display("%4t | %b %b | %b %b | S=0 C=1 %s",
    $time, a, b, s, c,
    (s == 0 && c == 1) ? "PASS" : "FAIL");

$finish;
end

endmodule