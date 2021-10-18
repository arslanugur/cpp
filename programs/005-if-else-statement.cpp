#include <iostream>
using namespace std;
int main ()
{
int a = 10;
// check for condition
if( a > 20 )
{
// if condition is true then print the following

cout<< " If Condition is satisfied ";
cout << "a is greater than 20" << endl;
}
else
{
// if condition is false then print the following

cout<< " If Condition is not satisfied ";
cout << "a is not greater than 20" << endl;
}

cout << "value of a is : " << a << endl;

return 0;
}
/*Output:If Condition is not satisfied
         a is not greater than 20
         value of a is : 10*/

