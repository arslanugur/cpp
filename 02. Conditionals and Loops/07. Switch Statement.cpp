SWITCH STATEMENT
Multiple Conditions
      //Sometimes there is a need to test a variable for equality against multiple values. 
      //That can be achieved using multiple if statements.
      //SYNTAX:
switch (test) {}              //switch (what if) {i tell you}
switch (expression) { case value1: statement(s); break; case value2: statement(s); break; ... case valueN: statement(s); break; }

      //For example: 
#include <iostream>
using namespace std;

int main()
{
    int age = 42;
    if (age == 16) {
        cout <<"Too young";
    }
    if (age == 42) {
        cout << "Adult";
    }
    if (age == 70) {
        cout << "Senior";
    }

    return 0;
}   //output: Adult --> The switch statement is a more elegant solution in this scenario.


      //Example: The code above is equivalent to three if statements. 
#include <iostream>
using namespace std;

int main()
{
    int age = 42;
    switch (age) {
        case 16:
            cout << "Too young";
            break;
        case 42:
            cout << "Adult";
            break;
        case 70:
            cout << "Senior";
            break;
    }
    return 0;
}
      //Notice the keyword break; that follows each case. That will be covered shortly.
      //What would occur if we forget to insert 'break' after a 'case'?
      //The rest of the cases would be executed, until encoutering a break statement


      // to test the age variable against 16, 18, and 21 values and print corresponding texts to the screen.
switch (age) {
case 16:
 cout << "you can drive a car" << endl;
 break;
case 18: 
 cout << "buy a lottery ticket" << endl;
 break;
case 21:
 cout << "buy some beer" << endl;
 break;
}

The default Case
      //In a switch statement, the optional default case can be used to perform a task when none of the cases is determined to be true.
      //Example: 
#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    switch (age) {
        case 16:
            cout << "Too young";
            break;
        case 42:
            cout << "Adult";
            break;
        case 70:
            cout << "Senior";
            break;
        default:
            cout << "This is the default case";
    }

    return 0;
}
      //The default statement's code executes when none of the cases matches the switch expression.
      //The default case must appear at the end of the switch.

      //There is no obligation to put the "default" case at the end of the switch. 
      //If "default" is elsewhere, we have to put "break" after it.
      //But if "default" is the last case, there is no need to put "break" after it. 
      //So it is not mandatory for "default" to be the last case. However it is common for "default" to be the last case. 
      
      //Example
switch ( how are you ) { 
      case not bad: 
            cout << " happy " ; 
            break ; 
      case unhappy: 
            cout << " sad " ; 
            break ; 
      case sad: 
            cout << " I'm crying " ; 
            break ; 
      default : 
            cout << " I'm fine " ; }

      //to test the value of the variable x; if x is 2, print "it's 2" to the screen; 
      //otherwise (the default case), print "the default case" to the screen.
int x;
cin >> x;
switch (x) {
      case 2:
      cout << "it's 2" << endl;
      break;
      default: 
      cout << "the default case" << endl;
}


The break Statement
      //The break statement's role is to terminate the switch statement.
      //In instances in which the variable is equal to a case, 
      //the statements that come after the case continue to execute until they encounter a break statement. 
      //In other words, leaving out a break statement results in the execution of all of the statements in the following cases, even those that don't match the expression.
      //For example:
#include <iostream>
using namespace std;

int main()
{
    int age = 42;
    switch (age) {
        case 16:
            cout << "Too young" << endl;
        case 42:
            cout << "Adult" << endl;
        case 70:
            cout << "Senior" << endl;
        default:
            cout <<"This is the default case" << endl;
    }

    return 0;
}

      //As you can see, the program executed the matching case statement, printing "Adult" to the screen. 
      //With no specified break statement, the statements continued to run after the matching case. 
      //Thus, all the other case statements printed. This type of behavior is called fall-through.

      //As the switch statement's final case, the default case requires no break statement.
      //The break statement can also be used to break out of a loop.


      //Example
