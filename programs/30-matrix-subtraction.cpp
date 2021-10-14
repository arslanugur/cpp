#include <iostream>
using namespace std;
int main()
{
int m, n, c, d, first[10][10], second[10][10], difference[10][10];

cout<<"Enter the number of rows and columns of matrix\n";
cin>>m>>n;
cout<<"Enter the elements of first matrix\n";

for (c = 0; c < m; c++)
for (d = 0 ; d < n; d++)
cin>>first[c][d];

cout<<"Enter the elements of second matrix\n";

for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
cin>>second[c][d];

for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
difference[c][d] = first[c][d] - second[c][d];
/* Subtract Matrices*/

cout<<"difference of entered matrices:-\n";

for (c = 0; c < m; c++)
{
for (d = 0; d < n; d++)
cout<<difference[c][d]<<"\t";

cout<<"\n";
} return 0; }

/*
Output:
Enter the number of rows and columns of matrix                                     
2                                                                                  
2                                                                                  
Enter the elements of first matrix                                                 
1 1                                                                                
1 1                                                                                
Enter the elements of second matrix                                                
2 2                                                                                
2 2                                                                                
difference of entered matrices:-                                                          
-1       -1                                                                          
-1       -1 
*/

