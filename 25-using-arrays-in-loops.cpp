ARRAYS IN LOOPS
      //It's occasionally necessary to iterate over the elements of an array, assigning the elements values based on certain calculations.
      //Usually, this is accomplished using a loop.

      //to declare an array of integers. The size of the array is 9.
int anArray[9];

      //no need to define a loop counter outside of the loop statement, for example: 
for(INT I = 0; I <= 10; I++){}; //has the same effect as INT I; 
for(I = 0; I < 10; I++){};


      //One of the good things about arrays is that it can be used a loop to manipulate each element. 
      //When an array is declared, the values of each element are not set to zero automatically.
      //but rather a random number (including zero)! 
      //Example: 
#include <iostream> 
using namespace std; 
int main() { 
  int b[5]; 
  cout << b[0] << endl; 
  return 0; 
} 
      //Would output a random number (that can also be 0). 
      //That random number seems to be assigned once you compile and run the code. 
      //Afterwards it'd stay the same (unless you're using Code Playground, then the number changes every time you press "Run")


      //Let's declare an array, that is going to store 5 integers, and assign a value to each element using the for loop: 
int myArr[5];
for(int x=0; x<5; x++) {
  myArr[x] = 42;
}
      //All it's doing is starting at 0 (or an Array's default starting position), 
      //and then moves to 4 (since the condition is x<5) this is because 0, 1, 2, 3, 4 has 5 elements, but it's just zero indexed, 
      //so all the nunbers are one less than you're used to (1 is now 0 and so on). 
      //The block of code in the for loop says "Select the element # I'm currently on, and assign it a value of 42"

      //Each element in the array is assigned the value of 42.
      //The x variable in the for loop is used as the index for the array. 

      //The last index in the array is 4, so the for loop condition is x<5.

      //Explanation
int apples[5]; //This means that there are 5 elements (think of it as 5 items) in this array. 
apples[0], apples[1], apples[2], apples[3], apples[4] 
for (int x = 0; x < 5; x++) { 
apples[x] = 42; } //The apples[x] refers to the index (think of it as the position number) of the array. 
      //We initialized x to start at 0, so we begin with apples[0] = 42. 
      //Then the x is incremented by 1 after all statements are executed and it keeps repeating until the condition x < 5 is false. 
      //Why does an array start with an index of 0 instead of 1? Long story short, in programming, the number 0 has significance. 
      //A computer reads in 0 and 1s (binary code), 
      //if you don't have a value for a variable you should always initialize it to 0 otherwise it'll have a junk value in the CPU memory, etc.
      //1st loop: x = 0 apples[0] = 42 x++ 
      //2nd loop: x = 1 apples[1] = 42 x++ 
      //3rd loop: x = 2 apples[2] = 42 x++ 
      //4th loop: x = 3 apples[3] = 42 x++ 
      //5th loop: x = 4 apples[4] = 42 x++ 
      //6th loop: x = 5 loop terminates because condition is x < 5 (condition is false)
  
      //Example
#include <iostream> 
using namespace std; 
int main() { 
  int myArr[5]; 
  for(int x=0; x<5; x++) { 
    myArr[x] = 42; 
    cout<<x<<":"<<myArr[x]<<endl; } 
  return 0; 
}
      //its value of x in array. 
      //it's value using the for loop.. arr [0] 1 arr [1] 2 arr [2] 3 arr [3] 4 arr [4] 5 arr [5] 6 arr [6] 7 arr [7] 8 arr [8] 9 
      //the sum of the values in the array is 36 = x and the sum of the values of the for loop is 45 = 1+2+3+4+5+6+7+8+9 Thus, anArray [x] = 45 


      //Example: to declare an array of integers containing 9 elements. Assign to each element the value 45 using the for loop.
int anArray[9];
for (int x = 0; x <=8; x++)
{
 anArray[x] = 45;
}

      //Example: to output each index and corresponding value in the array.
#include <iostream>
using namespace std;

int main()
{
    int myArr[5];

    for(int x=0; x<5; x++) {
        myArr[x] = 42;
 
        cout << x << ": " << myArr[x] << endl;
    }

    return 0;
}
/*output:
        0: 42
        1: 42
        2: 42
        3: 42
        4: 42 */


      //Example:
#include <iostream>
using namespace std;

int main()
{
    int myArr[]={72,101,108,108,111,32,119,111,114,108,100,33};
    
    for (int i=0; i<=11; ++i) {
        
        cout << (char)myArr[i];
    }   // cout << "Hello world!";
    return 0;
}

      //Example
#include <iostream> 
using namespace std; 
int main() 
{ 
    int myArr[4]; 
    int x,y; 
    int total=0; 
    cin >> y; 
    for(int x=0; x<=3; x++) { 
        myArr[x] = y; 
        cout << "index " << x << ": " << myArr[x] << endl; 
        total = total + myArr[x]; y++; } 
        cout << "total is: " << total << endl; return 0; } 
        //inputs are 1,2,3,4 
        //outputs : //0 : 1 //11 : 2 //22 : 3 //33 : 4 //10 //why ? 
        /*New results using input for y as 1 index 0: 1 index 1: 2 index 2: 3 index 3: 4 total is: 10 *
        
        
        //Example
#include <iostream> 
using namespace std; 
int main() 
{ 
    int array[20]; 
    
    for(int i=0;i<=19;i++){ 
        array[i]=75; 
        cout<<i<<":"<<array[i]<<endl; } 
        return 0; 
        }


      //Example: to print all elements of the array arr containing 3 elements:
for (int x = 0; x < 3; x++) {
cout << arr[x] << endl;
}



      //Arrays are really useful but vectors can make program more efficient , fast and short.
#include<bits/stdc++.h> 
using namespace std; 
int main() { 
  vector <int> num; 
  vector <int> :: iterator i; 
  for(int i=0;i<10;i++) { 
    num.push_back(i) 
    }  // To insert values in the list 
  for(i =num.begin();
      i != num.end();i++) { 
    cout << *i << " "; } 
  return 0; 
} // Output 0 1 2 3 4 5 6 7 8 9




