#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char a[100], b[100];

cout<<"Enter the first string\n";
gets(a);

cout<<"Enter the second string\n";
gets(b);

/strcmp(string, string) : returns 0 if strings are equal else strings are unequal/
if( strcmp(a,b) == 0 )
cout<<"Entered strings are equal.\n";
else
cout<<"Entered strings are not equal.\n";

return 0;
}

/*
Output:
Enter the first string                                                             
code                                                                               
Enter the second string                                                            
coed                                                                               
Entered strings are not equal.
*/

