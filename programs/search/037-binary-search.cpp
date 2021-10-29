#include <iostream>
using namespace std;

int main()
{
int c, first, last, middle, n, search, array[100];

cout<<"Enter number of elements\n";
cin>>n;

cout<<"Enter"<< n <<"integers\n";

for ( c = 0 ; c < n ; c++ )
cin>>array[c];

cout<<"Enter value to find\n";
cin>>search;

/calculating first, last and middle position/
first = 0;
last = n - 1;
middle = (first+last)/2;

/*Binary search will search element at middle, 
if element is not found in middle then it will split array into two parts 
and if element to be searched is less than middle 
then it will search only in lower part and if greater then in upper part */

while( first <= last )
{
if ( array[middle] == search )
{
cout<<search<< "found at location"<<middle+1<<endl;
break;
}
else if ( array[middle] < search )
first = middle + 1;
else
last = middle - 1;

middle = (first + last)/2;
}

if ( first > last )
cout<<"Not found!"<<search<< "is not present in the list.\n";

return 0;
}

/*
Output:
Enter number of elements                                                           
5                                                                                  
Enter 5 integers                                                                     
2 7 4 5 9                                                                          
Enter value to find                                                                
4                                                                                  
4 found at location 3 
*/

