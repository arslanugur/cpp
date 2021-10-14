#include <iostream>
using namespace std;

class Cube
{
public:

void setLength( double l )
{
length = l;
}

void setBreadth( double b )
{
breadth = b;
}

void setHeight( double h )
{
height = h;
}
double getVolume(void)
{
return length * breadth * height;
}

// Overload + operator to add two Cube objects.
Cube operator+(const Cube& b)
{
Cube C;
C.length = this->length + b.length;
C.breadth = this->breadth + b.breadth;
C.height = this->height + b.height;
return C;
}
private:
double length; // Length of a Cube
double breadth; // Breadth of a Cube
double height; // Height of a Cube
};
// Main function for the program
int main( )
{
Cube C1; // Declare C1 of type Cube
Cube C2; // Declare C2 of type Cube
Cube C3; // Declare C3 of type Cube
double volume = 0.0; // Store the volume of a Cube here

// Cube 1 specification
C1.setLength(4.0);
C1.setBreadth(6.0);
C1.setHeight(5.0);

// Cube 2 specification
C2.setLength(8.0);
C2.setBreadth(4.0);
C2.setHeight(10.0);

// volume of Cube 1
volume = C1.getVolume();
cout << "Volume of Cube 1 : " << volume <<endl;

// volume of Cube 2
volume = C2.getVolume();
cout << "Volume of Cube 2 : " << volume <<endl;

// Add two object as follows:
C3 = C1 + C2;

// volume of Cube 3
volume = C3.getVolume();
cout << "Volume of Cube 3 : " << volume <<endl;

return 0;
}

/*
Output:
Volume of Cube 1 : 120
Volume of Cube 2 : 320
Volume of Cube 3 : 1800
*/

