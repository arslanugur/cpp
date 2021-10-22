#include <iostream>
#include <ctime>
using namespace std;

int arr[] = {10,20,30,40,50};

int& setValues( int i )
{
return arr[i]; // return a reference
}

int main ()
{

cout << "Before changing values " << endl;
for ( int i = 0; i < 5; i++ )
{
cout << "arr[" << i << "] = ";
cout << arr[i] << endl;
}

setValues(1) = 60; // change 2nd element
setValues(3) = 70; // change 4th element

cout << "After changing values " << endl;
for ( int i = 0; i < 5; i++ )
{
cout << "arr[" << i << "] = ";
cout << arr[i] << endl;
}
return 0;
}

/*
Output:
Before changing values
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50
After changing values
arr[0] = 10
arr[1] = 60
arr[2] = 30
arr[3] = 70
arr[4] = 50
*/

