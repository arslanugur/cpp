#include <iostream>
using namespace std;
int main()
{
int array[100], position, c, n, value;

cout<<"Enter number of elements in array\n";
cin>>n;

cout<<"Enter"<<n<<"elements\n";
for (c = 0; c < n; c++)
cin>>array[c];

cout<<"Enter the location where you wish to insert an element\n";
cin>>position;

cout<<"Enter the value to insert\n";
cin>>value;

for (c = n - 1; c >= position - 1; c--)
array[c+1] = array[c];
/* from given position shifting all elements by 1 position */

array[position-1] = value;
/inserting value to given position/

cout<<"Resultant array is\n";
for (c = 0; c <= n; c++)
cout<<array[c]<<"\n";
return 0;
}
/*Output:
Enter number of elements in array: 4                                                                                  
Enter 4 elements: 6 7 8 9                                                                            
Enter the location where you wish to insert an element: 1                                                                                  
Enter the value to insert: 5                                                                                  
Resultant array is                                                                 
5                                                                                  
6                                                                                  
7                                                                                  
8                                                                                  
9*/


