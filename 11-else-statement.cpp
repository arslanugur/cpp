The else Statement
      //An if statement can be followed by an optional else statement, which executes when the condition is false.
      //Syntax:
if (condition) {
  //statements
}
else {
 //statements
}

      //The code above will test the condition:
      //- If it evaluates to true, then the code inside the if statement will be executed.
      //- If it evaluates to false, then the code inside the else statement will be executed. 
      
      //When only one statement is used inside the if/else, then the curly braces can be omitted.

      //Example
#include <iostream> 
using namespace std; 
int main() { 
  int x , y, z; 
  x=10; 
  y=15; 
  z=x+y; 
  if (x>11) { cout << "Print x: " << x << endl; 
            } 
  else if (y>20){ cout << "Print y: " << y << endl; 
            } else { cout << "Print z: " << z << endl;
            } 
  return 0; 
} //output: Print z: 25

      //Example
int age = 25;
if (age > 18) {
   cout << "Adult";
}

      //Example
#include <iostream>
using namespace std;

int main()
{
    int mark = 90;

    if (mark < 50) {
        cout << "You failed." << endl;
    }
    else {
        cout << "You passed." << endl;
    }

    return 0;
} //Output: You passed.


      //Example
int x = 22;
if (x > 33) {
 cout << "x is greater than 33" << endl;
} 
else {
 cout << "x is not greater than 33" << endl;
}


      //In all previous examples only one statement was used inside the if/else statement, 
      //but you may include as many statements as you want.

      //For example:
#include <iostream>
using namespace std;

int main()
{
    int mark = 90;

    if (mark < 50) {
        cout << "You failed." << endl; //As many as you want - statements could be placed between if's braces
        cout << "Sorry" << endl;
    }
    else {
        cout << "Congratulations!" << endl;
        cout << "You passed." << endl;
        cout << "You are awesome!" << endl;
    }

    return 0;
}

      //Example
#include <iostream>
using namespace std;

int main() {
    int number;
    cin>>number;
    // your code goes here
    
    if (number % 2 == 0)
      cout << "even" << endl;
    else
      cout << "odd" << endl;
     
    
    return 0;
}

Nested if Statements
      //Example
#include <iostream>
using namespace std;

int main()
{
    int mark = 100;

    if (mark >= 50) {
        cout << "You passed." << endl;
        if (mark == 100) {
            cout <<"Perfect!" << endl;
        }
    }
    else {
        cout << "You failed." << endl;
    }

    return 0;
}

      //Example: to print "it works!" to the screen.
int x = 37;
if (x > 22) {
  if (x > 31) {
  cout << "it works!" << endl;
 }
}

      //Example
#include <iostream> 
using namespace std; 
int main() { 
  int test1,test2,mark ; 
  cin>> test1; 
  cin>> test2; 
  mark=test1 + test2; 
  if (mark >= 50) { 
    cout <<" test1 is " << test1 << "\n test2 is " << test2 << "\n total mark is " << mark << "\n You passed." << endl; 
    if (mark == 100) { 
      cout <<"Perfecto!" << endl; } } 
    else { 
      cout <<" test1 is " << test1 << "\n test2 is " << test2 << "\n total mark is " << mark << "\n You failed." << endl;
 } 
 return 0; }


Nested if else Statements
      //C++ provides the option of nesting an unlimited number of if/else statements.
      //For example:
#include <iostream>
using namespace std;

int main()
{
    int age = 18;
    if (age > 14) {
        if(age >= 18) {
            cout << "Adult";
        }
        else {
            cout << "Teenager";
        }
    }
    else {
        if (age > 0) {
            cout << "Child";
        }
        else {
            cout << "Something's wrong";
        }
    }
    return 0;
}
      //Remember that all else statements must have corresponding if statements.


The if else Statement
      //In if/else statements, a single statement can be included without enclosing it into curly braces. 
      //Example
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    if (a > 4)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
      //Including the curly braces anyway is a good practice, as they clarify the code and make it easier to read.

      //Example
int x = 10;
int y = 20;
if (x > y) {
  cout << "some other text" << endl;
} 
else {
  cout << "printing in the else" << endl;
}
      




