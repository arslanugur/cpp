#include <iostream>
using namespace std;
int main()
{
long num, decimal_num, remainder, base = 1, binary = 0;

cout<<"Enter a decimal integer \n";
cin>>num;
decimal_num = num;
while (num > 0)
{
remainder = num % 2;
binary = binary + remainder * base;
num = num / 2;
base = base * 10;
}
cout<<"Input number is ="<<decimal_num<<"\n";
cout<<"Its binary equivalent is ="<<binary<<"\n";
}

/*
Output:
Enter a decimal integer: 4                                                                                  
Input number is =4                                                                 
Its binary equivalent is =100
*/

