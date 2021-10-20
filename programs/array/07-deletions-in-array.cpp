#include<iostream>
using namespace std;

int main()
{

    int i, inputarray[10], no, pos;

    cout << "Enter 10 data elements in array: ";
    for (i = 0; i < 10; i++)
    {
        cin >> inputarray[i];
    }
    cout << "\nEnter position of element to delete: ";
    cin >> pos;

    if (pos > 10)
    {
        cout << "\n position value is not in range: ";
    }
    else
    {
        --pos;
        for (i = pos; i <= 9; i++)
        {
            inputarray[i] = inputarray[i + 1];
        }

        cout << "\n\nNew data in array: ";

        for (i = 0; i < 9; i++)
        {
            cout << inputarray[i];
            cout << " ";
        }
    }
    return 0;
}

/*Output:
Enter 10 data elements in array: 65
56
86
96
35
12
85
65
52
18

Enter position of element to delete: 3
New data in array: 65 56 96 35 12 85 65 52 18 */

