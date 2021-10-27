#include<iostream>
using namespace std;

class MinusOperatorOverloading
{
    int x,y,z;

    public:
    void get_data(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void operator -()
    {
        x = x - 10;
        y = y - 10;
        z = z - 10;
    }

    void display()
    {
        cout<<"\nx: "<<x;
        cout<<"\ny: "<<y;
        cout<<"\nz: "<<z;
    }
};

int main()
{
    MinusOperatorOverloading oo;
    oo.get_data(53,73,93);
    cout<<"Before overloading:";
    oo.display();

    -oo;

    cout<<"\n\n";
    cout<<"After overloading:";

    oo.display();

    return 0;
}

/*
Output:
Before overloading:
x: 53
y: 73
z: 93

After overloading:
x: 43
y: 63
z: 83
*/
  
  
