#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int area;
    cout<<"enter area of circle  : ";
    cin>>area;

    cout<<"\n";

    double radius=sqrt(area/3.14);

    cout<<"Radius of circle is : "<<radius;
}


/*
Output:
enter area of circle  : 314
Radius of circle is : 10
*/

