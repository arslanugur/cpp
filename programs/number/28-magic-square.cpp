#include <stdio.h>
#include<iostream>
using namespace std;

void magicsquare(int, int [][10]);

//
int main( )
{
    int size;
    int num[10][10];

   cout<<"enter size but number should be odd number : ";
    cin>>size;

        if (size % 2 == 0)
            {
                cout<<"Magic square works for an odd numbered size\n";
            }
        else
            {
                magicsquare(size, num);
            }
    return 0;
}

//magicsquare method declaration
void magicsquare(int size, int a[][10])
{
    int sqr = size * size;
    int i = 0, j = size / 2, k;

    for (k = 1; k <= sqr; ++k)
    {
        a[i][j] = k;
        i--;
        j++;

        if (k % size == 0)
            {
                i += 2;
                --j;
            }
        else
            {
                if (j == size)
                {
                    j -= size;
                }
                else if (i < 0)
                {
                    i += size;
                }
            }
    }

    for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                cout<<a[i][j]<<"  ";

            }
            cout<<"\n";
        }
        cout<<"\n";
}

/*
Output:
enter size but number should be odd number : 3
8  1  6
3  5  7
4  9  2
*/

