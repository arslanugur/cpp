// Introduction Examples
// Example: User is asked to enter two integers. Then, the sum of those two integers is stored in a variable and displayed on the screen. Primary tabs

// Example: Program to Add Two Integers
#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_number + second_number;

  // prints sum 
  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}
// Output:
// Enter two integers: 4
// 5
// 4 + 5 = 9
// In this program, the user is asked to enter two integers. These two integers are stored in variables first_number and second_number respectively.

// Then, the variables are added using the + operator and stored in the sum variable.

// Finally, sum is displayed on the screen.


