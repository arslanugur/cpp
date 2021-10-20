#include<iostream>
using namespace std;

//method declaration
void upper_halfofmatrix(int mat[10][10], int col, int r);

int main()
{
    //variable declaration
    int mat[10][10], row, col, i, j;
    //input for row and column
    cout << "Enter how many numbers of row and column you want : ";
    cin >> row >> col;
    //enter element into matrix
    cout << "enter elements: \n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    upper_halfofmatrix(mat, col, row);

    return 0;
}

//method definition
void upper_halfofmatrix(int mat[10][10], int col, int row)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i <= j)
                cout << mat[i][j];

            else
                cout << " ";
        }

        cout << "\n";
    }
}

/*Output:
Enter how many numbers of row and column you want : 3
3
enter elements:
1
2
3
4
5
6
7
8
9
123
 56
  9*/

