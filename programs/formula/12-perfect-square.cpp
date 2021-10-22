#include <stdio.h>
#include <math.h>
#include<iostream>
using namespace std;

int main()
{
    int num, tempnum;

    cout<<"Enter a number: ";
    cin>>num;

    tempnum = sqrt(num);

    if(tempnum*tempnum==num)
    {
       cout<<"YES,its perfect square of : "<<sqrt(num);
    }

    else
    {
        cout<<"NO,its not perfect square";
    }

    return 0;
}

/*
Output:
Enter a number: 9
YES,its perfect square of : 3
*/

