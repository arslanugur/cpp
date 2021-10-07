ARRAYS
      //An array is used to store a collection of data, 
      //but it may be useful to think of an array as a collection of variables that are all of the same type.
      //Instead of declaring multiple variables and storing individual values, 
      //you can declare a single array to store all the values.

      //When declaring an array, specify its element types, as well as the number of elements it will hold.
      //For example:
int a[5];

      //In the example above, variable a was declared as an array of five integer values [specified in square brackets].
      //You can initialize the array by specifying the values it holds: 
int b[5] = {11, 45, 62, 70, 88};

      //The values are provided in a comma separated list, enclosed in {curly braces}. 

      //The number of values between braces { } must not exceed the number of the elements declared within the square brackets [ ].
#include <iostream> 
using namespace std; 
int main() { 
  int a[]={4,8,2,5}; 
  cout<<a[1]; 
  return 0; 
} //output is 8 without any error


      //Example
#include <iostream>
using namespace std;

int main()
{
    int array1[5] = {};
    int array2[5] = {2,5,3};
    int x;
    
    cout<<"{";
    for(x=0;x<4;x++){
      cout<<array1[x]<<",";
    }
    cout<<array1[4]<<"}"<<endl;
    
    cout<<"{";
    for(x=0;x<4;x++){
    cout<<array2[x]<<",";
    }
    cout<<array2[4]<<"}";
}
/*outputs
{0,0,0,0,0}
{2,5,3,0,0}
*/

      //to create an array of integers named myArr containing values 1, 2, 3, 4 and 5. The size of the array is 5.
int myArr[5] = { 1, 2, 3, 4, 5 };

      //Example
#include <iostream>
signed int main(void)
{

	/*
	 * Defining the arrays:
	 * Equal sign is not necessary since C++11 (unified declaration).
	 * Incomplete lists are filled with zeros by the compiler (arr_3).
	 */
	int arr_1[5] {2, 5, 7, 11, 13};
	int arr_2[ ] {0, -2, 4, -6, 8, -10};
	int arr_3[7] {1, 0, 1};


	/* Count variable */
	int i;

	/* Print out arr_1 */
	std::cout << "arr_1: {";
	for(i = 0; i < sizeof(arr_1)/sizeof(arr_1[0]) - 1; ++i)
	{
		std::cout << arr_1[i] << ", ";
	}
	std::cout << arr_1[i] << "}  Size: " << sizeof(arr_1)/sizeof(arr_1[0]) << std::endl;

	/* Print out arr_2 */
	std::cout << "arr_2: {";
	for(i = 0; i < sizeof(arr_2)/sizeof(arr_2[0]) - 1; ++i)
	{
		std::cout << arr_2[i] << ", ";
	}
	std::cout << arr_2[i] << "}  Size: " << sizeof(arr_2)/sizeof(arr_2[0]) << std::endl;

	/* Print out arr_3 */
	std::cout << "arr_3: {";
	for(i = 0; i < sizeof(arr_3)/sizeof(arr_3[0]) - 1; ++i)
	{
		std::cout << arr_3[i] << ", ";
	}
	std::cout << arr_3[i] << "}  Size: " << sizeof(arr_3)/sizeof(arr_3[0]) << std::endl;

	return 0;
	
} /* signed int main(void) */

INITIALIZING ARRAYS
      //If you omit the size of the array, an array just big enough to hold the initialization is created.
      //For example:
int b[] = {11, 45, 62, 70, 88};

      //This creates an identical array to the one created in the previous example.

      //Each element, or member, of the array has an index, which pinpoints the element's specific position.
      //The array's first member has the index of 0, the second has the index of 1.
      //So, for the array b that we declared above: 

  
