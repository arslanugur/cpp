// TEMPLATES
// A C++ program is a collection of commands or statements.

// Below is a simple program template.
#include <iostream>
using namespace std;

int main()      // int main() is the entry point of every C++ program
{

  return 0;
}

// You will learn what each of the statements does in the upcoming lessons.
// For now, remember that the entry point of every C++ program is the main() function, irrespective of what the program does. 

// Curly brackets { } indicate the beginning and end of a function, 
// which can also be called the function's body. 
// The information inside the brackets indicates what the function does when executed.

// Include says the compiler to include(or import) a file named iostream (or iostream.h in older compilers like turbo c++), 
// so that program can use the features associated with that file. 
// Btw <iostream> is for cin>> and cout<<. Without using "using namespace std;" 
// Your compiler will show error (for cin and cout, no need to go in detail right now). 
// cin (read it like see in ) to get an input from user, and cout( see out) to print something on screen. 
// return 0 tells the main() function to end. in c++ every complete "statement" should end with ; 

// FIRST CODES
// To do that, we will add cout << "Hello world!"; line to our main() function body: 
#include <iostream>     // tells compiler to include std input output header file
using namespace std;    
int main()
{
    cout << "Hello world!";   // cout --> is short for "Console Out"
                              // prints the string on user screen
    return 0;                 // return the value zero to the OS
}
// cout is the stream object used to perform output on the standard output device which is usually the display screen.
// cout is used in combination with the insertion operator <<. 

// In C++, streams are used to perform input and output operations.

// Namespace just a way to simplify the coding method: 
// For example: 
// without using namespace 
std::cout << "Hi!"; std::cout << std::endl;
// with using namespace
using namespace std; cout << "Hi!"; cout << endl; // the output would be the same.


// << -stream insertion operator, >> -stream extraction operator


// to add multiple insertion operators after cout.
#include <iostream>
using namespace std;

int main()
{
    {
        cout << "This " << "is " << "awesome!";
    }
    
    return 0;
}

// The semicolon is used to terminate a statement. Each statement must end with a semicolon. 
// It indicates the end of one logical expression. 

// Example:
#include <iostream>
using namespace std;

int main() {
cout<<"This " "is"   " awesome!";
    return 0;
}


// iostream is a library, and namespace is for "providing space" to your "data members" and for "function" ( like in int a; //a is a data member ). 
// Here space means region where that namespace will be valid. So we write namespace in the beginning of the program. 
// Not only this, Namespace is an important feature to avoid names conflict which may happen in large program. 
// This also means that you can actually define your own namespace within the program and provide your own space for cin, cout etc.


// Namespace just a way to simplifay the coding method: 
// For example: 
// (without using namespace)                      std::cout << "Hi!"; std::cout << std::endl; 
// (with using namespace)         using namespace std; cout << "Hi!"; cout << endl;               //the output would be the same.
  
