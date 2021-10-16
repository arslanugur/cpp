#include <iostream>
using namespace std;
int string_ln(char*);

int main()
{
char str[20];
int length;

cout<<"\nEnter any string :";
gets(str);

length = string_ln(str);
cout<<"The length of the given string"<<str<<"is :"<<length;
}

int string_ln(char*p) /p=&str[0]/
{
int count = 0;
while (*p != '\0') {
count++;
p++;
}
return count;
}

/*
Output:
Enter any string :codetoinvent                                                     
The length of the given string codetoinventis :12
*/

