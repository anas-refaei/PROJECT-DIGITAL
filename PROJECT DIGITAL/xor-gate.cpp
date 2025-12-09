module xor_gate(
    input  logic a,
    input  logic b,
    output logic y
);

logic na, nb, t1, t2;

not (na, a);
not (nb, b);

and_gate a1(.a(a), .b(nb), .y(t1));
and_gate a2(.a(na), .b(b), .y(t2));

or_gate  o1(.a(t1), .b(t2), .y(y));

endmodule