#include <iostream>
using namespace std;

// function declaration
int addition(int x, int y);

int main ()
{
int a = 5;
int b = 10;
int sum ;

cout << "Value of a = " << a << endl;
cout << "Value of b = " << b << endl;

//Function call to add numbers
sum = addition(a, b); //call by value of variables

cout << " addition of two numbers = " << sum << endl;
return 0;
}

int addition(int x, int y)
{
int add;
add = x+y;
return add;
}

/*
Output:
Value of a = 5
Value of b = 10
addition of two numbers = 15
*/
