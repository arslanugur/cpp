#include <iostream>
using namespace std;

// function declaration with reference
void swap(int& x, int& y);

int main ()
{
int a = 10;
int b = 20;

cout << "Value of a Before swapping :" << a << endl;
cout << "Value of b Before swapping :" << b << endl;

/* Function call */
swap(a, b);

cout << "Value of a After swapping :" << a << endl;
cout << "Value of b After swapping :" << b << endl;

return 0;
}

void swap(int& x, int& y) //reference variable is as parameter to the function
{
int temp;
temp = x;
x = y;
y = temp;

return;
}

/*
Output:
Value of a Before swapping :10
Value of b Before swapping :20
Value of a After swapping :20
Value of b After swapping :10
*/

