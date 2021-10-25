//program to convert decimal to octal or vise versa
#include <iostream>
#include <cmath>
using namespace std;

//method declaration
int decimal_octal(int n);
int octal_decimal(int n);

int main()
{
    //variable declaration
    int n;
    char c;

    //take user input
    cout << "Enter your choice : " << endl;
    cout << "1. Enter alphabet 'o' to convert decimal to octal." << endl;
    cout << "2. Enter alphabet 'd' to convert octal to decimal." << endl;
    cin >> c;
    if (c =='d' || c == 'D')
    {
        cout << "Enter a octal number : ";
        cin >> n;
        cout << n << " in octal : " << octal_decimal(n) << " in decimal";
    }

    if (c =='o' || c == 'O')
    {
        cout << "Enter a decimal number : ";
        cin >> n;
        cout << n << " in decimal : " << decimal_octal(n) << " in octal";
    }

    return 0;
}

/* Function to convert decimal to octal */
int decimal_octal(int n)
{
    int rem, i=1, octal=0;
    while (n!=0)
    {
        rem=n%8;
        n/=8;
        octal+=rem*i;
        i*=10;
    }

    return octal;
}

/* Function to convert octal to decimal */
int octal_decimal(int n)
{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(8,i);
        ++i;
    }
    return decimal;
}

/*
Output:
Enter your choice :
1. Enter alphabet 'o' to convert decimal to octal.
2. Enter alphabet 'd' to convert octal to decimal.
o
Enter a decimal number : 34
34 in decimal : 42 in octal
*/

