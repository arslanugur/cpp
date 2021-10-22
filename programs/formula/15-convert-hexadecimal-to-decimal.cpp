#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;

    cout<<"Enter Hexadecimal Number : ";
    cin >> hex >> num;

    cout<<"Decimal number for given hexadecimal number is : ";
    cout << num << endl;

    return 0;
}

/*
Output:
Enter Hexadecimal Number : fffh
Decimal number for given hexadecimal number is : 4095
*/