#include <iostream> 
using namespace std; 
int main() { 
      int box; 
      cout << "There are 3 boxes, which box do ya choose? (1, 2, 3):";
      cin >> box; 
      while (box > 3){ 
            cout << "your number is not valid, only input 1 or 2 or 3, re-input: "; 
            cin >> box; 
      } 
      switch (box) { 
            case 1: 
                  cout << "red box" << endl; 
                  break; 
            case 2: 
                  cout << "blue box" << endl; 
                  break; 
            case 3: 
                  cout << "green box" << endl; 
                  break; } 
      system("pause"); }


      //Improved Example to Above:
#include <iostream> 
using namespace std; 

int main() 
{ 
  int age; 
  cin>>age; 
  if (age <= 16) { 
    cout <<"Too young"; 
  } 
  if (age > 16) 
    if (age < 70) { 
      cout << "Adult"; 
    } 
  if (age >= 70) { 
    cout << "Senior"; 
  } 
  return 0; 
}

      //Example
#include <iostream> 
using namespace std; 
int main() 
{ 
      int menuOption; //user types 1, 2, or 3 cout<<"Please choose from the following menu:\n"; 
      cout<<"1. Deposit\n2. Withdraw\n3. Exit\n"; 
      cin>>menuOption; 
      switch(menuOption) { 
            case 1: 
                  cout<<"You chose deposit"; 
                  break; 
            case 2: 
                  cout<<"You chose withdraw"; 
                  break; 
            case 3: 
                  cout<<"Program exited"; 
                  break; } 
      return 0; }


      //Example: to print "you can drive a car" if the variable 'age' equals 16, print "buy a lottery ticket" if the 'age' is equal to 18.
int age;
cin >> age;
if (age == 16) {
 cout << "you can drive a car" << endl;
} 
if (age == 18) {
 cout << "buy a lottery ticket" << endl;
}

      //Example
#include <iostream>
using namespace std;

int main()
{
    // Notice how a condition can have multiple cases
    
    char grade;
    
    cin >> grade;
    
    switch(grade){
        
        case 'A':
        case 'B':
        case 'C':
            cout << "You are approved";
            break;
        
        case 'D':
        case 'F':
            cout << "Run...";
            break;
        
        default:
            cout << "Error 404";
            break;
    }

    return 0;
}


      //The switch statement tests a variable against a list of values, which are called cases, to determine whether it is equal to any of them.
switch (expression) {
  case value1:
    statement(s);
    break;
  case value2:
    statement(s);
    break;
    ...
  case valueN:
    statement(s);
    break;
}

      //Switch evaluates the expression to determine whether it's equal to the value in the case statement. 
      //If a match is found, it executes the statements in that case. 

      //A switch can contain any number of case statements, which are followed by the value in question and a colon.

      //Example:
#include <iostream> 
using namespace std; 
int main() { 
  int d; 
  cout << "Enter you're age" << endl; 
  cin >> d; if (d>=12) { 
    if (d>=18) 
      cout << "Adult" << endl; 
    else cout << "Teenager" << endl;
  } 
  else { 
    if (d<=1) 
      cout << "Baby" << endl; 
    else { 
      if (d<=3) 
        cout << "Toddler" << endl; 
      else { 
        if (d<=5) 
          cout << "Preschooler" << endl; 
        else 
          cout << "Gradeschooler" << endl; 
      } } } 
  return 0; 
}


      //Example about Days
#include <iostream>
using namespace std;
int main() 
{
    int num;
    cin>>num;
    switch(num)

    
    {
    
        case 1:cout<<"\n Sunday"
        "\n you made this"; 
        break;
        
        
        case 2:cout<<"\n Monday"
        "\n you made this"; 
        break;
        
        
        case 3:cout<<"\n Tueday"
        "\n you made this"; 
        break;
        
        
        case 4:cout<<"\n Wednesday"
       "\n you made this"; 
        break;
        
        
        case 5:cout<<"\n Thursday"
       "\n you made this"; 
        break; 
        
          
        case 6:cout<<"\n Friday"
        "\n you made this"; 
        break;
        
        
        case 7:cout<<"\n Saturday"
        "\n you made this"; 
        break;
        
        
        default:cout<<"\n Sorry enter value between (1-7)... ";
        
                 } 
         
    return 0;   
}




