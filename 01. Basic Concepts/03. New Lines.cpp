New Line
      //The cout object does not insert a line break at the end of the output.
      //One way to print two lines is to use the endl manipulator, which will put in a line break. 
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl; //using \n is better than endl; 
    cout << "Programming cpp";
    return 0;
}     //we can eliminate the 2nd 'cout' before "I love programming" and also ';' (semicolon) after endl.

      //endl should be used to move to a new line
      //The new line character \n can be used as an alternative to endl.
      //Using a single cout statement with as many instances of \n as your program requires will print out multiple lines of text.

      //Example
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world! \n";      //The backslash (\) is called an escape character, and indicates a "special" character.
    cout << "I love programming!";
    return 0;
}

      //https://en.cppreference.com/w/cpp/language/escape
      //https://en.wikipedia.org/wiki/Newline 
      //https://www.learncpp.com/



