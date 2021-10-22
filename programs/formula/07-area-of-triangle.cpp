#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float base,height;
    float area;

    cout<<"Enter base of Triangle : ";
    cin>>base;

    cout <<"Enter height of Triangle : ";
    cin>>height;

    area = 0.5 * (base * height);
    cout<<"Area of Triangle :"<<area;
    return 0;
}

/*
Output:
Enter base of Triangle : 5
Enter height of Triangle : 8
Area of Triangle :20
*/

