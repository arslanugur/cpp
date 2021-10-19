#include <iostream>
using namespace std;

int main ()
{
// an array of 4 elements.
double balance[4] = {18,9,51,33};
double *p;

p = balance;

// output each array element's value
cout << "Using Pointer array values are as follows " << endl;
for ( int i = 0; i < 4; i++ )
{
cout << "*(p + " << i << ") : ";
cout << *(p + i) << endl;
}

cout << "Using Balance array values are as follows" << endl;
for ( int i = 0; i < 4; i++ )
{
cout << "*(balance + " << i << ") : ";
cout << *(balance + i) << endl;
}

return 0;
}

/*
Output:
Array values using pointer
*(p + 0) : 18
*(p + 1) : 9
*(p + 2) : 51
*(p + 3) : 33
Array values using balance as address
*(balance + 0) : 18
*(balance + 1) : 9
*(balance + 2) : 51
*(balance + 3) : 33
*/

