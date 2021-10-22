#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char arr[100];

cout<<"Enter a string to reverse\n";
gets(arr);

strrev(arr);

/*strrev(string) : reverses given sting */
cout<<"Reverse of entered string is \n"<<arr<<"\n";

return 0;
}

/*
Output:
Enter a string to reverse
program
Reverse of entered string is
margorp
*/

