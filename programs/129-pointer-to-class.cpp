#include <iostream>
using namespace std;

class Cube
{
public:
// Constructor definition
Cube(double l=2.0, double b=2.0, double h=2.0)
{
cout <<"Constructor called." << endl;
length = l;
breadth = b;
height = h;
}
double Volume()
{
return length * breadth * height;
}
private:
double length; // Length of a Cube
double breadth; // Breadth of a Cube
double height; // Height of a Cube
};

int main(void)
{
Cube C1(2.5, 3.0, 1.8); // Declare C1
Cube C2(4.0, 1.5, 2.4); // Declare C2
Cube *ptrC; // Declare pointer to a class.

// Save the address of first object
ptrC = &C1;

// Now try to access a member using member access operator
cout << "Volume of Cube 1: " << ptrC->Volume() << endl;

// Save the address of first object
ptrC = &C2;

// Now try to access a member using member access operator
cout << "Volume of Cube 2: " << ptrC->Volume() << endl;

return 0;
}

/*
Output:
Constructor called.
Constructor called.
Volume of Cube 1: 13.5
Volume of Cube 2: 14.4
*/


