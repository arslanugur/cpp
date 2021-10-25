#include<iostream>
using namespace std;

int check(int a,int b)
{
    int s=0,i;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }

    if(s==b)
    {
        s=0;
        for(i=1;i<b;i++)
        {
            if(b%i==0)
            {
                s=s+i;
            }
        }

        if(s==a)
            return 1;
        else
            return 0;
    }

    return 0;
}

int main()
{
    int a,b;

    cout<<"Enter 1st no. : ";
    cin>>a;
    cout<<"Enter 2nd no. : ";
    cin>>b;

    if(check(a,b))
    {
        cout<<a<<" and "<<b<<" are Amicable Number";
    }
    else
    {
        cout<<a<<" and "<<b<<" are not Amicable Number";
    }
}

/*
Output:
Example 1
Enter 1st no. : 220
Enter 2nd no. : 284
220 and 284 are Amicable Number

Example 2
Enter 1st no. : 110
Enter 2nd no. : 184
110 and 184 are not Amicable Number
*/

