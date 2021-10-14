#include <iostream>
using namespace std;

// Base class Area
class Area
{
public:
void setlength(int l)
{
length = l;
}
void setbreath(int b)
{
breath = b;
}
protected:
int length;
int breath;
};

// Base class PerSQCost
class PerSQCost
{
public:
int getCost(int area)
{
return area * 1500;
}
};

// Derived class
class Room: public Area, public PerSQCost
{
public:
int getArea()
{
return (length * breath);
}
};

int main(void)
{
Room R;
int area;

R.setlength(5);
R.setbreath(7);

area = R.getArea();

// Print the area of the object.
cout << "Area of Room " << R.getArea() << endl;

// Print the total cost of painting
cout << "Cost of Room : $" << R.getCost(area) << endl;

return 0;
}

/*
Output:
Area of Room : 120
Cost of Room : $180000
*/
