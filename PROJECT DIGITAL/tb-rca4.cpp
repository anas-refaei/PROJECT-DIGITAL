module tb_rca4;

    logic [3:0] A, B;
    logic Cin;
    logic [3:0] Sum;
    logic Cout;

    rca4 uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );

    initial begin
        // Test 1: 0 + 0 = 0
        A = 4'b0000; B = 4'b0000; Cin = 0;
        #10;

        // Test 2: 5 + 10 = 15
        A = 4'b0101; B = 4'b1010; Cin = 0;
        #10;

        // Test 3: 7 + 1 = 8
        A = 4'b0111; B = 4'b0001; Cin = 0;
        #10;

        // Test 4: 15 + 15 + 1 = 31
        A = 4'b1111; B = 4'b1111; Cin = 1;
        #10;

        // Test 5: 8 + 8 = 16
        A = 4'b1000; B = 4'b1000; Cin = 0;
        #10;

        $finish;
    end
endmodule
