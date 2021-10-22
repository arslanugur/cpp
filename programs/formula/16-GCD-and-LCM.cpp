#include<iostream>
using namespace std;

int main()
{

    //variable declaration
    int num1, num2, gcd = 1;

    //take input from user
    cout << "Enter two numbers : ";
    cin >> num1;
    cin >> num2;

    //logic to calculate gcd and lcm
    for (int i = 1; i < 1000; ++i)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            gcd = i;
        }
    }

    //print calculated value of gcd and lcm

    cout << "\nGCD of two number is : " << gcd;
    cout << "\nLCM of two number is : " << (num1 * num2) / gcd;
}

/*
Output:
Enter two numbers : 
5
2

GCD of two number is : 1
LCM of two number is : 10
*/

