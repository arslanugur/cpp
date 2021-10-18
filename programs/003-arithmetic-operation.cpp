#include <iostream>
using namespace std;
int main()
{
int first, second, add, subtract, multiply;
float divide;

cout<<"Enter two integers\n";
cin>>first>>second;

add = first + second;
subtract = first - second;
multiply = first * second;
divide = first / (float)second;     //typecasting

cout<<"Sum = "<<add<<"\n";
cout<<"Difference ="<<subtract<<"\n";
cout<<"Multiplication ="<<multiply<<"\n";
cout<<"Division ="<<divide<<"\n";

return 0;
} 


