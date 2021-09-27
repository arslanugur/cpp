The for loop
      //A for loop is a repetition control structure that allows you to efficiently write a loop that executes a specific number of times.
      //SYNTAX:
for ( init; condition; increment or decrement ) {  //init means to initialize
  statement(s);
}

      /*The init step is executed first, and does not repeat.
        Next, the condition is evaluated, and the body of the loop is executed if the condition is true.
        In the next step, the increment statement updates the loop control variable.
        Then, the loop's body repeats itself, only stopping when the condition becomes false.*/

      //Syntax:
for (int x = 1; x < 10; x++) {
 // some code
}
      
      //A loop is a sequence of instructions that is continually repeated until a certain conditions is reached.
      //The init and increment statements may be left out, if not needed, 
      //but remember that the semicolons are mandatory.
  
      /*On the difference between "while Loop" and "for Loop" 
        They are both a repetition control structure. 
        And that according to C++ Programming Problem Analysis to Program Design by D.S. Malik, 
        "the C++ for looping structure is a specialized form of the while loop, 
        its primary purpose is to simplify the writing of counter-controlled loops/loop-control variables. 
        For this reason, the for Loop is typically called a counted or indexed for Loop. 
        They function the same but written differently.*/
  
      /*What is "declaring a variable", "assigning a variable", "initializing a variable"? 
        Declaring a variable means to set a type for a variable. 
        Assigning a variable means to set a value for a variable.
        Initializing a variable means to set a type as well as a value for a variable. 
  
        "init" is short for "initialization" for (initialization; condition; increment) { statement; } 
        "The init and increment statements may be left out, if not needed, 
        but remember that the semicolons are mandatory."
        The for loop only requires you to put the two semicolons i.e. for(;;) 
        If you don't include the 3 parameters, it'll become like a while loop. 
        However, only the for loop is allowed to have all 3 in there. 
        Know that if you initialize the variable in the loop, it can only be used inside the loop. */

      //The example below uses a for loop to print numbers from 0 to 9.
#include <iostream>
using namespace std;

int main()
{
    for (int a = 0; a < 10; a++) {
        cout << a << endl;
    }

    return 0;
}
      /*In the init step, we declared a variable a and set it to equal 0.
        a < 10 is the condition.
        After each iteration, the a++ increment statement is executed. */

      //When a increments to 10, the condition evaluates to false, and the loop stops.

      //To print x's values to the screen 10 times:
for (int x = 1; x <= 10; x++) {
  cout << x << endl;
}


      //It's possible to change the increment statement.
#include <iostream>
using namespace std;

int main()
{
    for (int a = 0; a < 50; a+=10) {
        cout << a << endl;
    }

    return 0;
} //output: 0 10 20 30 40

      //You can also use decrement in the statement.
#include <iostream>
using namespace std;

int main()
{
    for (int a = 10; a >= 0; a -= 3) {
        cout << a << endl;
    }

    return 0;
}
      //output: 10 7 4 1
      //When using the for loop, don't forget the semicolon after the init and condition statements.

      //If we don't give it a condition. for example: for (int x=1;;x++) { cout<<"Hello"<<endl; } //Hello will be printed infinitely


      //to print EVEN (multiples of 2) values from 0 to 20 using a for loop:
for (int x = 0; x <= 20; x += 2) {
  cout << x << endl;
}

      //Example
#include <iostream>
using namespace std;
/*For question*/
int main() {

int arr[] ={1,2,3,4,5,6}; //declare array

// for (data_type var : array_variable){}
for (int a : arr){ 
cout << a << endl;
}
return 0;
}
/*output:
    1
    2
    3
    4
    5
    6*/


      //A program that recieves a number from user and prints out all prime numbers from 1 to that number: 
#include <iostream> 
using namespace std; 
int main(){ 
    int prime=1; 
    int num; 
    int p_num=2; 
    cin>>num; 
    for (; p_num<=num; p_num++){ prime=1; 
    for (int i=2; i<p_num; i++){ 
        if (p_num%i==0) prime=0;} 
        if (prime==1) cout <<p_num <<endl; } 
        return 0; }


      //Example that gives the exponents of a number 
#include <iostream>
using namespace std; 
int main() { 
  int n; 
  cin>>n; 
  for( int x=n;x>=n;x=x*n){ 
    cout<<x<<endl; } 
  return 0; }
                        
      //Example:
#include <iostream>

int main() {

int i[10]={0,1,2,3,4,5,6,7,8,9};
int j[10];

for(auto itr:i) {
j[itr]=2*i[itr];
std::cout<<itr<<". "<<j[itr]<<std::endl;
}
}
      /*output:
        0. 0
        1. 2
        2. 4
        3. 6
        4. 8
        5. 10
        6. 12
        7. 14
        8. 16
        9. 18 */

      //Example
#include <iostream>
using namespace std;

int main()
{
    
cout<<"Pyramid temple number  < 10:\n";
    for (int i = 0;i <= 9; i++) {
        for (int d = 10 - i; d > 0;d--) {
            cout<<"\t";
        }
        for (int j = 1; j <= i; j++) {
            cout<<"\t"<<i<<"\t" ;  
        }
        cout<<"\n";        
    }
    return 0;
}


      //Inverted Triangle (pyramid Terbalik)
#include <iostream>
using namespace std;

int main() {
// Do you have inverted triangle body shape? 
    int numrows,i,d, j; 
    cout<<"Number of rows less than 6: "; 
    numrows=5;
    cout<<"\n\n";
    for(i=numrows; i>=1; --i) { 
        for(d=0; d<numrows-i; ++d) 
           cout<<"\t"; 
        for(j=i; j<=2*i-1; ++j) {
           cout<<"\t"<<i<<"\t"; 
        }
        cout<<endl;
    
    }
    return 0;
}


