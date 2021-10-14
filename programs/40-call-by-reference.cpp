#include <iostream>
using namespace std;

// function declaration
void swap(int &x, int &y);

int main ()
{
int a = 5;
int b = 10;

cout << "value of a before swapping : " << a << endl;
cout << "value of b before swapping :" << b << endl;

/* calling a function to swap the values using variable reference.*/
swap(a, b);

cout << "value of a after swapping : " << a << endl;
cout << "value of b after swapping :" << b << endl;

return 0;
}

// function definition to swap the values.
void swap(int &x, int &y)
{
int temp;
temp = x; /* save the value at address x */
x = y; /* put y into x */
y = temp; /* put x into y */

return;
}

/*
Output:
value of a before swapping : 5
value of b before swapping : 10
value of a after swapping : 10
value of b after swapping : 5
*/

