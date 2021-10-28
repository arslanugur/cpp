#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    cout << "Enter the number of lines to be printed: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
            cout << " ";
        for (k = 0; k < (2 * i + 1); k++)
            cout << "*";

        cout << endl;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j <= i; j++)
            cout << " ";
        for (k = (2 * n - 2 * i - 3); k > 0; k--)
            cout << "*";
        cout << endl;
    }
    return 0;
}

/*
Output:
Enter the number of lines to be printed: 5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/    
