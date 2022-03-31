// Introduction Examples
// Example: Find the quotient and remainder of a given dividend and divisor.

// In this program, the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.

// To compute quotient and remainder, both divisor and dividend should be integers.

// Example: Compute quotient and remainder
#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
// Output:
// Enter dividend: 13
// Enter divisor: 4
// Quotient = 3
// Remainder = 1
// The division operator / computes the quotient (either between float or integer variables).

// The modulus operator % computes the remainder when one integer is divided by another (modulus operator cannot be used for floating-type variables).


