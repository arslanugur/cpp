#include <iostream>
using namespace std;
int main()
{
int n, i, c, a = 1;

cout<<"Enter the number of rows of Floyd's triangle to print\n";
cin>>n;

for (i = 1; i < n; i++)
{
for (c = 1; c < i; c++)
{
cout<<a;
a++;
}
cout<<"\n";
/**/
}

return 0;
}

/*
Output:
Enter the number of rows of Floyd's triangle to print                              
10                                                                                 
                                                                                   
1                                                                                  
23                                                                                 
456                                                                                
78910                                                                              
1112131415                                                                         
161718192021                                                                       
22232425262728                                                                     
2930313233343536 
*/

