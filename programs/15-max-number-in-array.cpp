#include <iostream>
using namespace std;
int main()
{
int array[100], maximum, size, c, location = 1;

cout<<"Enter the number of elements in array\n";
cin>>size;

cout<<"Enter"<<size<<"integers\n";

for (c = 0; c < size; c++)
cin>>array[c];

maximum = array[0];
/assuming first no. as maximum/

for (c = 1; c < size; c++)
{
if (array[c] > maximum)
{
maximum = array[c];
location = c+1;
/*If any no. greater than maximum found then set it as maximum and save its location */
}
}

cout<<"Maximum element is present at location"<<location<<"and it's value is"<<maximum<<"\n";
return 0;
}
/*Output:
Enter the number of elements in array: 4                                                                                  
Enter four integers: 8 7 6 5                                                                            
Maximum element is present at location1and it's value is 8*/
  
    
