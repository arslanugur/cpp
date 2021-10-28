#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int i, j, k, rows;
    k = 1;

    //user input for rows

    cout << "Enter how many rows you want : ";
    cin >> rows;

    //to generate pattern
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << k++;
        }
        cout << "\n";
    }
    return 0;
}

/*
Output:
Enter how many rows you want : 4
1
23
456
78910
*/
  
 
