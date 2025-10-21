module adderTb();

reg  [7:0]   a_i;  // First 8-bit input vector
reg  [7:0]   b_i;  // Second 8-bit input vector
wire [7:0]   sum;
wire carry;
wire [8:0]   tot;

adder #(8) uut(.a_i(a_i), .b_i(b_i), .sum(sum), .carry(carry), .tot(tot));

initial begin
  $dumpfile("/home/krishna-prashant/SimpleALU/adderDump.vcd");    
  $dumpvars(0, adderTb);         
end

initial begin
a_i = 8'b10010101;
b_i = 8'b11010010;

#10

$display("a = %8b", a_i);
$display("b = %8b", b_i);
$display("sum = %8b", sum);
$display("carry = %1b", carry);
$display("total = %1b", tot);

$finish;
end
endmodule