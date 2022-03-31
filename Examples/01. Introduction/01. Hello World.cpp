// Introduction Examples
// Example: C++ "Hello, World!" Program
// Topics: 
// A "Hello, World!" is a simple program that outputs Hello, World! on the screen. 
// Since it's a very simple program, it's often used to introduce a new programming language to a newbie.

// If you haven't already set up the environment to run C++ on your computer, visit Install C++ on Your Computer.

// Your First C++ Program
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}

// Output: Hello World!

// In C++, any line starting with // is a comment. Comments are intended for the person reading the code to better understand the functionality of the program. 
// It is completely ignored by the C++ compiler.
#include <iostream>

// The #include is a preprocessor directive used to include files in our program. The above code is including the contents of the iostream file.

// This allows us to use cout in our program to print output on the screen.

// For now, just remember that we need to use #include <iostream> to use cout that allows us to print output on the screen.
// int main() {...}

// A valid C++ program must have the main() function. The curly braces indicate the start and the end of the function.

// The execution of code beings from this function.
std::cout << "Hello World!";

// std::cout prints the content inside the quotation marks. It must be followed by << followed by the format string. 
// In our example, "Hello World!" is the format string.

// Note: ; is used to indicate the end of a statement.
return 0;

// The return 0; statement is the "Exit status" of the program. In simple terms, the program ends with this statement.
// Things to take away
// We use std:cout in order to print output on the screen.
// We must include iostream if we want to use std::cout.
// The execution of code begins from the main() function. This function is mandatory. This is a valid C++ program that does nothing.
int main() {
    // Write your code here
}




