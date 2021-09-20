Assignment Operators
      //The simple assignment operator (=) assigns the right side to the left side.

      //C++ provides shorthand operators that have the capability of performing an operation and an assignment at the same time.
      //For example: 
int x = 10;
x += 4; // equivalent to x = x + 4      --> x=10 x+=4 --> x= 10+4    
x -= 5; // equivalent to x = x - 5

      //Assignment operator (=) assigns the right side to the left side.
      //The computer is thinking x(new) = x(old)+4 in numbers
      //x = x + 10 --> x += 10

      //The same shorthand syntax applies to the multiplication, division, and modulus operators.
x *= 3; // equivalent to x = x * 3
x /= 2; // equivalent to x = x / 2
x %= 4; // equivalent to x = x % 4
      //The same shorthand syntax applies to the multiplication, division, and modulus operators.

      //x%=4 is equal to x=x%4 which means x will be equal to the remainder after some x is divided by 4 
      //eg if x=6%4 then x = 2 and x=9%4 then x= 1 if x=3%4 then x= 0 as there is no remainder left


Increment Operator
      //The increment operator is used to increase an integer's value by one, and is a commonly used C++ operator. 
x++; //equivalent to x = x + 1
      //The increment operator is used to increase an integer's value by one.
      //C++; --> C = C+1; --> C+=1
      
      /*there is a difference between X++ and ++X 
        the first one is a post incrementation and 
        the second one is a pre incrementation means 
        if we have x= 4 and y=x++ then 
        After compilation we got y =4 and X=5 
        because we increment x after assigning its value to y 
        but in pre incrementation if we have x=4 and y=++x 
        then X=5 and y=5 means we increment x and after that we assign its value to y*/

      //Example
#include <iostream>
using namespace std;

int main()
{
    int x = 11;
    x++;
    cout << x;
    return 0; 
}   //output: 12
      /*return is used to set the return value from your program. 
        this can be checked by errorlevel in dos/windows. 
        0 in most case means there was no error running the program.

        The function main must return a value that is an integer type; 
        you cannot write "void main" and return nothing, nor can you return a string. 
        If you do not return an integer such as 0, 1, 2, ... , n (such that n <= inf.) 
        then you will get an error from the compiler letting you know that the main function must return an int. 
        
        return 0 is a must in C language if you use int type main. 
        It is same in c++ but new compilers automatically assumes it even if we don't write it
        */

      //Example
#include <iostream>
using namespace std;

int main()
{
    int x = 11;
    int y=++x*5;
    cout << y++ << endl;
    cout << ++y << endl;
    y++;
    cout << y << endl;
    y +=5;
    cout << y << endl;
    cout << y++ << endl;
    return 0; //if return 0; is not in the main() function, the C++ compiler inserts return 0; at the end of the main() function itself.   
}
/*
60
62
63
68
68
*/

      // to increment x's value by one using the ++ operator and print its value to the screen.
int x = 20;
x++;
cout << x << endl;//you would normally use x++ in a loop, and you would most likely need <<endl after each loop

      //The increment operator has two forms, prefix and postfix
++x; // prefix
x++; // postfix

      //Prefix increments the value, and then proceeds with the expression.
      //Postfix evaluates the expression and then performs the incrementing. 

      //Prefix example: Prefix (Fix the number BEFORE assigning it)
x = 5;
y = ++x;
// x is 6, y is 6
      //Postfix example: Postfix (Fix the number AFTER assigning it)
x = 5;
y = x++;
// x is 6, y is 5

      //The prefix example increments the value of x, and then assigns it to y.
      //The postfix example assigns the value of x to y, and then increments it.
  
      //prefix: int x, y; x=5; x=x+1; y=x; //so x=6 and y=6 
      //postfix: int x,y; x=5; y=x; x=x+1; //so x=6 and y=5
      //++x increments x's value before using it --> ++x means change then use
      //x++ uses x's value then increments it --> x++ means use then change
      //++x increment itself and "copy" itself to y, giving it the same value. 
      //x++ First " copy" itself to Y, and after that, increment itself. 


Decrement Operator
      //The decrement operator (--) works in much the same way as the increment operator, 
      //but instead of increasing the value, it decreases it by one.
--x; // prefix
x--; // postfix
      //The decrement operator (--) works in much the same way as the increment operator.
      
      //Example
int x = 20
x--; /*means x=x-1; x=20 so x=20-1; at the end x=19 ;*/

      //Prefix: before x=2 y= --x 
      // x is 1, y is 1 Its subtract the value of x then put in y. (Pre= subtract and equally.) 
      //Postfix= after x= 3 y= x-- 
      // x is 2, y is 3 It's assignment the value of x to y, then suctract 1 to x. (Pos= equal x to y, then subtract one to x) 
  



  
  
