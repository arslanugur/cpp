#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{

int min,max,i,range,r,x;
unsigned first = time(NULL);

cout<<"FIRST = " << first <<endl;
srand(first);
cout<<"ENTER THE MINIMUM NUMBER :";
cin>>min;
cout<<"ENTER THE MAXIMUM NUMBER :";
cin>>max;
cout<<"ENTER THE NO.OF TERMS YOU WANT :";
cin>>x;

range=max-min+1;

for(i=0;i<x;i++)
	{
	r=rand()/100%range+min;
	cout<<r<<" ";
	}

getch();

}

/*
Output:
FIRST = 1408222966
ENTER THE MINIMUM NUMBER :33
ENTER THE MAXIMUM NUMBER :55
ENTER THE NO.OF TERMS YOU WANT :4
35 44 36 37
*/

