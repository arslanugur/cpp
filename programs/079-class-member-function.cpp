#include <iostream>
using namespace std;

class Cube
{
public:
double length; // Length of a Cube
double breadth; // Breadth of a Cube
double height; // Height of a Cube

// Member functions declaration
double getVolume(void);
void setLength( double l );
void setBreadth( double b);
void setHeight( double h );
};

// Member functions definitions
double Cube::getVolume(void)
{
return length * breadth * height;
}

void Cube::setLength( double l )
{
length = l;
}

void Cube::setBreadth( double b )
{
breadth = b;
}

void Cube::setHeight( double h )
{
height = h;
}

// Main function for the program
int main( )
{
Cube C1; // Declare C1 of type Cube
Cube C2; // Declare C2 of type Cube
double volume = 0.0; // Store the volume of a Cube here

// Cube 1 specification
C1.setLength(3.0);
C1.setBreadth(10.0);
C1.setHeight(5.0);

// Cube 2 specification
C2.setLength(20.0);
C2.setBreadth(4.0);
C2.setHeight(8.0);

// volume of Cube 1
volume = C1.getVolume();
cout << "Volume of CUbe 1 : " << volume <<endl;

// volume of Cube 2
volume = C2.getVolume();
cout << "Volume of Cube 2 : " << volume <<endl;
return 0;
}

/*
Output:
Volume of Cube 1 : 150
Volume of Cube 2 : 640
*/


