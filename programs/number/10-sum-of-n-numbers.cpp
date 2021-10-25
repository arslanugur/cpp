#include<iostream>
using namespace std;

int main()
{
    int times, Inp, sum,i;

    times=Inp=sum=i=0;

    cout << "Input the number of integers you want to add:";
    cin >> times;

    for (i=times; i>0; i--)
    {
        cout << "Enter a number:";
        cin >> Inp;
        sum=sum+Inp;
    }

    cout<<"The sum of your " << times << " numbers is "<< sum;
    cout<< "." << endl;

    return 0;
}


/*
Output:
Input the number of integers you want to add:5
Enter a number:7
Enter a number:1
Enter a number:3
Enter a number:9
Enter a number:5
The sum of your 5 numbers is 25.
*/
  
  
