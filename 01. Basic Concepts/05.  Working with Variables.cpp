Declaring Variables
      //You have the option to assign a value to the variable 
      //at the time you declare the variable or to declare it and assign a value later.
      //You can also change the value of a variable.
      //Some examples:
int a; 
int b = 42;

a = 10;
b = 3;
      //You can assign a value to a variable only in a declared data type.


User Input
      //To enable the user to input a value, use cin in combination with the extraction operator (>>). 
      //The variable containing the extracted data follows the operator.
      //The following example shows how to accept user input and store it in the num variable: 
int num;

cin >> num;   //to take information (data) from the user
      //As with cout, extractions on cin can be chained to request more than one input in a single statement: cin >> a >> b;
      //>> cin (call in) is inputing the values --> console input
      //<< cout (call out) is printing the values <-- console output
      

Accepting User Input 
      //The following program prompts the user to input a number and stores it in the variable a: 
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Please enter a number \n";
    cin >> a;

    cout << a;

    return 0;
}
      //When the program runs, it displays the message "Please enter a number", 
      //and then waits for the user to enter a number and press Enter, or Return.
      //The entered number is stored in the variable a. 

      //The program will wait for as long as the user needs to type in a number.


      //Example: With this code, the program will ask the user to input their age. 
#include <iostream> 
using namespace std; 

int main() { 
  int age; 
  cout << "Please enter your age \n"; 
  cin >> age; 
  if (age > 14) { 
    if(age >= 18) { 
      cout << "Adult"; } 
    else { cout << "Teenager"; } } 
  else { if (age > 0) { 
    cout << "Child"; } 
        else { 
          cout << "Something's wrong"; } } 
  return 0; }


      //You can accept user input multiple times throughout the program: 
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a number \n";
    cin >> a;
    cout << "Enter another number \n";
    cin >> b;

    cout << a << " "<< b;

    return 0;
}


      //Example
int var;
cout << "Please enter a value \n";
cin >> var;

      //http://www.cplusplus.com/reference/iostream/wcout/

      //to accept the input of two numbers and prints their sum.
#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    int sum;
    cout << "Enter a number \n";
    cin >> a;
    cout << "Enter another number \n";
    cin >> b;
    sum = a + b;
    cout << "Sum is: " << sum << endl;

  return 0;
}

      //to declare sum as a variable, assign it the value 21 + 7, and print out its value.
int sum;

sum = 21 + 7;
cout << "sum is equal to " << sum << endl;



More on Variables
      //Specifying the data type is required just once, at the time when the variable is declared.
      //After that, the variable may be used without referring to the data type.
int a;
a = 10;
      //Specifying the data type for a given variable more than once results in a syntax error.

      //A variable's value may be changed as many times as necessary throughout the program
      //For example:
#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    a = 50;
    cout << a;
    return 0;
}       //output: 50

      //to declare variable b and assign a's value to b, and then print their sum to the screen.
int a = 15;
int b = a;

cout << a + b << endl;
      //a is already assigned the value 15, so a is now 15! if you want to assign value 15 to b, then use a! 


auto Keyword
      //The auto keyword allows you to automatically deduct the type of the variable being declared. 
      //It infers the data type of the variable from its value.
      //For example:
auto x = 4; //integer
auto y = 3.37; //float
auto z = "hello"; //string 
      //Any variable declared with the auto keyword 
      //should be initialized at the time of its declaration or there will be an error.
      //example: auto num = 5; //valid
      //example: auto num; num=5; //invalid      



