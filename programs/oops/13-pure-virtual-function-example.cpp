#include<iostream>
using namespace std;

//Abstract base class
class Base
{
 public:
    //Pure Virtual Function
    virtual void show() = 0;
};


class Derived:public Base
{
 public:
    void show()
    {
        cout << "Implementation of Virtual Function in Derived class";
    }
};

int main()
{
 Base *b;

 Derived d;
 b = &d;
 b->show();
}

//Output: Implementation of Virtual Function in Derived class

