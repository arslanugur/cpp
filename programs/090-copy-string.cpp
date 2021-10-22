#include <iostream>
using namespace std;
#include <string.h>

main()
{
char source[] = "C program";
char destination[50];

strcpy(destination, source);
/*strcpy will copy string from source to destination */

cout<<"Source string:"<<source<<"\n";
cout<<"Destination string:"<<destination<<"\n";

return 0;
}

/*
Output:
Source string:C program                                                            
Destination string:C program 
*/

