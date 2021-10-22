#include<stdio.h>
#include<iostream>
using namespace std;

//Function prototyping
int add(int, int);

int main()
{
    int num1, num2, output;

    cout << "enter two numbers : ";
    cin >> num1;
    cin >> num2;

    /*
        Pass the value of num1 and num2 as parameter to function add.
        The value returned is stored in the variable output
    */

    output = add(num1, num2);
    cout << "addition of number " << num1 << " and " << num2 << " = " << output;

}

// Defining the function add()
int add(int no1, int no2)
{
    int result;
    result = no1 + no2;
    return result;
}

/*
Output:
enter two numbers : 
5
6
addition of number 5 and 6 = 11
*/


