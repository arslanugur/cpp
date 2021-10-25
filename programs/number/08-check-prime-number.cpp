#include<iostream>
using namespace std;
int main()
{
    int number,count=0;
    cout<<"Enter number to check its Prime or Not : ";
    cin>>number;

    for(int a=1;a<=number;a++)
        if(number%a==0)
            count++;

    if(count==2)
        cout<<"Prime Number \n";
    else
        cout<<"Not a Prime Number\n";

    return 0;
}

/*
Output:
Enter number to check its Prime or Not : 13
Prime Number
*/

