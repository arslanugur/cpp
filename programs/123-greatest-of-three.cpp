#include <iostream>
using namespace std;
int main()
{
int a,b,c;

cout<<"enter any three numbers:\n";
cin>>a>>b>>c;
if(a>b&&a>c)
/if a is greater than b & c/
cout<<"greatest number is:"<<a;
else if(b>c)
/if not a then if b is greater than c/
cout<<"greatest number is:"<<b;
else
/if a & b are not greater/
cout<<"greatest number is:"<<c;
}

/*
Output:
enter any three numbers: 5 6 7
greatest number is: 7
*/

