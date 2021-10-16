#include <iostream>
using namespace std;
int main()
{
int row, c, n, temp;

cout<<"Enter the number of rows in pyramid of stars you wish to see ";
cin>>n;

temp = n;

for ( row = 1 ; row <= n ; row++ )
{
for ( c = 1 ; c < temp ; c++ )
cout<<" ";
/*Leaving spaces before printing * */
temp--;

for ( c = 1 ; c <= 2*row - 1 ; c++ )
cout<<"*";
/*Printing stars by calculating rows */

cout<<"\n";
/*moving to new line after printing one */

}

return 0;
}

/*
Output:
Enter the number of rows in pyramid of stars you wish to see                       
6                                                                                  
     *                                                                             
    *                                                                            
   ***                                                                           
  ***                                                                          
 ***                                                                         
***** 
*/

