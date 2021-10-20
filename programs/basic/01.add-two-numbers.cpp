#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int num1, num2, result;

    //take user input
    cout << "Enter first Number : ";
    cin >> num1;

    cout << "\nEnter second Number : ";
    cin >> num2;

    //to add two number
    result = num1 + num2;

    //display addition
    cout << "\nAddition is : " << result;

    return 0;
}

Add two numbers
Enter first Number : 2 3
Enter second Number :
Addition is : 5
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{
    // Local variable declaration:
    int num = 10;

    // do loop execution
    do
    {
        cout << "value of number: " << num << endl;
        num = num + 1;
        if (num > 15)
        {
            // terminate the loop
            break;
        }
    } while (num < 20);

    return 0;
}

Break keyword
value of number: 10
value of number: 11
value of number: 12
value of number: 13
value of number: 14
value of number: 15
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter any non-zero Number : ";
    cin >> num;
    if (num > 0)
    {
        cout << "Number is positive";
    }
    else
    {
        cout << "Number is negative";
    }

    return 0;
}

Check if the number pos or neg
Enter any non-zero Number : -9
Number is negative
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <iostream>

using namespace std;

int main()
{
    int num;
    num = 50;

    cout << "number is=" << num << endl;
    //endl is manipulator
    //endl is output manipulator
    cout << "value of number=" << num << "\n";
}

Endl keyword
number is=50
value of number=50
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <iostream>

using namespace std;

int main()
{
    //variable declaration
    char asciichar;

    //take user input
    cout << "Enter a character : ";
    cin >> asciichar;

    //display ascii value of character
    cout << "\nIt's ascii  value is : " << (int) asciichar << endl;

    return 0;
}

Find ascii value of a character
Enter a character : a
It's ascii  value is : 97
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <iostream>

using namespace std;

int main()
{
    int var;
    char var_array[10];

    cout << "Address of variable1 is : ";
    cout << &var << "\n";

    cout << "Address of variable2 is : ";
    cout << &var_array << "\n";

    return 0;
}

Pointer example
Address of variable1 is : 0x29feec
Address of variable2 is : 0x29fee2
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
