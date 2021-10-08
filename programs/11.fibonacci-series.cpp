#include <iostream>
using namespace std;
int main()
{
int n, first = 0, second = 1, next, c;

cout<<"Enter the number of terms\n";
cin>>n;

cout<<"First"<<n<<"terms of Fibonacci series are :-\n";

for ( c = 0 ; c < n ; c++ )
{
if ( c <= 1 )
next = c;
else
{
next = first + second;
first = second;
second = next;
/*replaced first no by second & second by addition of first & second */
}
cout<<next<<"\n";
}

return 0;
}
/*Output: Enter the number of terms: 5                                                                                  
First 5 terms of Fibonacci series are :-                                             
0                                                                                  
1                                                                                  
1                                                                                  
2                                                                                  
3 */

