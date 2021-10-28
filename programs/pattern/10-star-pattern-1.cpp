#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    int i, j, rows;

    //take number of rows
    cout << "Enter the number of rows : ";
    cin >> rows;

    for (i = rows; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

/*
Output:
Enter the number of rows: 9
* * * * * * * * *
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/


