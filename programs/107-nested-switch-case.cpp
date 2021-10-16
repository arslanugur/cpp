#include <iostream>
using namespace std;

int main ()
{

int a = 10;
int b = 20;

switch(a)
{
case 10:
cout << " Outer Switch case " << endl;
switch(b)
{
case 20:
cout << " Inner Switch case " << endl;
}
}
cout << " value of a is : " << a << endl;
cout << " value of b is : " << b << endl;

return 0;
}

/*
Output:
Outer Switch case
Inner Switch case
value of a is : 10
value of b is : 20
*/

