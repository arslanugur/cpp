// Introduction Examples
// Example: to find ASCII value of a character in C++.

// A character variable holds ASCII value (an integer number between 0 and 127) rather than that character itself in C programming. That value is known as ASCII value.

// For example, ASCII value of 'A' is 65.

// What this means is that, if you assign 'A' to a character variable, 65 is stored in that variable rather than 'A' itself.

// Resource: ASCII chart of all 127 characters in C++.

// Example: Print ASCII Value in C++
#include <iostream>
using namespace std;

int main() {
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
 return 0;
}
// Output:
// Enter a character: p
// ASCII Value of p is 112
// When we explicitly print the integer value of a char type, it's corresponding ASCII value is printed.


