#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char string[100];
int c = 0, count[26] = {0};

cout<<"Enter a string\n";
gets(string);

while ( string[c] != '\0' )
{
/* Considering characters from 'a' to 'z' only */

if ( string[c] >= 'a' && string[c] <= 'z' )
count[string[c]-'a']++;

c++;
}

for ( c = 0 ; c < 26 ; c++ )
{
if( count[c] != 0 )
cout<<c+'a'<<"occurs"<<count[c]<<" times in the entered string.\n";
}

return 0;
}

/*
Character's Frequency Output:
Enter a string                                                                     
codetoinvent                                                                       
99occurs1 times in the entered string.                                             
100occurs1 times in the entered string.                                            
101occurs2 times in the entered string.                                            
105occurs1 times in the entered string.                                            
110occurs2 times in the entered string.                                            
111occurs2 times in the entered string.                                            
116occurs2 times in the entered string.                                            
118occurs1 times in the entered string. 
*/

