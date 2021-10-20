#include<iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    float a[10][10] = {0}, d;

    cout << "Enter the order of matrix : ";
    cin >> n;
    cout << "Enter the elements : " << endl;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];

    for (i = 1; i <= n; i++)
        for (j = 1; j <= 2 * n; j++)
            if (j == (i + n))
                a[i][j] = 1;

    for (i = n; i > 1; i--)
    {
        if (a[i - 1][1] < a[i][1])
            for (j = 1; j <= n * 2; j++)
            {
                d = a[i][j];
                a[i][j] = a[i - 1][j];
                a[i - 1][j] = d;
            }
    }
    cout << "Augmented : " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n * 2; j++)
            cout << a[i][j] << "    ";
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n * 2; j++)
            if (j != i)
            {
                d = a[j][i] / a[i][i];
                for (k = 1; k <= n * 2; k++)
                    a[j][k] -= a[i][k] * d;
            }
    }

    for (i = 1; i <= n; i++)
    {
        d = a[i][i];
        for (j = 1; j <= n * 2; j++)
            a[i][j] = a[i][j] / d;
    }


    cout << "Inverse Matrix : " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = n + 1; j <= n * 2; j++)
            cout << a[i][j] << "    ";
        cout << endl;
    }

    return 0;
}

/*
Output:
Enter the order of matrix : 3
Enter the elements :
4
2
7
5
1
8
9
4
7
Augmented :
9    4    7    0    0    1
4    2    7    1    0    0
5    1    8    0    1    0
Inverse Matrix :
-0.490196    0.27451    0.176471
0.72549    -0.686274    0.0588236
0.215686    0.0392157    -0.117647
*/

