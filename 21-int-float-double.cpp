Integers
      //The integer type holds non-fractional numbers, which can be positive or negative. 
      //Examples of integers would include 42, -42, and similar numbers.
      
      //The size of the integer type varies according to the architecture of the system on which the program runs, 
      //although 4 bytes is the minimum size in most modern system architectures.

      //Example:
#include <iostream> 
using namespace std; 
int main() { 
  int a; 
  char b; 
  double c; 
  float d; 
  cout << sizeof(a) << "\n" ; //4
  cout << sizeof(b) << "\n" ; //1
  cout << sizeof(c) << "\n" ; //8
  cout << sizeof(d) << "\n" ; //4
  return 0; 
}

      //4 bytes = 32 bits = 0111 1111 1111 1111 1111 1111 1111 1111 
      //in binary dropping the last bit for the minus sign = 2,147,483,647 this is the largest integer possible (unless you use double to give you 8 bytes).

      //Example: Find the absolute value of an integer
#include <iostream>
using namespace std;

int main() {
     
     int a = -42;
     int abs_a;     
   cout << "chapter Integer - Examples of integers would include 42, -42, and similar numbers\n";

      cout << "Finds the absolute value of an integer.\n";     
  
     if(a >= 0)     
        abs_a = a;     
     else         
        abs_a = -a;      
        
     cout << "The absolute value of " << a ;
     cout << " is " << abs_a << endl;     
     
    return 0;
}

      /*chapter Integer - Examples of integers would include 42, -42, and similar numbers
        Finds the absolute value of an integer.
        The absolute value of -42 is 42*/

      //http://www.cplusplus.com/doc/tutorial/variables/

      //Example:
#include <iostream>
using namespace std;

int main()
 {
   int a=5,b=5,sum;
   sum=a+b;
   cout<<sum<<endl;
   return 0;
}     //output: 10


      //Use the int keyword to define the integer data type.
int a = 42;

      /*Several of the basic types, including integers, can be modified using one or more of these type modifiers:
        signed: A signed integer can hold both negative and positive numbers.
        unsigned: An unsigned integer can hold only positive values.
        short: Half of the default size.
        long: Twice the default size.
        */
          
        //For example:
unsigned long int a;

        //The integer data type reserves 4-8 bytes depending on the operating system.
        //https://www.tutorialspoint.com/cprogramming/c_data_types.htm

        //Example
#include <iostream> 
using namespace std; 
int main() { 
  //Data Types of Integer 
  //Holds integer numbers negative and positive 
  int NormalInteger = 1; 
  //Same of Integer (int default case) 
  signed int SignedInteger = 1; 
  //Same of Integer but holds only positive values (More bits avaliable) 
  unsigned int UnsignedInteger = 1; 
  //Has the double of memory allocation 
  long int LongInteger = 1; 
  //Has half of the memory allocation 
  short int ShortInteger = 1; 
  //You can use multiple staments, order isn't required (Signed|Unsigned & Short|Long) 
  short unsigned int ShortUnsignedInteger = 1; 
  long signed int LongSignedInteger = 1; 
  return 0; 
}

      //Example: to declare a variable var that contains only positive numbers.
unsigned int var;

/*
short int -32 768    /    32 767 
unsigned short int 0  /  65 535 
int -2 147 483 648   /   2 147 483 647 
unsigned int 0     /     4 294 967 295 
long int -2 147 483 648    /    2 147 483 647 
unsigned long int 0     /     4 294 967 295
*/


Floating Point Numbers
      //A floating point type variable can hold a real number, such as 420.0, -3.33, or 0.03325.
      //The words floating point refer to the fact that a varying number of digits can appear before and after the decimal point. 
      //You could say that the decimal has the ability to "float".

      //There are three different floating point data types: float, double, and long double.

      //In most modern architectures, a float is 4 bytes, a double is 8, and a long double can be equivalent to a double (8 bytes), or 16 bytes.
      //For example:
double temp = 4.21;

      //Floating point data types are always signed, which means that they have the capability to hold both positive and negative values.

/*
a byte is 8 bits
a char is 1 byte
a float is 4 bytes
a long is 8 bytes
a long double is 12 bytes */

      //https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html

      //Example
#include <iostream>
using namespace std;

int main() {
    cout<<"Find size of Char,Int,Float & Double\n";
    cout<< "Size of char "<< sizeof(char)<< " bytes\n";   //Size of char 1 bytes
    cout << "Size of int "<<sizeof(int)<<" bytes\n";      //Size of int 4 bytes
    cout << "Size of float "<<sizeof(float)<<" bytes\n";  //Size of float 4 bytes
    cout<< "Size of double "<<sizeof(double)<<" bytes\n"; //Size of double 8 bytes
    return 0;
}
      //Floating point types can hold positive and negative numbers:  float x = 3.14; float y = -42.69;



