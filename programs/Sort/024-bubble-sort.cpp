#include <iostream>
using namespace std;

void bubble_sort(long [], long);

int main()
{
long array[100], n, c, d, swap;

cout<<"Enter number of elements\n";
cin>>n;

cout<<"Enter"<<n<<"integers\n";

for (c = 0; c < n; c++)
cin>>array[c];

bubble_sort(array, n);

cout<<"Sorted list in ascending order:\n";

for ( c = 0 ; c < n ; c++ )
cout<<array[c]<<"\n";

return 0;
}

void bubble_sort(long list[], long n)
{
long c, d, t;

for (c = 0 ; c < ( n - 1 ); c++)
{
for (d = 0 ; d < n - c - 1; d++)
{
if (list[d] > list[d+1])
{
/* Swapping */
t = list[d];
list[d] = list[d+1];
list[d+1] = t;
}
}
}
}

/*
Output:
Enter number of element: 5                                                                                  
Enter 5 integers: 8 4 66 23 56                                                                       
Sorted list in ascending order:                                                    
4                                                                                  
8                                                                                  
23                                                                                 
56                                                                                 
66
*/



