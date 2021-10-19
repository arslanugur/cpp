#include <iostream>
using namespace std;

class Cube //Base class
{
protected:
double length;
};

class SmallCube:Cube // SmallCube is the derived class.
{
public:
void setSmallLength( double len );
double getSmallLength( void );
};

// Member Function of Derived Class (SmallCube)
double SmallCube::getSmallLength(void)
{
return length ;
}

void SmallCube::setSmallLength( double len )
{
length = len;
}

// Main function
int main( )
{
SmallCube C;

// set Cube Length using member function
C.setSmallLength(5.0);
cout << "Length of Cube : "<< C.getSmallLength() << endl;

return 0;
}

//Output: Length of Cube :  5

