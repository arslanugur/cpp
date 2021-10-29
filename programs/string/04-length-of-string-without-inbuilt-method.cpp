#include<iostream>
#include<stdio.h>
using namespace std;

int main( )
{
	char str[80];
	int i = 0;
	cout<<"Enter a string : ";
	gets(str);

	for(i=0;str[i]!='\0';i++);

	cout<<"Length of string is : "<<i;
	return 0;
}

/*
Output:
Enter a string : C++ Programs
Length of string is : 12
*/
  
  
