#include<iostream>
using namespace std;

int main()
{
    int times, Inp, sum,i;

    times=Inp=sum=i=0;

    cout << "Input the number of integers you want to square and add : ";
    cin >> times;

    for (i=times; i>0; i--)
    {
        cout<<"Enter a number:";
        cin>>Inp;
        sum=sum+(Inp*Inp);
    }

    cout<<"The sum of squares of " << times << " numbers is "<< sum;
    cout<< "." << endl;

    return 0;
}


/*
Output:
Input the number of integers you want to square and add : 3
Enter a number:4
Enter a number:3
Enter a number:5
The sum of squares of 3 numbers is 50.
*/

