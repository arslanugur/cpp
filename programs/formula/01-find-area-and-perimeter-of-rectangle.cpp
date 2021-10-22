#include<iostream>
using namespace std;
int main()
{
    int width,height,area,perimeter;
    cout<<"Enter  Width of Rectangle = ";
    cin>>width;
    cout<<"Enter  Height of Rectangle = ";
    cin>>height;
    area=height*width;
    cout<<"Area of Rectangle = "<<area<<endl;
    perimeter=2*(height+width);
    cout<<"Perimeter of rectangle are = "<<perimeter<<endl;
    return 0;
}

/*
Output:
Enter  Width of Rectangle = 4
Enter  Height of Rectangle = 5
Area of Rectangle = 20
Perimeter of rectangle are = 18
*/

