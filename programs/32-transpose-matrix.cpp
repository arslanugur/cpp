#include <iostream>
using namespace std;
int main()
{
int m, n, c, d, matrix[10][10], transpose[10][10];
cout<<"Enter the number of rows and columns of matrix ";
cin>>m>>n; cout<<"Enter the elements of matrix \n";
for( c = 0 ; c < m ; c++ )
{
for( d = 0 ; d < n ; d++ )
{
cin>>matrix[c][d];
}
}

for( c = 0 ; c < m ; c++ )
{
for( d = 0 ; d < n ; d++ )
{
transpose[d][c] = matrix[c][d];
/* transpose by interchanging rows and columns */
}
}

cout<<"Transpose of entered matrix :-\n";
for( c = 0 ; c < n ; c++ )
{
for( d = 0 ; d < m ; d++ )
{
cout<<transpose[c][d]<<"\t";
}
cout<<"\n";
}
return 0;
}

/*
Output:
Enter the number of rows and columns of matrix 2 2                                 
Enter the elements of matrix                                                       
1 2                                                                                
3 4                                                                                
Transpose of entered matrix :-                                                     
1       3                                                                          
2       4 */

