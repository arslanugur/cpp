#include <iostream>
using namespace std;
#include <string.h>

int main()
{
char a[100], b[100];

cout<<"Enter the first string\n";
gets(a);

cout<<"Enter the second string\n";
gets(b);

strcat(a,b);
/strcat will append string b on string a/

cout<<"String obtained on concatenation is"<<a<<"\n";

return 0;
}

/*
Output:
Enter the first string                                                             
codeto                                                                             
Enter the second string                                                            
invent                                                                             
String obtained on concatenation is codetoinvent 
*/

