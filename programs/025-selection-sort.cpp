#include <iostream>
using namespace std;
int main()
{
int array[100], n, c, d, position, swap;

cout<<"Enter number of elements\n";
cin>>n;

cout<<"Enter"<<n<<"integers\n";

for ( c = 0 ; c < n ; c++ )
cin>>array[c];

for ( c = 0 ; c < ( n - 1 ) ; c++ )
{
position = c;
/* for all array, from position c selecting smallest element in array and swap with c position*/
for ( d = c + 1 ; d < n ; d++ )
{
if ( array[position] > array[d] )
position = d;
}
if ( position != c )
{
swap = array[c];
array[c] = array[position];
array[position] = swap;
}
}

cout<<"Sorted list in ascending order:\n";
for ( c = 0 ; c < n ; c++ )
cout<<array[c]<<"\n";

return 0;
}

/*
Output:
Enter number of elements: 5                                                                                  
Enter 5 integers: 4 88 47 87 13                                                                      
Sorted list in ascending order:                                                    
4                                                                                  
13                                                                                 
47                                                                                 
87                                                                                 
88*/
