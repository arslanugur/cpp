#include <iostream>
using namespace std;

int main()
{
int array[100], search, c, n;

cout<<"Enter the number of elements in array\n";
cin>>n;

cout<<"Enter"<<n<<"integer(s)\n";

for (c = 0; c < n; c++)
cin>>array[c];

cout<<"Enter the number to search\n";
cin>>search;

/* We keep on comparing each element with the element to search until the desired element is found or list ends */
for (c = 0; c < n; c++)
{
if (array[c] == search){
/* if required element found*/
cout<<search<<" is present at location"<<c+1<<"\n";
break;
}
}
if (c == n)
cout<<search<< "is not present in array.\n";

return 0;
}

/*
Output:
Enter the number of elements in array                                              
4                                                                                  
Enter 4 integer(s)                                                                   
3 6 7 8                                                                            
Enter the number to search                                                         
4                                                                                  
4 is not present in array.
*/

