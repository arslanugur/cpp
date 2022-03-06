Multi-Dimensional Arrays
      //A multi-dimensional array holds one or more arrays. Declare a multidimensional array as follows.
type name[size1][size2]...[sizeN];

      //Here, we've created a two-dimensional 3x4 integer array:
int x[3][4];

      //Visualize this array as a table composed of 3 rows, and 4 columns.
/*      |  Coloumn 1 | Coloumn 2 | Coloumn 3 | Coloumn 4 |
Row 1   |  x[0][0]   |  x[0][1]  |  x[0][2]  |  x[0][3]  |
Row 2   |  x[1][0]   |  x[1][1]  |  x[1][2]  |  x[1][3]  |
Row 3   |  x[2][0]   |  x[2][1]  |  x[2][2]  |  x[2][3]  |*/

      //Remember element counting always starts from 0.

      //Multidimensional array 
array[2][3] //--> 2 arrays containing 3 values each - { {1,2,3}, {1,2,3} } 
array[2][3][4] //--> 2 arrays containing 3 arrays each containing 4 values each - { { {1,2,3,4}, {1,2,3,4}, {1,2,3,4} }, { {1,2,3,4}, {1,2,3,4}, {1,2,3,4} } }



      //2d arrays as x and y positions for an image or tile positions in a 2d game. 
      //Example: position[x][y] So if an image is 30 x 30: 
      position[0][0] = lower left corner 
      position[0][29] = upper left corner 
      position[29][29] = upper right corner 
      position[29][0] = lower right corner 
      //Similar to how minecraft uses 3D arrays of values (index numbers in a list of blocks) by using position[x][y][z] = someValue;

      //int arr[ 2 ][ 3 ] creates an array arr consisting of 2 arrays with 3 elements in each. 
      //Initialization: arr = { {2, 3, 4}, {8, 9, 10} }; arr [1][2] = 0; 
      //The row above sets third element (index=2) in the second array (index=1) to 0. It was 10 before.. 
      //If thinking in rows and columns then picture your arrays like this: 
      //arr = { {2, 3, 4}, // 1st row {8, 9, 10} // 2nd row }; 
      //To access an element you have to specify the index for both the array in question and the element in that array, both indexes are zero based. 
      //int x = [which array?][which element?]. 
      //To set x equal to last element in last array use: x = [ 1 ][ 2 ]; 
      // x is now 10 To set x equal to second element in first array use: x = [ 0 ][ 1 ]; // x is now 3

      //Example: to declare a two-dimensional array multiArr which has 2 rows and 4 columns.
int multiArr[2][4];

      //Example
#include <iostream> 
using namespace std; 
int main() { 
      int god[2][3] = {{1,2,3},{5,6,7}}; 
      for ( int row = 0; row < 2; row++){ 
            for ( int column = 0; column < 3; column++){ 
                  cout << god[row][column] << " "; } 
            cout << endl; } 
      return 0; 
}

      //Example: to print arr's element's value to the screen, which is located at the first row and the second column.
cout << arr[0][1] << endl;

      //Arrays can contain an unlimited number of dimensions.
string threeD[42][8][3];

      //The example above declares a three-dimensional array of strings. 
      //As we did previously, it's possible to use index numbers to access and modify the elements. 

      //Arrays more than three dimensions are harder to manage.

      //int arr[5][3][2] means that we have 5 tables of 3 rows and 2 columns. 
      //Note that we have 30 values because 5*3*2 = 30. So that all values from 1 to 30 is divided into 5 equal tables. 
      //First table contains numbers from 1 to 6, second from 7 to 12 etc... 
      //So when we use for example (cout << [3][0][1]) that will output the value from fourth table (remember rule 3 = 4), first row and second column. 
      //So in this example it will output the value of 20 because this number is in the 4th table which includes values from 19 to 24. 3d is simple when you understand that.

      //To go through the three dimensional array with for loop 
string arraythreeD[2][3][4] = { { {"1","2","3","4"}, {"5","6","7","8"}, {"9","10","11","12"} }, { {"13","14","15","16"}, {"17","18","19","20"}, {"21","22","23","24"} } }; 
for (int x=0;x<2;x++){ 
      for (int y=0;y<3;y++){ 
            for (int z=0;z<4;z++){ 
                  cout << arraythreeD[x][y][z] << " "; } 
            cout << endl; } cout << endl; }

      //https://www.quora.com/How-do-I-visualize-multidimensional-arrays

      //Example: to create and access a 3D array
#include <iostream> 
using namespace std; 
int main() { 
      int _3D[1][2][3] = { { {1,2,3} , {4,5,6} } }; 
      cout << _3D[0][1][2] << endl; 
      return 0; }; //output is 6.

      //array[2][4][4] = {{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}} 
      //It means 2 arrays Containing 4 rows and 4 columns
      //arr[2][3][4] means 2 tables with 3 rows, 4 columns.

      //Example: for 3d array
#include <iostream> 
using namespace std; 
int main() { 
      int x[2][2][3] ={{{2, 3, 4},{4,5,6}}, {{1,2,3},{8, 9, 10}}}; 
      cout << x[1][1][2] << endl; //output: 10 
      return 0; 
}

      //https://www.programiz.com/cpp-programming/multidimensional-arrays

      //to declare a multidimensional array with 2 rows and 3 columns. 
      //Enter the value using cin for the element in the second column of the second row.
int arr[2][3];
cin >> arr[1][1];



