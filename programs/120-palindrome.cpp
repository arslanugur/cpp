#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char a[100], b[100];

cout<<"Enter the string to check if it is a palindrome\n";
gets(a);

strcpy(b,a);
strrev(b);
/*reversing given string and comparing
if reverse and given are same then palindrome*/

if( strcmp(a,b) == 0 )
cout<<"Entered string is a palindrome.\n";
else
cout<<"Entered string is not a palindrome.\n";

return 0;
}

/*
Output:
Enter the string to check if it is a palindrome
mam
Entered string is a palindrome.
*/

