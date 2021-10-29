#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char a[100], b[100];

    printf("Enter the string to check if it is a palindrome : ");
    gets(a);

    strcpy(b,a);
    strrev(b);

    if( strcmp(a,b) == 0 )
    printf("Entered string is a palindrome.\n");
    else
    printf("Entered string is not a palindrome.\n");

    return 0;
}

/*
Output:
Enter the string to check if it is a palindrome : madam
Entered string is a palindrome.
*/

