// Introduction Examples
// Example: In this program, user is asked to enter two numbers (floating point numbers). 
// Then, the product of those two numbers is stored in a variable and displayed on the screen.

// C++Program to Multiply Two Numbers
#include <iostream>
using namespace std;

int main() {
  double num1, num2, product;
  cout << "Enter two numbers: ";

  // stores two floating point numbers in num1 and num2 respectively
  cin >> num1 >> num2;
 
  // performs multiplication and stores the result in product variable
  product = num1 * num2;  

  cout << "Product = " << product;    
    
  return 0;
}
// Output
// Enter two numbers: 3.4
// 5.5
// Product = 18.7
// In this program, the user is asked to enter two numbers. These two numbers entered by the user are stored in variable num1 and num2 respectively.

// Then, the product of num1 and num2 is evaluated and the result is stored in variable product.

// Finally, the product is displayed on the screen.


