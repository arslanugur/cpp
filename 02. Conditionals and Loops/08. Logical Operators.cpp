Logical Operators
      //Use logical operators to combine conditional statements and return true or false. 
/*
Operator    | Name of Operator      | Form
--------------------------------------------
&&          | AND Operator          | y && y
||          | OR Operator           | x || y
!           | NOT Operator          | !x

      //The AND operator works the following way:

Left Operand      | Right Operand   | Result
--------------------------------------------
  false           |  false          | false
  false           |  true           | false
  true            |  false          | false
  true            |  true           | true
*/
  
      //In the AND operator, both operands must be true for the entire expression to be true.
      
      //how to use logical operators in functions when testing for multiple conditions. 
      //if (a == 5 || a == 10 || a == 15) { //code } This is the correct syntax. 
      //Writing it like this: 
      //if (a == 5 || 10 || 15) 
      //Means you're basically saying if a equals 5, or if true, or if true. 
      //Any number besides 0 when used alone as a condition will evaluate to TRUE. 
      //So even if a wasn't 5, 10 or 15, the if statement would still evaluate to true, which is what we don't want. 
      
      
      //Bitwise operators ( &, |, ^, ~, <<, >> ) 
      //Bitwise operators modify variables considering the bit patterns that represent the values they store. 
      //operatorasm equivalent description & AND Bitwise. 
      //AND | OR Bitwise. inclusive OR ^ XOR. Bitwise. exclusive OR ~ NOT. 
      //Unary complement << SHL. Shift bits left >> SHR Shift bits right
      
      //Example: to test both conditions in the following if statement.
int age = 23;
int money = 4;

if (age > 21 && money > 500) {  //All condition need to be true to go in If statements.
 cout << "welcome to party" << endl;
}

The AND Operator
      //For example:
#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    if (age > 16 && age < 60) {
        cout << "Accepted!" << endl;
    }

    return 0;
}

      //In the example above, the logical AND operator was used to combine both expressions.
      //The expression in the if statement evaluates to true only if both expressions are true.
      
      //Improved Example
#include <iostream> 
using namespace std; 
int main() { 
  cout << "Enter your age." << endl; 
  int age; 
  cin>>age; 
  if (age > 16 && age < 60) //Both a and b are true
  { 
    cout << "Accepted!" << endl; } 
  else
  { 
    cout<< "Rejected! Outside of Parameters"<< endl; 
  } 
  return 0; 
}

      //Within a single if statement, logical operators can be used to combine multiple conditions. 
      //Example:
#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    int grade = 80;

    if (age > 16 && age < 60 && grade > 50) {
        cout << "Accepted!" << endl;
    }

    return 0;
}

      //The entire expression evaluates to true only if all of the conditions are true.

      //Example
#include <iostream> 
using namespace std; 
int main() { 
  int a, b, c, d; 
  cout <<"Please, insert your code \n"; 
  cin >> a >> b >> c >> d; 
  if (a==1 && b==2 && c==3 && d==4) { 
    cout <<" access granded! \n W E L C O M E!"; 
  } 
  else 
    cout <<" Wrong code \n access denied."; 
  return 0; 
}

      //Example
#include <iostream> 
using namespace std; 
int main() { 
  int age; 
  int grade; 
  cin>>age; 
  cin>>grade; 
  if (age > 16 && age < 60 && grade > 50) { 
    cout << "Accepted!" << endl; } 
  return 0; } 
      //However, when you submit you need to write it as "20" (for age, because the age is greater than 16 and lower than 60) 
      //and then put a space then something like "60" (for grade, as its bigger than 50) then submit to have the code print "Accepted" 

      //leap year detector. simple input year to detect if it was or is a leap year
#include <iostream> 
using namespace std; 
int main() { 
  int a,b,c,d; 
  cin>>a; 
  cout<<"The year\t"<<a<<"\twas/is \t"; 
  b=a%4; 
  c=a%400; 
  d=a%100; 
  if (b == 0 && d != 0 || d == 0) { 
    cout<<"a leap year"; } 
  else{ cout<<"not a leap year"; } 
  return 0; 
}

      //Example:
#include<iostream> 
using namespace std; 
int main() { 
  int age=16; 
  int grade=50; 
  cout<<"write varible:"; 
  cin>>age>>grade; 
  if(age==16 && grade==50){ 
    cout<<"Accepted"<<endl; } 
  else { 
    cout<<"default"; } 
  return 0; 
}

      //( a>20 && a<40 ) --> correct 
      //( a>20 && <40 ) --> incorrect

      //Example
