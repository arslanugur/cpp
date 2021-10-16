#include <iostream>
using namespace std;

inline int Min(int x, int y) //Inline Function means Function call is replaced by actual code
{
return (x < y)? x : y;
}

// Main function for the program
int main( )
{

cout << "Min (5,10) : " << Min(5,10) << endl;
cout << "Min (25,15): " << Min(25,15) << endl;
cout << "Min (100,200): " << Min(100,200) << endl;
return 0;
}

/*
Output:
Min (5,10): 5
Min (25,15): 15
Min (100,200): 100
*/

