Syntax Tips for Arithmetic Operators
/*
Operators       |Symbols| Form
-------------------------------
Addition        | +     | x + y
Subtraction     | -     | x - y
Multiplication  | *     | x * y
Division        | /     | x / y
Modulus         | %     | x % y   (Modulus = Integer Remainder)

Basic Assignment : x = y 
Unary plus : +x 
Unary minus : -x 
Increment prefix : ++x postfix : x++ 
Decrement prefix : --x postfix : x-- 
Comparison operator
Logical operator
Compound assignment operator
Bitwise operator
...
*/



      //The addition operator adds its operands together.
#include <iostream>
using namespace std;

int main()
{
    int x = 40 + 60;
    cout << x;
    return 0;
}
      //You can use multiple arithmetic operators in one line.


      //to declare a variable x, assign it to value 4 + 6, and print it to the screen.
int x;
x = 4 + 6;
cout << x << endl;

      //Example
int main() {

float a;
float b;
cout<<"first number: ";
cin>>a;
cout<<a<<endl;
cout<<"second number: ";
cin>>b;
cout<<b<<endl<<endl;

float sum=a+b;
float multiply=a*b;
float divide=a/b;
float divide2=b/a;
float minus=a-b;
float minus2=b-a;

cout<<a<<"+"<<b<<"="<<sum<<endl;
cout<<a<<"*"<<b<<"="<<multiply<<endl;
cout<<a<<"/"<<b<<"="<<divide;
if (b==0){cout<<"(you can't divide by 0)"<<endl;}
else {cout<<endl;}
cout<<b<<"/"<<a<<"="<<divide2;
if (a==0){cout<<"(you can't divide by 0)"<<endl;}
else {cout<<endl;}
cout<<a<<"-"<<b<<"="<<minus<<endl;
cout<<b<<"-"<<a<<"="<<minus2<<endl;

    return 0;
}
      

Subtraction
      //The subtraction operator subtracts one operand from the other.
#include <iostream>
using namespace std;

int main()
{
    int x = 100 - 60;
    cout << x;
    return 0;
}     //output: 40

      //Example
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    cout << "Sum: "<< a+b << endl;
    cout << "Substraction: " << a-b << endl;
    cout << "Multiplication: " << a*b <<endl;
    cout << "Division: " << a/b << endl;
    cout << "Division by module: " << a%b << endl;
    return 0;
}

      //Example
#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 626;
    b = 4330;
    cout << "Sum: "<< a+b << endl;
    cout << "Substraction: " << b-a << endl;
    cout << "Multiplication: " << a*b <<endl;
    cout << "Division: " << b/a << endl;
    cout << "Division by module: " << b%a << endl;
    return 0;
}

      //Example
int x = 24;
int y;
y = x - 12;
cout << y << endl; //output: 12

Multiplication
      //The multiplication operator multiplies its operands.
#include <iostream>
using namespace std;

int main()
{
    int x = 5 * 6;
    cout << x;
    return 0;
}     //output: 30
      
Division
      //The division operator divides the first operand by the second. 
      //Any remainder is dropped in order to return an integer value.
      //Example: 
#include <iostream>
using namespace std;

int main()
{
    int x = 10 / 3;     //float/float=float int/int=int float/int=float i.e to say, 3.0/2.0 = 1.5, 3/2 = 1, 3.0/2 = 1.5
    cout << x;
    return 0;
}     //output: 3

      //If one or both of the operands are floating point values, the division operator performs floating point division. 
      //Dividing by 0 will crash your program.

Modulus
      //The modulus operator (%) is informally known as the remainder operator 
      //because it returns the remainder after an integer division.
      //For example:
#include <iostream>
using namespace std;

int main()
{
    int x = 25 % 7;     //output: 4
    cout << x;
    return 0;
}
      

Operator Precedence
      //Operator precedence determines the grouping of terms in an expression, 
      //which affects how an expression is evaluated. Certain operators take higher precedence over others;
      //for example, the multiplication operator has higher precedence over the addition operator.
      //For example:
#include <iostream>
using namespace std;

int main()
{
    int x = 5+2*2;
    cout << x;
    return 0;
}     //output: 9

      //The program above evaluates 2*2 first, and then adds the result to 5.
      //As in mathematics, using parentheses alters operator precedence. 
#include <iostream>
using namespace std;

int main()
{
    int x = (5 + 2) *2;
    cout << x;
    return 0;
}     //output: 14

      //PEDMAS it follows the order as 
      //P=Parenthesis E=Exponents D=Division M=Multiplication A=Addition S=Subtraction
      //The BODMAS Rule --> Brackets (), Order % or √, Division, Multiplication, Addition, Subtraction)
      //https://en.cppreference.com/w/cpp/language/operator_precedence
      
      /*1. Prefix increment/decrement operator 
        2. Parenthesis 
        3. Exponents 
        4. Multiple/Division/Modulo(Remainder) (From left to right first) 
        5. Addition/Subtraction (From left to right first) 
        6. Equivalent/Equal to 
        7. Postfix increment/decrement operator */
            

      /*Parentheses force the operations to have higher precedence. 
        If there are parenthetical expressions nested within one another, 
        the expression within the innermost parentheses is evaluated first.
        
        If none of the expressions are in parentheses, 
        multiplicative (multiplication, division, modulus) operators will be evaluated before 
        additive (addition, subtraction) operators.*/
        
        




          
