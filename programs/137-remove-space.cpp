#include <iostream>
using namespace std;
int main()
{
char text[100], blank[100];
int c = 0, d = 0;

cout<<"Enter some text\n";
gets(text);

while (text[c] != '\0')
{
/if two consecutive spaces found then it will not be added to new string/
if (!(text[c] == ' ' && text[c+1] == ' ')) {
blank[d] = text[c];
d++;
}
c++;
}

blank[d] = '\0';

cout<<"Text after removing blanks\n"<<blank<<"\n";

return 0;
}

/*
Output:
Enter some text                                                                    
hello_  codetoinvent                                                               
Text after removing blanks                                                         
hello_ codetoinvent 
*/

