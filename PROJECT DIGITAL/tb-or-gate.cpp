module tb_or_gate;

logic a;
logic b;
logic y;

or_gate uut(
    .a(a),
    .b(b),
    .y(y)
);

initial begin

// Test case 1: 0 or 0 = 0
a = 0; b = 0;
#10;
$display("%4t | %b %b | %b | Y=0 %s",
    $time, a, b, y,
    (y == 0) ? "PASS" : "FAIL");

// Test case 2: 0 or 1 = 1
a = 0; b = 1;
#10;
$display("%4t | %b %b | %b | Y=1 %s",
    $time, a, b, y,
    (y == 1) ? "PASS" : "FAIL");

// Test case 3: 1 or 0 = 1
a = 1; b = 0;
#10;
$display("%4t | %b %b | %b | Y=1 %s",
    $time, a, b, y,
    (y == 1) ? "PASS" : "FAIL");

// Test case 4: 1 or 1 = 1
a = 1; b = 1;
#10;
$display("%4t | %b %b | %b | Y=1 %s",
    $time, a, b, y,
    (y == 1) ? "PASS" : "FAIL");

$stop;
end

endmodule