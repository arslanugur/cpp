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

/*
Output:
value of number: 10
value of number: 11
value of number: 12
value of number: 13
value of number: 14
value of number: 15
*/

