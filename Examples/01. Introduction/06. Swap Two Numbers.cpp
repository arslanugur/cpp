// Introduction Examples
// Example: two different techniques to swap numbers in C programming. 
//          The first program uses temporary variable to swap numbers, whereas the second program doesn't use temporary variables.

// Example 1: Swap Numbers (Using Temporary Variable)
#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
// Output:
// Before swapping.
// a = 5, b = 10

// After swapping.
// a = 10, b = 5
// To perform swapping in above example, three variables are used.

// The contents of the first variable is copied into the temp variable. Then, the contents of second variable is copied to the first variable.

// Finally, the contents of the temp variable is copied back to the second variable which completes the swapping process.

// You can also perform swapping using only two variables as below.

// Example 2: Swap Numbers Without Using Temporary Variables
#include <iostream>
using namespace std;

int main()
{
    
    int a = 5, b = 10;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
// The output of this program is the same as the first program above.

// Let us see how this program works:

// Initially, a = 5 and b = 10.
// Then, we add a and b and store it in a with the code a = a + b. This means a = 5 + 10. So, a = 15 now.
// Then we use the code b = a - b. This means b = 15 - 10. So, b = 5 now.
// Again, we use the code a = a - b. This means a = 15 - 5. So finally, a = 10.
// Hence, the numbers have been swapped.

// Note: We can use multiplication and division instead of addition and subtraction. However, this won't work if one of the numbers is 0.
int a = 5, b = 10;

// using multiplication and division for swapping
a = a * b;    // a = 50
b = a / b;    // b = 5
a = a / b;    // a = 10


