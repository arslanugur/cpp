// This program declares 4 variables of type int, float, double and char. Then, the size of each variable is evaluated using sizeof operator.

// To find the size of variable,  sizeof operator is used.
sizeof(dataType);
Example: Find Size of a Variable
#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}
// Output:
// Size of char: 1 byte
// Size of int: 4 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// Note: You may get different result if you are using a old computer.


