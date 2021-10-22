#include <iostream>
using namespace std;
int Fibonacci(int);

main()
{
int n, i = 0, c;

cout<<"Enter the number of terms ";
cin>>n;

cout<<"First"<<n<<"terms of Fibonacci series are :-\n";

for ( c = 1 ; c <= n ; c++ )
{
cout<<Fibonacci(i)<<"\n";
i++;
}

return 0;
}

int Fibonacci(int n)
{
if ( n == 0 )
return 0;
else if ( n == 1 )
return 1;
else
return ( Fibonacci(n-1) + Fibonacci(n-2) );
/adding Fibonacci of (n-1) & (n-2) by recursive calling it/
} 

/*
Output:
Enter the number of terms 5                                                        
First5terms of Fibonacci series are :-                                             
0                                                                                  
1                                                                                  
1                                                                                  
2                                                                                  
3
*/

