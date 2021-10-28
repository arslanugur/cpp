#include <iostream>
using namespace std;

int main()
{
    int i, j;
    char input, temp = 'A';
    cout << "Enter uppercase character you want in triange at last row: ";
    cin >> input;
    for (i = 1; i <= (input - 'A' + 1); ++i)
    {
        for (j = 1; j <= i; ++j)
            cout << temp << " ";
        ++temp;
        cout << endl;
    }
    return 0;
}

/*
Output:
Enter uppercase character you want in triange at last row: E
A
B B
C C C
D D D D
E E E E E
*/

