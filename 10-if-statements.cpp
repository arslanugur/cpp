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
      
#include <iostream> 
using namespace std; 
int main() { 
  int a, b; 
  int sum; 
  cout << "pls a number if you will... \n"; 
  cin >> a; 
  cout << "May I have another number please, sir... \n"; 
  cin >> b; 
  sum = a + b; 
  cout << "sum is... \n" << sum << endl; 
  if (a == b) { 
    cout << "yes papa"; } 
  if (a > b) { 
    cout << "you're doin me a heckin"; } 
  if (a < b) { 
    cout << "pls no"; } 
  return 0; }
