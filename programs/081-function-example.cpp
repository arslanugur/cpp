#include <iostream>
using namespace std;

// Function declaration
int Min(int x, int y);

int main ()
{

int a = 5;
int b = 10;
int Minnumber;

// Function call
Minnumber = Min(a, b);

cout << "Min value is : " << Minnumber << endl;

return 0;
}

// function definition
int Min(int x, int y)
{

int result;

if (x < y)
result = x;
else
result = y;

return result;
}

/*
Output:
Min value is : 5
*/

