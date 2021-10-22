#include <iostream>
using namespace std;

inline int add(int num1, int num2)
{
    return num1 + num2;
}

inline int sub(int num1, int num2)
{
    return num1 - num2;
}

inline int mult(int num1, int num2)
{
    return num1 * num2;
}

inline int div(int num1, int num2)
{
    return num1 / num2;
}

// Main function for the program
int main()
{

    cout << "add (20,10)         : " << add(20, 10) << "\n";
    cout << "sub (1220,200)      : " << sub(1220, 200) << "\n";
    cout << "multiply (100,1010) : " << mult(100, 1010) << "\n";
    cout << "division (20,10)    : " << div(20, 10) << "\n";
    return 0;
}


/*
Output:
add (20,10)         : 30
sub (1220,200)      : 1020
multiply (100,1010) : 101000
division (20,10)    : 2
*/

