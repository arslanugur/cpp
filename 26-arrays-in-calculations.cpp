ARRAYS IN CALCULATIONS
      //The following code creates a program that uses a for loop to calculate the sum of all elements of an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 35, 62, 555, 989};
    int sum = 0; 

    for (int x = 0; x < 5; x++) {
        sum += arr[x];  //sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    }

    cout << sum << endl;

    return 0;
}     //output: 1652

      //To review, we declared an array and a variable sum that will hold the sum of the elements.
      //Next, we utilized a for loop to iterate through each element of the array, and added the corresponding element's value to our sum variable. 

      //In the array, the first element's index is 0, so the for loop initializes the x variable to 0.

      //Example: Here are three additional ways to sum an array:
#include <iostream> 
#include <algorithm> // for accumulate and for_each 
using namespace std; 
int main() { 
  int arr[ ] = {11, 35, 62, 555, 989}; 
  int sum1 = 0, sum2 = 0, sum3 = 0; 
  // 1. USING A RANGE-BASED FOR LOOP 
  for (int x : arr) { sum1 += x; } 
  // 2. USING ACCUMULATE 
  sum2 = accumulate(begin(arr), end(arr), 0); 
  // 3. USING FOR_EACH 
  for_each(begin(arr), end(arr), [&](int x){sum3 += x;}); 
  cout << sum1 << endl << sum2 << endl << sum3 << endl; 
  return 0; } // Output // 1652 // 1652 // 1652


      //Example:
#include <iostream> 
using namespace std; 
int scores[5] = {70,75,80,85,90}; 
int sum = 0; 
int main () { 
  for (int x = 0; x < 5; x++) { 
    cout << scores[x] << endl; 
    sum += scores[x]; 
  } 
  cout << sum << endl; } //output is 400 
/*sum += scores[x]; means sum = sum + scores 1st loop: x = 0 (it returns true), 
                          sum = 0 + 70 = 70 2nd loop: x = 1 (it returns true), 
                          sum = 70 + 75 = 145 3rd loop: x = 2 (it returns true), 
                          sum = 145 + 80 = 225 4th loop: x = 3 (it returns true), 
                          sum = 225 + 85 = 310 5th loop: x = 4 (it returns true), 
                          sum = 310 + 90 = 400 6th loop: x = 5 (it returns false), 
    terminate Normally, global variables (variables that are not inside a function) like int sum; 
    and static variables (you'll learn this later) have a default value of 0. 
    If it doesn't, then that means your compiler doesn't follow the C standard. 
    Local variables aren't initialized to have a default value because it's not efficient (it'll make the compilation longer than necessary).*/


      //Example: to calculate the sum of myArray's elements using the for loop, and print to the screen. myArray is an array of doubles containing 4 elements.
double sum = 0.0;
for (int x = 0; x < 4; x++) {
  sum += myArray[x];
}
  cout << sum << endl;




      //Example
#include <iostream>
using namespace std;
    
int main()
{

    /*
        This is an example code that will
        sum all elements on array and I will
        explain how the code works..
    */
    
    int tuna[5] = {1,2,3,4,5};
    // declare tuna with 5 elements
    
    int sum = 0;
    // declare sum as integer and initialize it

    for(int i = 0; i < 5; i++)
    {
        sum += tuna[i];
    }

    cout << "The sum from array is " << sum <<
    "\n";
}
/*
    Tips:
    
    Remember: 
    x++ same as x = x + 1
    "sum += tuna[x]" same as "sum = sum + tuna
"
  
    How the code works?
    
    When loops run on first time..
    0 += 1     /    sum += tuna[0]
    
    When loops run on second times..
    1 += 2     /    sum += tuna[1]
    
    When loops run on third times..
    3 += 3     /    sum += tuna[2]
    
    When loops run on fourth times..
    6 += 4     /    sum += tuna[3]
    
    When loops run on fifth times..
    10 += 5    /    sum += tuna[4]
    
    After x is more or equal to 5
    it comes false then stop the loops
    
    That's why the sum is 15
*/





