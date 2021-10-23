#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,num;

    cout<<"Enter how many elements : ";
    cin>>num;

    int vec[num],large,small;

    cout<<"Enter values in the vector";
    cout<<endl;

    for(i=0;i<num;i++)
    {
        cin>>vec[i];
    }

    large=vec[1];
    small=vec[1];

    for(i=0;i<num;i++)
    {
        if(vec[i]>large)
        {
            large=vec[i];
        }

        else
        {
            if(vec[i]<small)
            {
                small=vec[i];
            }

        }

    }

    cout<<endl<<"Largest element = "<<large;
    cout<<endl<<"Smallest element = "<<small;
}

/*
Output:
Enter how many elements : 5
Enter values in the vector
6
1
3
9
3

Largest element = 9
Smallest element = 1
*/

