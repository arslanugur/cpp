#include<iostream>
using namespace std;

int main()
{
	float num;
	cout<<"Enter any number:";
	cin>>num;

	if(num>0)
    {
        	cout<<"The absolute value of number is:"<<num;
    }
	else
    {
    	    cout<<"The absolute value of number is:"<<-(num);
    }


    return 0;
}

/*
Output:
Enter any number:-9
The absolute value of number is:9
*/

