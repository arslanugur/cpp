Using Increment or Decrement
      //To print x's values from 1 to 5. Increment x's value using ++ operator.
int x = 1;
  while(x <= 5) {
  cout << x << endl;
  x++;
}

      //A loop can be used to obtain multiple inputs from the user.
      //Let's create a program that allows the user to enter a number 5 times, 
      //each time storing the input in a variable.
int num = 1;
int number;

while (num <= 5) {

  cin >> number;
  num++;
}

      //The above code asks for user input 5 times, and each time saves the input in the number variable.
      //to allow user to enter a value using cin and store it in the 'number' variable 5 times.
int x = 1;
int number;
while (x <= 5) {
  cin >> number;
  x++;
}

      //to calculate the sum of the numbers the user has entered.
#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int number;
    int total = 0;

    while (num <= 5) {
        cin >> number;
        total += number;
        num++;
    }
    cout << total << endl;

    return 0;
}
      /*If we input 5 numbers then it will use all five numbers. 
        For e.g 1. (if we use 5 input :1,2,3,4,5) 
        Then:0+1=1 1+2=3 3+3=6 6+4=10 10+5=15 
        Then output will be 15. 2.i ( if we use 4 inputs:1,2,3,4) 
        Then: 0+1=1 1+2=3 3+3=6 6+4=10 10+4=14 
        Then output will be 14. 
        Using same logic 3.( if we only use one 1 input :1) 
        Then: 0+1=1 1+1=2 2+1=3 3+1=4 4+1=5 
        Then the output will be 5.*/


      //The code above adds the number entered by the user to the total variable with each loop iteration.
      //Once the loop stops executing, the value of total is printed. 
      //This value is the sum of all of the numbers the user entered.

      //Note that the variable total has an initial value of 0.

      /*as long as the number of inputs is 5 or less, 
      the code will always produce a sum of the inputted numbers. 
      num++ increases the number of inputted numbers (num) by 1 every time an input is added, 
      which is how the code knows if the number of inputs is 5 or less. 
      total+=number means total=total+number 
      int total = 0 0 + number (inputted number) = new total (total). 
      there are upto 5 inputs and 
      so the code adds the (inputted) number to the total upto 5 times in order to work out the sum.*/
      
      //to enter 5 numbers from the user and print their sum. Store the sum in the variable named total.
int x = 1;
int number;
int total = 0;

while (x <= 5) {
  cin >> number;
  
total = total + number;
  x++;
}

cout << "Sum: " << total << endl;

      /*x = 1; while (x <= 5) { 
        x = 2; while (x <= 5) { 
        x = 3; while (x <= 5) { 
        x = 4; while (x <= 5) { 
        x = 5; while (x <= 5) { 
        remember that the <= is for (smaller than or equal to), 
        that's why the while can be executed 6 times.*/


      

