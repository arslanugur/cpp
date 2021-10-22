#include<iostream>
using namespace std;

int main()
{
	float p,r,t,i;

	cout<<"Enter Principle : ";
	cin>>p;
	cout<<"Enter Rate : ";
	cin>>r;
	cout<<"Enter Time(in years) : ";
	cin>>t;

	//formula to calculate intrest
	i=(p*r*t)/100;
	cout<<"Simple interest is : "<<i;

	return 0;
}

/*
Output:
Enter Principle : 400
Enter Rate : 7
Enter Time(in years) : 2
Simple interest is : 56
*/

