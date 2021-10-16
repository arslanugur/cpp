#include <iostream>
using namespace std;

class Cube
{
public:
void setLength( double len );
double getLength( void );
Cube(double len); // Parameterized Constructor declaration

private:
double length;
};

// definitions of constructor
Cube::Cube( double len)
{
cout << "Object is being created, length = " << len << endl;
length = len;
}

void Cube::setLength( double len )
{
length = len;
}

double Cube::getLength( void )
{
return length;
}
// Main function for the program
int main( )
{
Cube C(5.0);

// get initially set length.
cout << "Length of Cube : " << C.getLength() <<endl;
// set Cube length again
C.setLength(10.0);
cout << "Length of Cube : " << C.getLength() <<endl;

return 0;
}

/*
Output:
Object is being created, length = 5
Length of Cube : 5
Length of Cube : 10
*/

