#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    //variable declaration
    int number;

    //take input for number from user
    cout << "Enter number : ";
    cin >> number;

    //use of sqrt function to find square root
    cout << "square root of " << number << " is " << sqrt(number);

    cout << "\n\n";

    //use of cbrt function to find cube root
    cout << "cube root of " << number << " is " << cbrt(number);

    cout << "\n";

    return 0;
}

/*
Output:
Enter number : 27
square root of 27 is 5.19615
cube root of 27 is 3
*/

