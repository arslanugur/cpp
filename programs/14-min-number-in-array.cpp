#include <iostream>
using namespace std;
int main()
{
int array[100], minimum, size, c, location = 1;

cout<<"Enter the number of elements in array\n";
cin>>size;

cout<<"Enter"<<size<<"integers\n";

for ( c = 0 ; c < size ; c++ )
cin>>array[c];

minimum = array[0];
/assuming first no. as minimum/

for ( c = 1 ; c < size ; c++ )
{
if ( array[c] < minimum )
{
minimum = array[c];
location = c+1;
/*If any no. lesser than maximum found then set it as minimum and save its location */
}
}

cout<<"Minimum element is present at location"<< location<<"and it's value is"<<minimum<<"\n";
return 0;
} 
/*Output:
Enter the number of elements in array: 4                                                                                  
Enter four integers: 8 7 6 5                                                                           
Minimum element is present at location4and it's value is 5*/

