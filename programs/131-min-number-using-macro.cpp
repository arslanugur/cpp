#include <iostream>
using namespace std;

#define MIN(a,b) (((a)<(b)) ? a : b)

int main ()
{
int x, y;
x = 40;
y = 15;
cout <<"The Minimum number is " << MIN(x, y) << endl;

return 0;
}

//Output: The Minimum number is 15

