#include <iostream>
using namespace std;

int * getElements( )
{
static int r[5];
for (int i = 0; i < 5; ++i)
{
cout << "Enter the element at " << i << " : " ;
cin >> r[i] ;
}
for (int i = 0; i < 5; ++i)
{
cout << r[i] << endl;
}

return r;
}

// main function to call above defined function.
int main ()
{
// a pointer to an int.
int *p;

p = getElements();
for ( int i = 0; i < 5; i++ )
{
cout << "*(p + " << i << ") : ";
cout << *(p + i) << endl;
}

/*
Output:
Enter the element at 0 : 1
Enter the element at 1 : 2
Enter the element at 2 : 3
Enter the element at 3 : 4
Enter the element at 4 : 5
1
2
3
4
5
*(p + 0 ) : 1
*(p + 1 ) : 2
*(p + 2 ) : 3
*(p + 3 ) : 4
*(p + 4 ) : 5
*/  
