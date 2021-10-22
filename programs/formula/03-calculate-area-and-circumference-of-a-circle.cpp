// to calculate the circumference and area of circle
#include <iostream>
using namespace std;

// define identifier PI with a constant
#define PI 3.14159
// define identifier TWO with a constant
#define TWO 2.0

int main(void)
{

float area, circumference, radius;

cout<<"\nEnter a radius of the circle in meter: ";
cin>>radius;
// circle area = PI*radius*radius
area = PI * radius * radius;

// circumference = 2*PI*radius
circumference = TWO * PI * radius;

// circle circumference
cout<<"\nCircumference = "<<circumference<<" meter";

// circle area
cout<<"\nCircle area = "<<area<<" square meter"<<endl;

return 0;

}

/*
Output:
Enter a radius of the circle in meter: 2

Circumference = 12.5664 meter
Circle area = 12.5664 square meter
*/

