#include <iostream>
using namespace std;
using namespace std;
const int MAX = 5;

int main ()
{
int arr[MAX] = {10,20,30,40,50};
int *ptr[MAX];

for (int i = 0; i < MAX; i++)
{
ptr[i] = &arr[i]; // assign the address of integer.
}
for (int i = 0; i < MAX; i++)
{
cout << "Value of var[" << i << "] = " << *ptr[i] << endl;
}
return 0;
}

/*
Output:
Value of var[0] = 10
Value of var[1] = 20
Value of var[2] = 30
Value of var[3] = 40
Value of var[4] = 50
*/

