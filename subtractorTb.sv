module subtractorTb();

reg  [7:0]   a_i;  // First 8-bit input vector
reg  [7:0]   b_i;  // Second 8-bit input vector
wire [7:0]   diff;
wire sign;

subtractor #(8) uut(.a_i(a_i), .b_i(b_i), .diff(diff), .sign(sign));

initial begin
  $dumpfile("/home/krishna-prashant/SimpleALU/subtractorDump.vcd");    
  $dumpvars(0, subtractorTb);         
end

initial begin
a_i = 8'b10010101;
b_i = 8'b11010010;

#10

$display("a = %8b", a_i);
$display("b = %8b", b_i);
$display("diff = %8b", diff);
$display("sign = %1b", sign);

$finish;
end
endmodule