Variables
      //Creating a variable reserves a memory location, or a space in memory for storing values. 
      //The compiler requires that you provide a data type for each variable you declare.
      //C++ offer a rich assortment of built-in as well as user defined data types.

      //Integer, a built-in type, represents a whole number value. Define integer using the keyword int.
      //C++ requires that you specify the type and the identifier for each variable defined.
      //An identifier is a name for a variable, function, class, module, or any other user-defined item. 
      //An identifier starts with a letter (A-Z or a-z) or an underscore (_), 
      //followed by additional letters, underscores, and digits (0 to 9).

      //For example, define a variable called myVariable that can hold integer values as follows:
int myVariable = 10; 

      //Different operating systems can reserve different sizes of memory for the same data type.

      //Identifiers are containers and the values are anything inside the container

      //Example
/*
 * Just a short code example showing the various
 * ways to declare/define integer variables in C++.
 */

#include <iostream>

signed int main(void)
{
    // signed int variables
    int         svar_1 =  2;
    signed int  svar_2 = -5;
    
    // unsigned int variables
    unsigned        uvar_1 = 7u;
    unsigned int    uvar_2 = 11u;
    
    // Just for fun print them out
    std::cout << "svar_1 (int) is " << svar_1 << std::endl;
    std::cout << "svar_2 (signed int) is " << svar_2 << std::endl;
    std::cout << "uvar_1 (unsigned) is " << uvar_1 << std::endl;
    std::cout << "uvar_2 (unsigned int) is " << uvar_2 << std::endl;
    
	return 0;
} /* signed int main(void) */

/* Output:
svar_1 (int) is 2
svar_2 (signed int) is -5
uvar_1 (unsigned) is 7
uvar_2 (unsigned int) is 11
 */


      //Example
#include <iostream>
using namespace std;

int main()
{
    int myVariable = 10;
    cout << myVariable;  //output: 10
    return 0;
}

        //The C++ programming language is case-sensitive, so myVariable and myvariable are two different identifiers.

        //Define all variables with a name and a data type before using them in a program. 
        //In cases in which you have multiple variables of the same type, 
        //it's possible to define them in one declaration, separating them with commas

int a, b;   // defines two variables of type int

        //A variable can be assigned a value, and can be used to perform operations.
        //For example, we can create an additional variable called sum, and add two variables together.
int a = 30; 
int b = 15; 
int sum = a + b;    //Use the + operator to add two numbers.
// Now sum equals 45

        //to print the sum of two integers.
#include <iostream>
using namespace std;

int main()
{
    int a = 30;
    int b = 12;
    int sum = a + b;

    cout << sum;

     return 0;
}#include <iostream>
using namespace std;

int main()
{
    int a = 30;
    int b = 12;
    int sum = a + b;  //output: 42

    cout << sum;

     return 0;
}
      //Always keep in mind that all variables must be defined with a name and a data type before they can be used.




