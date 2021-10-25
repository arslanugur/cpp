#include<iostream>

int main(void)
{
    int n,d,a,sum = 0; // Initializing the variable

    std:: cout << "Enter the number : ";
    std:: cin >> n;

    a = n;

    while(a > 0) // Finding the sum of digit
    {
        d = a % 10;
        sum = sum + d;
        a = a / 10;
    }

    if(n % sum == 0) //Checking if the remainder is zero or not
        std:: cout << "\nThe number is Niven Number ";
    else
        std:: cout << "\nThe number is not a Niven Number ";

    return 0;
}

/*
Output:
Enter the number : 54
The number is Niven Number
*/


