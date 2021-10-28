#include <iostream>
#include <string>
using namespace std;

void PascalsTriangle(int);

int main()
{
    int n;
    cout << "Enter the number of rows you would like to print for Pascal's Triangle: ";
    cin >> n;
    cout << endl;
    PascalsTriangle(n);
    return 0;
}

int numdigits(int x)
{
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        ++count;
    }
    return count;
}

void PascalsTriangle(int n)
{
    int i, j, x, y, maxlen;
    string len;
    for (i = 0; i < n; i++)
    {
        x = 1;
        len = string((n - i - 1) * (n / 2), ' ');
        cout << len;
        for (j = 0; j <= i; j++)
        {
            y = x;
            x = x * (i - j) / (j + 1);
            maxlen = numdigits(x) - 1;
            if (n % 2 == 0)
                cout << y << string(n - 1 - maxlen, ' ');
            else
            {
                cout << y << string(n - 2 - maxlen, ' ');
            }
        }
        cout << endl;
    }
}

/*
Output:
Enter the number of rows you would like to print for Pascal's Triangle: 5

        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/  

