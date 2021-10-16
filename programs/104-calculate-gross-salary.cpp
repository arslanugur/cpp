#include <iostream>
using namespace std;
int main()
{
int gross_salary, basic, da, ta;

cout<<"Enter basic salary : ";
cin>>basic;

da = (10 * basic)/100;
ta = (12 * basic)/100;

gross_salary = basic + da + ta;
cout<<"\nGross salary :"<<gross_salary;
}

/*
Output:
Enter basic salary : 8000                                                          
Gross salary :9760
*/

