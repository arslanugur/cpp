#include <iostream>
using namespace std;
long factorial(int);

int main()
{
int n;
long f;

cout<<"Enter an integer to find factorial\n";
cin>>n;

if (n < 0)
cout<<"Negative integers are not allowed.\n";
else
{
f = factorial(n);
cout<<n<<"! ="<<f<<"\n";
}

return 0;
}

long factorial(int n)
{
if (n == 0)
return 1;
else
return(n * factorial(n-1));
/recursive call to factorial function/
}

/*
Output:
Enter an integer to find factorial                                                 
5                                                                                  
5! =120 
*/

