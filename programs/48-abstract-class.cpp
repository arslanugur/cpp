#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
// pure virtual function providing interface framework.
virtual int getArea() = 0;
void setHeight(int h)
{
height = h;
}
void setWidth(int w)
{
width = w;
}

protected:
int width;
int height;
};

// Derived class Triangle
class Triangle: public Shape
{
public:
int getArea()
{
return (width * height)/2;
}
};

//Derived class Rectangle
class Rectangle: public Shape
{
public:
int getArea()
{
return (width * height);
}
};


int main(void)
{
Rectangle R;
Triangle T;

R.setWidth(6);
R.setHeight(10);
// Print the area of the Rectangle
cout << " Area of Rectangle : " << R.getArea() << endl;

T.setWidth(4);
T.setHeight(7);
// Print the area of the Triangle
cout << "Area of Triangle : " << T.getArea() << endl;

return 0;
}

/*
Output:
Area of Rectangle : 60
Area of Triangle : 14
*/

