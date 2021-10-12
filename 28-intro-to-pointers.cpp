POINTERS
      //Every variable is a memory location, which has its address defined.
      //That address can be accessed using the ampersand (&) operator (also called the address-of operator), which denotes an address in memory.

      //For example:
#include <iostream>
using namespace std;

int main()
{
    int score = 5;
    cout << &score << endl;

    return 0;
}   //output: 0x7ffe47d95ebc

      //This outputs the memory address, which stores the variable score.





