#include <iostream>
using namespace std;
long gcd(long, long);
int main() {
long x, y, hcf, lcm;

cout<<"Enter two integers\n";
cin>>x>>y;

hcf = gcd(x, y);
lcm = (x*y)/hcf;

cout<<"Greatest common divisor of "<<x <<"and"<<y<<" = "<<hcf<<"\n";
cout<<"Least common multiple of "<< x <<"and "<< y<<"= "<<lcm<<"\n";

return 0;
}

/*if 1st no is 0 then 2nd no is gcd
make 2nd no 0 by subtracting smallest from largest and return 1st no as gcd*/
long gcd(long x, long y) {
if (x == 0) {
return y;
}

while (y != 0) {
if (x > y) {
x = x - y;
}
else {
y = y - x;
}
}

return x;
}

/*
Output:
Enter two integers                                                                 
4 7                                                                                
Greatest common divisor of 4and7 = 1                                               
Least common multiple of 4and 7= 28 
*/

