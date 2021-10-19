#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
void setWidth(int w)
{
width = w;
}
void setHeight(int h)
{
height = h;
}
protected:
int width;
int height;
};

// Derived class
class Rectangle: public Shape
{
public:
int getArea()
{
return (width * height);
}
};

class Triangle: public Shape
{
public:
int getArea()
{
return (width * height)/2;
}
};


int main(void)
{
Rectangle R;
R.setWidth(6);
R.setHeight(8);

// Print the area of the object.
cout << "Area of Rectangle : " << R.getArea() << endl;

Triangle T;
T.setWidth(5);
T.setHeight(6);
cout << "Area of Triangle : " << T.getArea() << endl;
return 0;
}

/*
Output:
Area of Rectangle : 48
Area of Triangle : 15
*/

