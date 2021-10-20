#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int arr[10][10], i, j, size;

    cout << "Enter size of matrix : ";
    cin >> size;


    cout << "Enter values in matrix : \n";
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                cout << "\n\nMatrix is not symmetric";

                exit(0);
            }
        }
    }
    cout << "\n\nMatrix is symmetric";

    return 0;
}

/*
Output:
Enter size of matrix : 3
Enter values in matrix :
5 6 7
6 3 2
7 2 1

Matrix is symmetric
*/

