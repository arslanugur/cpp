#include <iostream>
using namespace std;

int add(int a, int b=20) //here default value of b is given
{
int result;

result = a + b;

return (result);
}

int main ()
{
int a = 5;
int b = 10;
int result;

// both values are passed to function
result = add(a, b);
cout << "Total value is :" << result << endl;

// only one value is passed
result = add(a);
cout << "Total value is :" << result << endl;

return 0;
}

/*
Output:
Total value is :15
Total value is :25
*/

