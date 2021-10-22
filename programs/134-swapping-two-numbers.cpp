#include <iostream>
using namespace std;
int main()
{
int x, y, temp;

cout<<"Enter the value of x and y\n";
cin>>x>>y;

cout<<"Before Swapping\nx =" <<x<<"\ny = "<<y<<"\n";

temp = x;
x = y;
y = temp;
/*using temp to swap
storing x to temp and y to x then moving temp to y*/

cout<<"After Swapping\nx = "<<x<<"\ny = "<<y<<"\n";

return 0;
}

/*
Output:
Enter the value of x and y                                                         
4 6                                                                                
Before Swapping                                                                    
x =4                                                                               
y = 6                                                                              
After Swapping                                                                     
x = 6                                                                              
y = 4 
*/

