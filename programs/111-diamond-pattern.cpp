#include <iostream>
using namespace std;
int main()
{
int n, c, k, space = 1;

cout<<"Enter number of rows\n";
cin>>n;

space = n - 1;
/*here we will divide diamond in 2 parts upper and lower */

/printing upper part/
for (k = 1; k <= n; k++)
{
for (c = 1; c <= space; c++)
cout<<" ";
/*leaving space before printing * */
space--;

for (c = 1; c <= 2*k-1; c++)
cout<<"*";
/*printing * by calculating row no */

cout<<"\n";
/*moving to new line after printing one */

}

space = 1;

/*Printing lower part */
for (k = 1; k <= n - 1; k++)
{
for (c = 1; c <= space; c++)
cout<<" ";

space++;

for (c = 1 ; c <= 2*(n-k)-1; c++)
cout<<"*";

cout<<"\n";
}

return 0;
}


/*
Output:
Enter number of rows                                                               
7                                                                                  
      *                                                                            
     *                                                                           
    ***                                                                          
   ***                                                                         
  ***                                                                        
 *****                                                                       
*****                                                                      
 *****                                                                       
  ***                                                                        
   ***                                                                         
    ***                                                                          
     *                                                                           
      *  
*/

