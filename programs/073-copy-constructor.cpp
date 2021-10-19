#include <iostream>
using namespace std;

class Cube
{
public:
int getLength( void );
Cube( int len ); // Parameterized constructor
Cube( const Cube &obj); // copy constructor
~Cube(); // destructor

private:
int *ptr;
};

// Member functions definitions including constructor
Cube::Cube(int len)
{
cout << "Ptr. allocated by Parameterized constructor " << endl;
// allocate memory for the pointer;
ptr = new int;
*ptr = len;
}

Cube::Cube(const Cube &obj)
{
cout << "Ptr. allocated by Copy constructor" << endl;
ptr = new int;
*ptr = *obj.ptr; // copy the value
}

Cube::~Cube(void)
{
cout << "Deleting Constructor and making Memory free" << endl;
delete ptr;
}
int Cube::getLength( void )
{
return *ptr;
}

void display(Cube obj)
{
cout << "Length of Cube : " << obj.getLength() <<endl;
}

// Main function for the program
int main( )
{
Cube C(5);

display(C);

return 0;
}

/*
Output:
Ptr. allocated by Parameterized constructor
Ptr. allocated by Copy constructor
Length of Cube : 5
Deleting Constructor and making Memory free
Deleting Constructor and making Memory free
*/


