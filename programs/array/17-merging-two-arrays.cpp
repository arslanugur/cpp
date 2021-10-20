#include<iostream>
using namespace std;


int main()
{

    int arr1[100], arr2[100], resultarr[100], n, m, i, j, k, s;

    cout << " Merging Two Arrays";
    cout << "\n\nEnter No. of Elements in First Array : ";
    cin >> n;

    cout << "\nEnter Elements : \n";

    for (i = 1; i <= n; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter No. of Elements in Second Array : ";
    cin >> m;

    cout << "\nEnter Elements in Sorted Order : \n";

    for (i = 1; i <= m; i++)
    {
        cin >> arr2[i];
    }

    i = 1, j = 1;

    for (k = 1; k <= n + m; k++)
    {
        // Compare Elements of Array A and Array B
        if (arr1[i] < arr2[j])
        {
            resultarr[k] = arr1[i];
            i++;

            if (i > n)
            {
                goto b;
            }

        }

        else
        {
            resultarr[k] = arr2[j];
            j++;

            if (j > m)
            {
                goto a;
            }

        }
    }


    a:
    // Copy the Remaining Elements of Array A to C
    for (s = i; s <= n; s++)
    {
        k++;
        resultarr[k] = arr1[s];
    }


    b:
    // Copy the Remaining Elements of Array B to C
    for (s = j; s <= m; s++)
    {
        k++;
        resultarr[k] = arr2[s];
    }

    cout << "\n\nAfter Merging Two Arrays:\n";

    for (k = 1; k <= n + m; k++)
    {
        cout << resultarr[k] << endl;
    }
    return 0;
}

/*
Output:
Merging Two Arrays
Enter No. of Elements in First Array : 4

Enter Elements :
7
5
8
6

Enter No. of Elements in Second Array : 4

Enter Elements in Sorted Order :
8
4
1
3


After Merging Two Arrays:
7
5
8
4
1
3
8
6
*/

