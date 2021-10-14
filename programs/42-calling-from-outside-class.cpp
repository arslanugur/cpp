#include <iostream>
using namespace std;

class Rectangle
{
public:
double length;
void setWidth( double wid );
double getWidth( void );

private:
double width;
};

// Defination of the Member Function getWidth
double Rectangle::getWidth(void)
{
return width ;
}
// Defination of the Member Function setWidth
void Rectangle::setWidth( double wid )
{
width = wid;
}

// Main function for the program
int main( )
{
Rectangle R;

// Can set Length of Rectangle without member function as it is not private
R.length = 5.0;

cout << "Length of Rectangle : " << R.length <<endl;

// Can not set Width of Rectangle without member function as it is private
R.setWidth(5.0); // Use member function to set it.

cout << "Width of Rectangle : " << R.getWidth() <<endl;

return 0;
}

/*
Output:
Length of box : 5
Width of box : 5
*/