#include <iostream> 
using namespace std; 
int main() { 
  int age = 20; 
  int x =1; 
  int y=2; 
  int gender= x+x; 
  if (age > 18) { 
    cout << "you can enter the bar"; } 
  if (age > 18 && gender<x+y) { 
    cout << " for free " << endl; } 
  return 0; 
} 


The OR Operator
      //The OR (||) operator returns true if any one of its operands is true. 
/*
Left Operand | Right Operand | Result
--------------------------------------
  false      |  false        | false
  false      |  true         | true
  true       |  false        | true
  true       |  true         | true
*/
      //Example
#include <iostream>
using namespace std;

int main()
{
    int age = 16;
    int score = 90;
    if (age > 20 || score > 50) {
        cout << "Accepted!" << endl;
    }

    return 0;
}
      //You can combine any number of logical OR statements you want.
      //In addition, multiple OR and AND statements may be chained together.

      //Example:
#include <iostream> 
using namespace std; 
int main() { 
  int age = 16; 
  int score = 30; 
  if (age > 20 || score > 50) { 
    cout << "Accepted!" << endl; } 
  else { cout << "Denied!" << endl; } 
  return 0; 
}

      //Example:
<iostream> using namespace std; 
int main() { 
  int age = 15; 
  int exam = 45; 
  int homework = 20; 
  if (age > 14 && exam > 50 || homework > 50) { 
    cout << "Accepted!" << endl; } 
  else 
    cout <<"You failed." << endl;
  
  
      //Example: to print "welcome" on the screen.
int age = 26;
int money = 4;
if (age > 21 || money > 500) {
 cout << "welcome" << endl;
}


Logical NOT
      //The logical NOT (!) operator works with just a single operand, reversing its logical state. 
      //Thus, if a condition is true, the NOT operator makes it false, and vice versa.
/*
Right Operand | Result
------------------------
  false        | true
  true         | false
*/
      //Example:
#include <iostream>
using namespace std;

int main()
{
    int age = 10;
    if ( !(age > 16) ) {      //the correct conclusion to the if(!(age>16))in this case is that the age is less than OR EQUAL to 16 
        cout << "Your age is less than 16" << endl;
    }
    return 0;
}     //output: Your age is less than 16
      //Be careful using this, because !false means true.
      //substitute it simply by : if (age<16)? but ! is more useful

      //Example
#include <iostream> 
using namespace std; 
  int main() { 
    int age; 
    cout << "How old are you?" << endl; 
    cin >> age; 
    if ( !(age >= 16) ) { 
      cout << "Your age is less than 16" << endl; } 
    else { 
      cout << "Your age is 16 or more" << endl; } 
    return 0; }
  
      //Example
#include <iostream>
using namespace std;

int main()
{
    if ( !false) {
        cout << "Statement: if statements will always be executed if conditions test true" << endl;
    }
    if (!true) {
        cout << "This if statement shall never be executed";
    }
    return 0;
}
  

      //The result of a || b is true if either a or b is true, both a and b are true.  
  
   
      //Examples**
  #include <iostream>
using namespace std;

int main() {
int a;
cin >> a;
cout << "a = " << a << ";" << endl;
int mod=a%3;
int b=a+2;
cout << "b = " << b << ";" << endl;
int c=(a+b)*2;
int d;
cin >> d;

    if (mod==0){
    cout << "a divides by 3;"<< endl;
    }
    else {
    cout << "a doesn't divide by 3;" << endl;
    }

    while (b%5==0){
    cout << "b divides by 5;" << endl;
    b++;
    cout << "b = " << b << ";" << endl;
    }
    if (b%5!=0){
        cout << "b doesn't divide by 5;" << endl;
        }
    
    for (int sum=a+b; sum<=10; sum +=2){
    cout << "Sum of a+b = " << sum << ";" << endl;
    }
    
    do {
    cout << "c = " << c << ";" << endl;
    c=c*2;
    } while (c<=50);
    
    switch (d) {
        case 10:
        cout << "d is too low;" << endl;
        break;
        case 20:
        cout << "d is medium;" << endl;
        break;
        case 30: d>10;
        cout << "d is high;" << endl;
        default:
        cout << "d - error - insert 10, 20 or 30;" <<  endl;
    }
    
    if (a>0 && b>0){
        cout << "a and b are positive;" << endl;
    }
    if (a>0 || b>0){
        cout << "At least one is positive;" << endl;
    }
    if (!(c<0)){
        cout << "c is positive;" << endl;
    }
    
    return 0;
}

  
  
  
  
  
