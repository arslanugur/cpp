#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float PA,R,Time,CI;
	cout<<"Enter Principal amount : ";
	cin>>PA;
	cout<<"\n";
	cout<<"enter rate : ";
	cin>>R;
	cout<<"\n";
	cout<<"enter time(in year) : ";
	cin>>Time;

	//formula to calculate compound intrest
	CI=PA*pow((1+R/100),Time) - PA;
	cout<<"Compound Interest is : "<<CI;

    cout<<"\n";
	return 0;
}

/*
Output:
Enter Principal amount : 400

enter rate : 7

enter time(in year) : 1
Compound Interest is : 28
*/

