#include <iostream>
//using namespace std;
int count ;
extern void write_extern();

main()
{
count = 10;
write_extern();
}

File2.cpp

#include <iostream>
extern int count;

void write_extern(void)
{
std::cout << "Count is " << count << std::endl;
}

//Output: Count is 10

