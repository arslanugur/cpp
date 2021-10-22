#include <iostream>
using namespace std;
int main()
{
int a, b;
cout<<"\nEnter value for num1 & num2 :";
cin>>a>>b;

a = a + b;
b = a - b;
a = a - b;

cout<<"\nAfter swapping value of a :"<<a;
cout<<"\nAfter swapping value of b :"<<b;
return (0);
}

/*
Output:
Enter value for num1 & num2 :5 7                                                                                 
After swapping value of a :7                                                   
After swapping value of b :5
*/

