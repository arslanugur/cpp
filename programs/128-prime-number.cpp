#include <iostream>
using namespace std;
int check_prime(int);

main()
{
int i, n, result;

cout<<"Enter the number of prime numbers required\n";
cin>>n;
cout<<"First"<<n<<"prime numbers are :\n";

for(i=0; i < n; i++){
result = check_prime(i);
/if i is prime then it will return 1/

if ( result == 1 )
cout<<i<<"\n";
}
return 0;
}

int check_prime(int a)
{
int c;
/starting from 2, if no is completely divisible by any no then it is not prime/
for ( c = 2 ; c <= a - 1 ; c++ )
{
if ( a%c == 0 )
return 0;
}
if ( c == a )
return 1;
}

/*
Output:
Enter the number of prime numbers required                                         
10                                                                                 
First10prime numbers are :                                                         
2                                                                                  
3                                                                                  
5                                                                                  
7 
*/

