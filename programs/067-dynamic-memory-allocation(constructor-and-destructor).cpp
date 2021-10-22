#include <iostream>
using namespace std;

class Cube
{
public:
Cube() {
cout << "Constructor is called!" <<endl;
}
~Cube() {
cout << "Destructor is called!" <<endl;
}
};

int main( )
{
Cube* myCubeArray = new Cube[5];

delete [] myCubeArray; // Delete array

return 0;
}

/*
Output:
Constructor is called!
Constructor is called!
Constructor is called!
Constructor is called!
Constructor is called!
Destructor is called!
Destructor is called!
Destructor is called!
Destructor is called!
Destructor is called!*/


