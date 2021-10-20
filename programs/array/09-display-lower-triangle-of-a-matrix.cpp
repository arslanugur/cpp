#include<iostream>
using namespace std;

//method declaration
void lower_halfmatrix(int mat[10][10], int row);

//define main method
int main()
{
    //variable declaration
    int mat[10][10], i, j, row, col;

    //enter number of row and column you want
    cout << "Enter how many numbers of row and column you want : ";
    cout << "\n";
    cin >> row;
    cout << "\n";
    cin >> col;
    cout << "\n";
    cout << "enter elements";
    cout << "\n";

    for (i = 0; i < row; i++)
    {
        cout << "\n";
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    lower_halfmatrix(mat, row);

    return 0;
}

//method definition
void lower_halfmatrix(int mat[10][10], int row)
{
    int i, j;
    cout << "\n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

/*Output:
Enter how many numbers of row and column you want :
3
3

enter elements
7
5
2

1
3
6

4
9
8

7
1 3
4 9 8 */


