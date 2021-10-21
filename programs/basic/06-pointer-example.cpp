#include <iostream>
using namespace std;
int main()
{
    int var;
    char var_array[10];
    cout << "Address of variable1 is : ";
    cout << &var << "\n";
    cout << "Address of variable2 is : ";
    cout << &var_array << "\n";
    return 0;
}

/*
Output:
Address of variable1 is : 0x29feec
Address of variable2 is : 0x29fee2
*/

