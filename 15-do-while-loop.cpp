The do...while Loop
      //Unlike for and while loops, which test the loop condition at the top of the loop, 
      //the do...while loop checks its condition at the bottom of the loop.
      //A do...while loop is similar to a while loop. 
      //The one difference is that the do...while loop is guaranteed to execute at least one time.
      //Syntax:
do {
   statement(s);
} while (condition);

      //Syntax:
do { } while(test);

      //Example:
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    do {
        cout << a << endl;
        a++;
    } while(a < 5);

    return 0;
}

      //Example to print x variable's values 10 times.
int x = 0;
do {
  cout << x << endl;
  x++;
} 
while (x < 10);   //output is: 0 1 2 3 4 5 6 7 8 9 There are 10 times!


while vs. do...while
      //If the condition evaluated to false, the statements in the do would still run once: 
#include <iostream>
using namespace std;

int main()
{
    int a = 42;
    do {
        cout << a << endl;
        a++;
    } while(a < 5);

    return 0;
}     //output: 42

      //The do...while loop executes the statements at least once, and then tests the condition.
      //The while loop executes the statement after testing condition.

      //do while: shoot first, ask questions later 
      //while: ask questions first, then shoots
      
      //How is a do... while loop different from a while loop? --> do...while loop runs your code at least one time
      //The "do {...} while(...)" loop is always executed at least one time, unlike the "while(...){...}" which isn't executed if the condition is false.

      //As with other loops, if the condition in the loop never evaluates to false, the loop will run forever.
      //For example:
#include <iostream>
using namespace std;

int main()
{
    int a = 42;
    do {
        cout << a << endl;
    } while (a > 0);

    return 0;
}     //runs forever
      //Always test your loops, so you know that they operate in the manner you expect.

      //Example to print "this is a loop" to the screen 15 times.
int x = 1;
do {
  cout << "this is a loop" << endl;
  x++;
} 
while ( x <= 15 ); //The answer is 15 because the test is <=, if was just <, the answer would be 16.
                   //Initially the value of ' x' is 1 so the loop will run for first time and it prints "this is a loop". 
                   //Again because of 'x++' the value of 'x' increases to 2 and it comes out of loop 
                   //then 'while' condition is check (ie x=2 is less than 15) which is true so again loop will run . 
                   //And it continues till x=15 (since given condition is x<=15). 
                   //And as soon as value of 'x' increases to 16 which is greater than 15, condition become false and it leaves the loop.
      

      //Examples
#include <iostream>
using namespace std;

int main() {
    printf("1.entry control\n\n");
    printf("1-1.increment before condition check\n ");      //output: 1 2 3 4
    int a=0;
    while(++a<5){       //
        cout << " " << a;
    }
    cout << endl;
    printf("1-2.condition check before increment\n");
    printf("1-2-1.increment before execution\n "); //output:   1 2 3 4 5
    a=0;
    while(a++<5){
        cout << " " << a;
    }
    
    cout << endl;
    printf("1-2-2.execute before increment\n ");      //output:  0 1 2 3 4
    a=0;
    while(a<5){
        cout << " " << a;
        a++;
    }
    cout << endl << endl;
    printf("2.exit control\n\n");
    printf("2-1.increment before execution\n ");      //output:  1 2 3 4 5

    a=0;
    do{
        cout << " " << ++a;
    }while(a<5);
    cout << endl;
    printf("2-2.execute before increment\n");
    printf("2-2-1.increment before condition check\n ");    //output:  0 1 2 3 4 5

    a=0;
    do{
        cout << " " << a;
    }while(a++<5);
    cout << endl;
    
    printf("2-2-2.condition check before increment\n ");    //output:  0 1 2 3 4
    a=0;
    do{
        cout << " " << a;
    }while(++a<5);
    
    return 0;
}





