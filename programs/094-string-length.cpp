#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char a[100];
int length;
cout<<"Enter a string to calculate it's length\n";
gets(a);

length = strlen(a);
/* strlen(string) : function gives length of string*/

cout<<"Length of entered string is = "<<length<<"\n";

return 0;
}

/*
Output:
Enter a string to calculate it's length
codetoinvent
Length of entered string is = 12
*/

