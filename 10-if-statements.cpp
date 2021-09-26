Decision Making
      //The if statement is used to execute some code if a condition is true.
      //Syntax:
if (condition) {
   statements
}

      //The condition specifies which expression is to be evaluated. 
      //If the condition is true, the statements in the curly brackets are executed.
            
      //If the condition is false, the statements are simply ignored, 
      //and the program continues to run after the if statements body.
      

      //Evaluation of a condition. 
      //Every condition only has two possibilities; Either true, or false. 
      //Hence, these conditions are actually boolean values.
      //Example:
#include<iostream> 
using namespace std;

int main(){ 
  int person=19; 
  if(person>18) { 
    cout<<"adult"; } 
  else { 
    cout<<"not adult"; } 
  return 0; } //output: adult

The if Statement
      //Use relational operators to evaluate conditions.
      //For example:
#include <iostream>
using namespace std;

int main()
{
    if (7 > 4) {
        cout <<  "Yes"; 
    }

    return 0;
}     //output: Yes

      //The if statement evaluates the condition (7>4), finds it to be true, 
      //and then executes the cout statement.
      //If we change the greater operator to a less than operator (7<4), 
      //the statement will not be executed and nothing will be printed out. 
  
      //A condition specified in an if statement does not require a semicolon.
      //a semicolon (;) is for terminates statement . if ( condition ) is half of statement. no need for a semicolon.      

      //Example
int x = 5;
int y = 3;

if (x > y) {
  cout << "hi there";
}

Relational Operators
      /*Additional relational operators: 
Operator |Description              |Example
----------------------------------------------
>=       |greater than or equal to |7>=4 True
<=       |less than or equal to    |7<=4 False
==       |equal to                 |7==4 False
!=       |not equal to             |7!=4 True */

= (equals) 
== (check to see if it's equal)
               
      //Example:
#include <iostream>
using namespace std;

int main()
{
    if (10 == 10) {
        cout <<  "Yes";
    }

    return 0;
}     //output: yes

      //The above statement will NOT result in an error. 
      //And it WILL print out Yes. Why? Because the parantheses return a TRUE value. 
      //Why? Because the program is able to assign 3 to the variable "a". 
      //Same goes with: if (int a = 2) cout << "You can even define a variable in the conditional statement. 
    
      //Example:
#include <iostream> 
using namespace std; 
    int main() { 
          int num; 
          cout <<"What is 10+7?" <<endl; 
          cin >>num; 
          if (num == 17){ 
                cout <<"correct" <<endl; 
                cout <<"is: " <<num <<endl; } 
          if (num != 17){ 
                cout <<"your num is incorrect, 10+7 not is: " <<num <<endl; } }

    //The not equal to operator evaluates the operands, determines whether or not they are equal. 
    //If the operands are not equal, the condition is evaluated to true.
    //For example:
#include <iostream>
using namespace std;

int main()
{
    if (10 != 10) {
        cout <<  "Yes";
    }

    return 0;
}     //no output
      //The above condition evaluates to false and the block of code is not executed.

    //Example
#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 17;
    b = 65;
    if (a>=b) {
        cout << "a is bigger" << endl;
    }
    if (a<=b) {
        cout << "a is smaller" << endl;
    }
    if (a==b) {
        cout << "they are the same" << endl;
    }
    if (a!=b) {
        cout << "they are not the same" << endl;
    }
    return 0;
}
    /*output:
      a is smaller
      they are not the same*/

    
    //Example
int x = 10;
int y = 8;
if (x != y) {
 cout << "not equal";
}     //output: not equal

    
    //You can use relational operators to compare variables in the if statement.
    //For example:
#include <iostream>
using namespace std;

int main()
{
    int a = 55;
    int b = 33;
    if (a > b) {
        cout << "a is greater than b";
    }

    return 0;
}
    
    //Example
#include <iostream> 
using namespace std; 
int main() { 
    int firstOne = 77; 
    int secondOne = 55; 
    if (firstOne <= secondOne ) { cout << "wins first";
     } 
    else cout << "2nd wins"; 
    return 0; }

    //to print the value of the greatest variable:
int a = 98;
int b = 76;
if (a > b) {
  cout << "greatest is " << a << endl;
}
if (b > a) {
   cout << "greatest is " << b << endl;
}
    



