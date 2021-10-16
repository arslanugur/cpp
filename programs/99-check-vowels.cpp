#include <iostream>
using namespace std;
int main()
{
char ch;

cout<<"Input a character\n";
cin>>ch;

switch(ch)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
cout<<ch<<"is a vowel.\n";
break;
/*if ch matches any case then it prints & breaks the execution */
default:
cout<<ch<<"is not a vowel.\n";
/*if the ch is not from the cases then prints ch is not a vowel */
}
return 0;
}

/*
Output:
Input a character                                                                  
e                                                                                  
e is a vowel.
*/

