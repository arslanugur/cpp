#include <iostream>
using namespace std;

int main()
{
    int rows, i, j, k = 0;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; ++j)
            cout << k + j << " ";
        ++k;
        cout << endl;
    }
    return 0;
}

/*
Output:
Enter number of rows: 5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
  
  
