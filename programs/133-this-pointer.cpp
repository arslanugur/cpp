#include <iostream>
using namespace std;

class Cube
{
public:
// Constructor definition
Cube(double l=5.0, double b=5.0, double h=5.0)
{
cout <<"Constructor called." << endl;
length = l;
breadth = b;
height = h;
// Increase every time object is created
objectCount++;
}
double Volume()
{
return length * breadth * height;
}
int compare(Cube C)
{
return this->Volume() > C.Volume();
}
private:
double length; // Length of a Cube
double breadth; // Breadth of a Cube
double height; // Height of a Cube
};

int main(void)
{
Cube C1(2.0, 1.2, 1.8); // Declare C1
Cube C2(3.5, 2.5, 1.9); // Declare C2

if(C1.compare(C2))
{
cout << "Cube 2 is smaller than Cube 1" <<endl;
}
else
{
cout << "Cube 2 is equal to or larger than Cube 1" <<endl;
}
return 0;
}

/*
Output:
Constructor called.
Constructor called.
Cube 2 is equal to or larger than Cube 1
*/

