#include <iostream>
using namespace std;

int main ()
{
int var = 10; // Variable Declaration
int *ip; // variable for Pointer

ip = &var; // address of variable is stored in pointer variable

cout << "Value of var variable: ";
cout << var << endl; //Print value of variable

// Print the address of variable
cout << "Address stored in ip variable: ";
cout << ip << endl;

// access the value at the address available in pointer
cout << "Value of *ip variable: ";
cout << *ip << endl;

return 0;
}

/*
Output:
Value of var variable: 10
Address stored in ip variable: 0x22ff44
Value of *ip variable: 10
*/


