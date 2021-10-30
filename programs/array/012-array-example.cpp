#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main ()
{
int n[ 15 ]; //array size is 15

// initialize elements of array n to 0
for ( int i = 1; i <= 10; i++ )
{
n[ i ] = i * 2; // Twice the element
}

cout << "\t Table of Two" << endl;

// output each array element's value
for ( int j = 1; j <= 10; j++ )
{
cout << setw( 7 )<<"2*"<< j<< "="<< setw(10) << n[ j ] << endl;
//setw used for formatting output
}

return 0;
}

/*
Output:
Table of 2
2*1= 2
2*2= 4
2*3= 6
2*4= 8
2*5= 10
2*6= 12
2*7 =14
2*8 =16
2*9= 18
2*10= 20
*/

