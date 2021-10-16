#include <iostream>

// Function declaration
void func(void);

static int count =5; //Global variable

main()
{
while(count--)
{
func();
}
return 0;

}
// Function definition
void func( void )
{
static int i = 5; // local static variable
i++;
std::cout << "i is " << i ;
std::cout << " and count is " << count << std::endl;
}

/*
Output:
i is 6 and count is 4
i is 7 and count is 3
i is 8 and count is 2
i is 9 and count is 1
i is 10 and count is 0
*/

