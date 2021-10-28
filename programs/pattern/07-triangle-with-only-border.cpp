#include <iostream>
using namespace std;

void drawTriangle(char border, char filler, int length)
{
    int start = 2;
    int base = 4;
    int i;
    for (i = start; i <= length; i++)
    {
        for (int sp = 0; sp <= length - i; sp++)
        {
            cout << " ";
        }
        if (i > start)
        {
            cout << border << " ";
        }
        if (i > start)
        {
            for (int b = base; b <= i; b++)
            {
                cout << filler << " ";
            }
        }
        cout << border << " ";
        cout << endl;
    }

    for (int j = base; j < length + base; j++)
    {
        cout << border << " ";
    }
    cout << endl;
}


int main()
{
    int length = 12;
    drawTriangle('*', ' ', length);
    return 0;
}

/*
Output:

           *
          * *
         *   *
        *     *
       *       *
      *         *
     *           *
    *             *
   *               *
  *                 *
 *                   *
* * * * * * * * * * * *
*/
