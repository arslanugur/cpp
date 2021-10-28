/* C++ program to demonstrate the working of friend function.*/
#include <iostream>
using namespace std;

class Distance
{
    private:
        int meter;
    public:
        Distance(): meter(0){ }
        //friend function
        friend int func(Distance);

};

//function definition
int func(Distance d)
{
    //accessing private data from non-member function
    d.meter = 10;
    return d.meter;

}

int main()
{

    Distance D;
    //using friend function
    cout<<"Distace: "<<func(D)<<"\n";
    return 0;

}

//Output: Distace: 10

