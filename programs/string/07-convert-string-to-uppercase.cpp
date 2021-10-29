#include<iostream>
#include<stdio.h>
using namespace std;

int main( )
{
	char str[80];
	cout<<"Enter a string : ";
	gets(str);

	for(int i=0;str[i]!='\0';i++)
		str[i] = (str[i]>='a' && str[i]<='z')?(str[i]-32):str[i];

	cout<<str;

	return 0;
}

/*
Output:
Enter a string : heLlo
HELLO
*/

