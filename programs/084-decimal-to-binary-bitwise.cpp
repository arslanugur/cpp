#include <iostream>
using namespace std;
int main()
{
int n, c, k;

cout<<"Enter an integer in decimal number system\n";
cin>>n;

cout<<n<<"in binary number system is:\n";

for (c = 31; c >= 0; c--)
{
k = n >> c;
/Right shift(Binary Divide by 2)/
if (k & 1)//k is logically ANDed with 1
cout<<"1";
else
cout<<"0";
}

return 0;
}

/*
Output:
Enter an integer in decimal number system: 24                                                                                 
24in binary number system is: 00000000000000000000000000011000
*/

