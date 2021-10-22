#include<iostream>
using namespace std;
 
// Creating class
 
class Message
{
  public:
 
    void display() {
      cout << "Hello World\n";
    }
};
 
int main()
{
	Message c;    // Creating object
	c.display();  // Calling function
 
	return 0;
}

/*
Output:
Hello World
*/

