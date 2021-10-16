#include <iostream>
using namespace std;

class Cube
{
public:
void setLength( double len );
double getLength( void );
Cube(); // Constructor declaration

private:
double length;
};

// definitions of constructor
Cube::Cube(void)
{
cout << "Object is being created" << endl;
}

//defination of other member functions
void Cube::setLength( double len )
{
length = len;
}

double Cube::getLength( void )
{
return length;
}
// Main function
int main( )
{
Cube C;

// set length of Cube
C.setLength(5.0);
cout << "Length of Cube : " << C.getLength() <<endl;

return 0;
}

/*
Output:
Object is being created
Length of Cube : 5
*/


