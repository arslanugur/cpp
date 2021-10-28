#include<iostream>
using namespace std;

int main()
{
    int i, n, j;

    cout << "Enter number of lines for Pattern : ";
    cin >> n;

    for (i = n; i > 0; i--)
    {
        for (j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (j = 2 * i - 1; j > 0; j--)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}

/*
Output:
Enter number of lines for Pattern : 5
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
*/


