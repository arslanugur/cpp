Introduction Examples
// Example: Print the number entered by a user using C++ cout statement.

// Example: Print Number Entered by User
#include <iostream>
using namespace std;

int main() {    
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;    
    return 0;
}
// Output:
// Enter an integer: 23
// You entered 23

// This program asks the user to enter a number.

// When the user enters an integer, it is stored in variable number using cin.

// Then it is displayed on the screen using cout.

// Starting from this example, we will be using the std namespace using the code:

using namespace std;
// This will allow us to write cout, cin, endl, etc. instead of std::cout, std::cin, std::endl respectively.

// This is simply to make our code cleaner and more readable.

// However, using the std namespace is considered a bad practice and we highly recommend you drop this practice once you've mastered the basics of C++.



