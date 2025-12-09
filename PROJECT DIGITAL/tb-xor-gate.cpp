module tb_xor_gate;

logic a;
logic b;
logic y;

xor_gate uut(
    .a(a),
    .b(b),
    .y(y)
);

initial begin

// Case 1: 0 xor 0 = 0
a = 0; b = 0;
#10;
$display("%4t | %b %b | %b | 0 %s", $time, a, b, y, (y == = 0) ? "PASS" : "FAIL");

// Case 2: 0 xor 1 = 1
a = 0; b = 1;
#10;
$display("%4t | %b %b | %b | 1 %s", $time, a, b, y, (y == = 1) ? "PASS" : "FAIL");

// Case 3: 1 xor 0 = 1
a = 1; b = 0;
#10;
$display("%4t | %b %b | %b | 1 %s", $time, a, b, y, (y == = 1) ? "PASS" : "FAIL");

// Case 4: 1 xor 1 = 0
a = 1; b = 1;
#10;
$display("%4t | %b %b | %b | 0 %s", $time, a, b, y, (y == = 0) ? "PASS" : "FAIL");

$finish;
end

endmodule