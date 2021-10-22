#include<iostream>

using namespace std;

int main()
{
    int a[100], n, i, beg, end, mid, item;

    cout << "\n------------ BINARY SEARCH ------------ \n\n";
    cout << "Enter No. of Elements= ";
    cin >> n;

    cout << "\nEnter Elements in Sorted Order=\n";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter Item you want to Search= ";
    cin >> item;

    beg = 1;
    end = n;

    mid = (beg + end) / 2;

    while (beg <= end && a[mid] != item)
    {
        if (a[mid] < item)
            beg = mid + 1;
        else
            end = mid - 1;

        mid = (beg + end) / 2;
    }

    if (a[mid] == item)
    {
        cout << "\nElement found at location : " << mid;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}

/*
Output:
------------ BINARY SEARCH ------------

Enter No. of Elements= 5

Enter Elements in Sorted Order=
10
20
30
40
50

Enter Item you want to Search= 40

Element found at location : 4
*/

