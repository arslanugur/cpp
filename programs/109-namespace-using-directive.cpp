#include <iostream>
using namespace std;

// first name space
namespace first{
void func(){
cout << "Inside the first namespace" << endl;
}
}

// second name space
namespace second{
void func(){
cout << "Inside the second namespace" << endl;
}
}
using namespace first;
int main ()
{

// This calls function from first name space.
func();

return 0;
}

//Output: Inside the first namespace

