#include <iostream>
using namespace std;
int main()
{
int n, c, d, a[100], b[100];

cout<<"Enter the number of elements in array\n";
cin>>n;

cout<<"Enter the array elements\n";

for (c = 0; c < n ; c++)
cin>>a[c];

/* Copying elements into array b starting from end of array a */

for (c = n - 1, d = 0; c >= 0; c--, d++)
b[d] = a[c];

/* Copying reversed array into original.
* Here we are modifying original array, this is optional.*/

for (c = 0; c < n; c++)
a[c] = b[c];
cout<<"Reverse array is\n";

for (c = 0; c < n; c++)
cout<<a[c]<<"\n";
return 0;
}
/*Output:
Enter the number of elements in array: 4                                                                                                                                
Enter the array elements: 4 5 6 7                                                                                                                         
Reverse array is                                                                                                                 
7                                                                                                                                
6                                                                                                                                
5                                                                                                                                
4*/

