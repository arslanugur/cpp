#include <iostream>
using namespace std;
int main()
{
int m, n, p, q, c, d, k, sum = 0;
int first[10][10], second[10][10], multiply[10][10];

cout<<"Enter the number of rows and columns of first matrix\n";
cin>>m>>n;
cout<<"Enter the elements of first matrix\n";

for ( c = 0 ; c < m ; c++ )
for ( d = 0 ; d < n ; d++ )
cin<<first[c][d];

cout<<"Enter the number of rows and columns of second matrix\n";
cin>>p>>q;

if ( n != p )
cout<<"Matrices with entered orders can't be multiplied with each other.\n";
else
{
cout<<"Enter the elements of second matrix\n";

for ( c = 0 ; c < p ; c++ )
for ( d = 0 ; d < q ; d++ )
cin>>second[c][d];

for ( c = 0 ; c < m ; c++ )
{
for ( d = 0 ; d < q ; d++ )
{
for ( k = 0 ; k < p ; k++ )
{
sum = sum + first[c][k]*second[k][d];
}

multiply[c][d] = sum;
sum = 0;
}
}

cout<<"Product of entered matrices:-\n";

for ( c = 0 ; c < m ; c++ )
{
for ( d = 0 ; d < q ; d++ )
cout<<multiply[c][d]<<"\t";

cout<<"\n";
}
}

return 0;
}

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
4      4                                                                          
4      4*/ 


