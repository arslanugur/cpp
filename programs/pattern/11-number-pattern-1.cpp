#include<iostream>
using namespace std;

int main()
{
    int num, c, k;

    cout << "Enter number of rows : ";
    cin >> num;
    cout << "\n";

    for (c = 1; c <= num; c++)
    {
        for (k = 1; k <= c; k++)
        {
            cout << c;
        }

        cout << "\n";
    }
}

/*
Output:
Enter number of rows : 9
1
22
333
4444
55555
666666
7777777
88888888
999999999
*/


