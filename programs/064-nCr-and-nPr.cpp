#include <iostream>
using namespace std;
long factorial(int);
long find_ncr(int, int);
long find_npr(int, int);

main()
{
int n, r;
long ncr, npr;

cout<<"Enter the value of n and r\n";
cin>>n>>r;

ncr = find_ncr(n, r);
npr = find_npr(n, r);

cout<<n<<"C"<<r<<" ="<<ncr<<"\n";
cout<<n<<"P"<<r<<"=" <<npr<<"\n";

return 0;
}

long find_ncr(int n, int r)
{
long result;

result = factorial(n)/(factorial(r)*factorial(n-r));

return result;
}

long find_npr(int n, int r)
{
long result;

result = factorial(n)/factorial(n-r);

return result;
}

long factorial(int n)
{
int c;
long result = 1;
for( c = 1 ; c <= n ; c++ )
result = result*c;
return ( result );
}

/*
Output:
Enter the value of n and r                                                         
2                                                                                  
3                                                                                  
2C3 =0                                                                             
2P3=2  
*/


