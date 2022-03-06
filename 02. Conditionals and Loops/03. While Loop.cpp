Loops
      //A loop repeatedly executes a set of statements until a particular condition is satisfied.

      //A while loop statement repeatedly executes a target statement as long as a given condition remains true.
      //Syntax:
while (condition) {
   statement(s);
}
      //Example
while (bacon <= 5) { 
    cout << "hungry"; }

      //The loop iterates while the condition is true. 
      //At the point when the condition becomes false, 
      //program control is shifted to the line that immediately follows the loop.
      
      //The loop's body is the block of statements within curly braces.
      //For example:
#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    while (num < 6) {
        cout << "Number: " << num << endl;
        num = num + 1;
    }

    return 0;
}
      //The example above declares a variable equal to 1 (int num = 1).
      //The while loop checks the condition (num < 6), 
      //and executes the statements in its body, which increment the value of num by one each time the loop runs. 
      //After the 5th iteration, num becomes 6, 
      //and the condition is evaluated to false, and the loop stops running.

      //num++; cout<<num; is not equal with cout<<num; num++;

      //Example: to print x's value to the screen 5 times.
int x = 1;
while(x <= 5) {
 cout << "value is " << x << endl;
 x = x + 1;
}

      //The increment value can be changed. 
      //If changed, the number of times the loop is run will change, as well.

      //Example
#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    while (num < 6) {
        cout << "Number: " << num << endl;
        num = num + 3;
    }
    return 0;
}
    /*Output:
      Number: 1
      Number: 4 */
      //Without a statement that eventually evaluates the loop condition to false, 
      //the loop will continue indefinitely.


      //Example
#include <iostream> 
using namespace std; 
int main() { 
  int a=0,b=1,sum=0; 
  cout<<a<<b; 
  while(sum<=20){ sum=a+b; 
  cout << sum; 
  a=b; 
  b=sum; } 
  return 0; 
} //output: 01123581321

      //Example: to increment bacon's value by 2 and print only the even values.
int bacon = 0;
 while(bacon <= 20) {
 cout << "bacon is " << bacon << endl;
 bacon = bacon +2; //another option: bacon += 2
}     //output: 0,2, 4,6,8,10,12,14,16,18,20


      //Example
#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	while (num >= 0) {
		cout << num << endl;
		num--;
	}
	cout << "We have lift off!" << endl;
	cout << "Falcon heavy is enroute to mars.";

	return 0;
}

      //Example: Fibonacci Series 
#include<iostream> 
using namespace std;

int main() { 
  int a, b, sum; 
  a=0, b=1;  /* Initialize a and b */ 
  sum = a+b; 
  cout<<"Fibonacci: \n"; 
  cout << a << ", "; 
  cout << b << ", "; 
  cout<< sum << ", "; 
  while(sum < 100)  /*To set the upper limit of the series*/ 
  { a = b; b = sum; 
  sum= a + b; 
  cout << sum << ", ";  /*The loop will terminate when the sum becomes greater than 100*/ 
  } 
  return 0; 
}

      //Example
#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    while (num < 21) {
        if(num%2==0) {
            cout << num << " is even\n";
        }
        else {
            cout << num << " is odd\n";
        }
        num++;
    }
    return 0;
}


      //Example
#include <iostream>
using namespace std;
int main()
/*THIS IS EXAMPLE FOR WHILE LOOP VARIATION*/

 {
    int i=0;
    while(i<=10)
    cout<<"The value of i is"<<i<<endl;
    i++;
    return 0;
}  /*this is infinity loop*/

 /*{ 
    int i=0;
    while(++i<=1000)
    
    return 0;
     }*/     /*this is empty loop*/
     
 /*{ 
    int i=0;
    while(i<=10)
    cout<<"The value of i is"<<i<<endl;
    i++;
    return 0;
    }*/    /*first the increment the value of i, then the value of i is compared with 10*/
     
 /*{
    int i=1;
    while(i++<=10)
    cout<<"The value of i is"<<i<<endl;
    return 0;
 }*/    /*in this the value of i is compared with 10 first then the incrementation of i takes place*/
  

      //Example
#include <iostream> 
using namespace std; 
int factorial(int n) { int fact = n; 
while(--n>0) {fact*=n; 
} 
return fact; 
} 
int main() { 
  cout << factorial(5); }//output: 120



