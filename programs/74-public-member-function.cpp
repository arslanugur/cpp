#include <iostream>
using namespace std;

class Rectangle
{
public:
double length;
double breadth;
void setLength( double l );
double getLength( void );
void setBreadth( double b );
double getBreadth( void );
};

// Member functions definitions
double Rectangle::getLength(void)
{
return length ;
}

void Rectangle::setLength( double l )
{
length = l;
}

double Rectangle::getBreadth(void)
{
return breadth ;
}

void Rectangle::setBreadth( double b )
{
breadth = b;
}

// Main function for the program
int main( )
{
Rectangle R;

// set Rectangle length and Breadth
R.setLength(5.0);
R.setBreadth(4.0);
cout << "Length of Rectangle : " << R.getLength() <<endl;
cout << "Breadth of Rectangle : " << R.getBreadth() <<endl;

// set Rectangle Length and Breadth without member function
R.length = 10.0;
R.breadth = 8.0;
cout << "Length of Rectangle : " << R.length <<endl;
cout << "Breadth of Rectangle : " << R.breadth <<endl;
return 0;
}

/*
Output:
Length of Rectangle : 5
Breadth of Rectangle : 4
Length of Rectangle : 10
Breadth of Rectangle : 8
*/


