#include<iostream>
using namespace std;

int main()
{
    int a[100], i, n, p, ptr, temp;

    cout << "\n------------ INSERTION SORT ------------ \n\n";
    cout << "Enter No. of Elements : ";
    cin >> n;

    cout << "\nEnter Elements : \n";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    a[0] = 0;

    for (p = 2; p <= n; p++)
    {
        temp = a[p];
        ptr = p - 1;

        while (temp < a[ptr])
        {
            a[ptr + 1] = a[ptr];
            ptr--;
        }

        a[ptr + 1] = temp;
    }

    cout << "\nAfter Sorting : \n";
    for (i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

/*
Output:
------------ INSERTION SORT ------------

Enter No. of Elements : 8

Enter Elements :
9
7
1
6
3
4
5
8

After Sorting :
1
3
4
5
6
7
8
9
*/


