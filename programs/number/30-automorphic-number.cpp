#include<iostream>
using namespace std;

int main()
{
    //variable declaration
    int s,c,p,n,i,t;

    //take user input
    cout<<"Enter a number : ";
    cin>>n;

    s=n*n;
    c=0;
    p=1;
    t=n;

    while(n!=0)
    {
        c++;
        n=n/10;
    }

    for(i=1;i<=c;i++)
    {
        p=p*10;
    }

    if(s%p==t)
    {
        cout<<"Number is automorphic.";
    }

    else
    {
        cout<<"Number is not automorphic.";
    }
}

/*
Output:
Enter a number : 25
Number is automorphic.
*/

