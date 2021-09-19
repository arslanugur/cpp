Headers
      //C++ offers various headers, each of which contains information needed for programs to work properly.
      //the standard <iostream> header: 
#include <iostream> //header
using namespace std;

int main()
{
cout << "Hello world!";
return 0;
} 

      //#include is used for adding a standard or user-defined header files to the program. 

      //The <iostream> header defines the standard stream objects that input and output data.

      //"std" is built in the compiler (built-in in the recent versions only) 
      //and has nothing to do with the current library "iostream". 
      //"std" has some functions, whereas "iostream" makes input/output through keyboard/monitors possible. 
      //They might look like they have things in common (std & iostream) but their role is different. 
      //One does not include the other in recent compilers

      //https://stackoverflow.com/questions/16772842/what-is-the-difference-between-cout-cerr-clog-of-iostream-header-in-c-when

      //Detailed Example
include <iostream> // standard input-output stream. 
using namespace std; // namespace std is a library in iostream that contains various symbols like cout and cin. Without this line we would have to refer to std each time that we use a symbol like "std::cout << " or "std::int x = 1" for example.

//We can also use specific symbols from namespace std by writing 

//using std::cout; for only using cout. 
//using std::endl; for endl and so on
//calling the whole namespace std when only using few symbols is bad practice. 

int main() // this is the body of c++ it is what we call a main funtion 
{
	{
		//Print a message in the console
		cout << "Hello World!" << endl; //endl is for line breaks
		cout << "This is my first program! \n"; //We can also use \n for line breaks
		cout << "I love C++ \n";
		
		//Every lines of code end with a semi-colon ;
	}
	
	{
		/*
		Variables need to be declared with a type before they can store values. 
Variables only need to be declared once. 
After that they can be assigned values multiple times.
Examples of variable types: int, str, char, float, bool
*/

		int num_1, num_2;
		num_1 = 13;
		num_2 = 15;
		int sum = num_1 + num_2;
		cout << num_1 <<endl;
		cout << num_2 <<endl;
		cout <<sum <<endl;
		
	}
	
	return 0; // tells the compiller to stop the program here
}


Namespaces
      //A namespace is a declarative region that provides a scope to the identifiers (names of elements) inside it.
      //In our code, the line using namespace std; tells the compiler to use the std (standard) namespace: 
      
#include <iostream>
using namespace std;      //The std namespace includes features of the C++ Standard Library.

int main()
{
cout << "Hello world!";
return 0;
}

      //https://www.tutorialspoint.com/cplusplus/cpp_namespaces.htm

      //Whenever we need to differentiate them definitely 
      //we would have to use some additional information along with their name, 
      //like either the area if they live in different area or their mother or father name, etc. 
      //Same situation can arise in your C++ applications. 
      //For example, you might be writing some code that has a function called xyz() 
      //and there is another library available which is also having same function xyz(). 
      //Now the compiler has no way of knowing which version of xyz() function you are referring to within your code. 
      //A namespace is designed to overcome this difficulty 
      //and is used as additional information to differentiate similar functions, classes, variables etc. 
      //with the same name available in different libraries. 
      //Using namespace, you can define the context in which names are defined. 
      //In essence, a namespace defines a scope.
  



