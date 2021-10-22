#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, j, k, temp;
    cout << "Enter no of element of array : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter " << i << " element : ";
        cin >> a[i];
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else
                break;
        }
    }

    cout << "Insertion  Sort Output" << endl;
    for (k = 0; k < n; k++)
    {
        cout << a[k] << endl;
    }

    return 0;
}

/*
Output:
Enter no of element of array : 5
Enter 1 element : 1
Enter 2 element : 6
Enter 3 element : 7
Enter 4 element : 4
Enter 5 element : 3
Insertion  Sort Output
1
3
4
6
7
*/


