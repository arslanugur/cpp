
DO-WHILE LOOP
#include <iostream>
using namespace std;

int main ()
{
// Local variable declaration:
int a = 1;

// do loop execution
do
{
cout <<"value of a: " << a << endl;
a = a + 1;
}while( a < 6 );

return 0;
}
/*Output:
value of a: 1
value of a: 2
value of a: 3
value of a: 4
value of a: 5*/

-----------------------------------------------------
FIBONACCI SERIES
#include <iostream>
using namespace std;
int main()
{
int n, first = 0, second = 1, next, c;

cout<<"Enter the number of terms\n";
cin>>n;

cout<<"First"<<n<<"terms of Fibonacci series are :-\n";

for ( c = 0 ; c < n ; c++ )
{
if ( c <= 1 )
next = c;
else
{
next = first + second;
first = second;
second = next;
/*replaced first no by second & second by addition of first & second */
}
cout<<next<<"\n";
}

return 0;
}
/*Output: Enter the number of terms: 5                                                                                  
First 5 terms of Fibonacci series are :-                                             
0                                                                                  
1                                                                                  
1                                                                                  
2                                                                                  
3 */

-----------------------------------------------------
ARRAY EXAMPLE
#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main ()
{
int n[ 15 ]; //array size is 15

// initialize elements of array n to 0
for ( int i = 1; i <= 10; i++ )
{
n[ i ] = i * 2; // Twice the element
}

cout << "\t Table of Two" << endl;

// output each array element's value
for ( int j = 1; j <= 10; j++ )
{
cout << setw( 7 )<<"2*"<< j<< "="<< setw(10) << n[ j ] << endl;
//setw used for formatting output
}

return 0;
}
/*Output:
Table of 2
2*1= 2
2*2= 4
2*3= 6
2*4= 8
2*5= 10
2*6= 12
2*7 =14
2*8 =16
2*9= 18
2*10= 20 */

-----------------------------------------------------
2D ARRAY EXAMPLE
#include <iostream>
#define size 16
using namespace std;

int main ()
{
int m,n;
int a[size][size];
cout<<"Enter the number of rows"<<endl;
cin>>m;
cout<<"Enter the number of columns"<<endl;
cin>>n;

cout<<"Enter the Elements in Table"<<endl;
for ( int i = 0; i < m; i++ )
{
for ( int j = 0; j < n; j++ )
{
cin >>a[i][j];
}
}
// output each array element"s value
for ( int i = 0; i < m; i++ )
for ( int j = 0; j < n; j++ )
{
cout << "a[" << i << "][" << j << "]: ";
cout << a[i][j]<< endl;
}

return 0;
}
/*Output:
Enter the number of rows: 2
Enter the number of columns: 3
Enter the Elements in Table
1 2 3 4 5 6
a[0][0]: 1
a[0][1]: 2
a[0][2]: 3
a[1][0]: 4
a[1][1]: 5
a[1][2]: 6 */

-----------------------------------------------------
Min number in Array

#include <iostream>
using namespace std;
int main()
{
int array[100], minimum, size, c, location = 1;

cout<<"Enter the number of elements in array\n";
cin>>size;

cout<<"Enter"<<size<<"integers\n";

for ( c = 0 ; c < size ; c++ )
cin>>array[c];

minimum = array[0];
/assuming first no. as minimum/

for ( c = 1 ; c < size ; c++ )
{
if ( array[c] < minimum )
{
minimum = array[c];
location = c+1;
/*If any no. lesser than maximum found then set it as minimum and save its location */
}
}

cout<<"Minimum element is present at location"<< location<<"and it's value is"<<minimum<<"\n";
return 0;
} 
/*Output:
Enter the number of elements in array: 4                                                                                  
Enter four integers: 8 7 6 5                                                                           
Minimum element is present at location4and it's value is 5*/
  
-----------------------------------------------------
Max number in Array

#include <iostream>
using namespace std;
int main()
{
int array[100], maximum, size, c, location = 1;

cout<<"Enter the number of elements in array\n";
cin>>size;

cout<<"Enter"<<size<<"integers\n";

for (c = 0; c < size; c++)
cin>>array[c];

maximum = array[0];
/assuming first no. as maximum/

for (c = 1; c < size; c++)
{
if (array[c] > maximum)
{
maximum = array[c];
location = c+1;
/*If any no. greater than maximum found then set it as maximum and save its location */
}
}

cout<<"Maximum element is present at location"<<location<<"and it's value is"<<maximum<<"\n";
return 0;
}
/*Output:
Enter the number of elements in array: 4                                                                                  
Enter four integers: 8 7 6 5                                                                            
Maximum element is present at location1and it's value is 8*/
  
-----------------------------------------------------
Inserting numbers in Array

#include <iostream>
using namespace std;
int main()
{
int array[100], position, c, n, value;

cout<<"Enter number of elements in array\n";
cin>>n;

cout<<"Enter"<<n<<"elements\n";
for (c = 0; c < n; c++)
cin>>array[c];

cout<<"Enter the location where you wish to insert an element\n";
cin>>position;

cout<<"Enter the value to insert\n";
cin>>value;

for (c = n - 1; c >= position - 1; c--)
array[c+1] = array[c];
/* from given position shifting all elements by 1 position */

array[position-1] = value;
/inserting value to given position/

cout<<"Resultant array is\n";
for (c = 0; c <= n; c++)
cout<<array[c]<<"\n";
return 0;
}
/*Output:
Enter number of elements in array: 4                                                                                  
Enter 4 elements: 6 7 8 9                                                                            
Enter the location where you wish to insert an element: 1                                                                                  
Enter the value to insert: 5                                                                                  
Resultant array is                                                                 
5                                                                                  
6                                                                                  
7                                                                                  
8                                                                                  
9*/
-----------------------------------------------------
Merge Arrays

#include <iostream>
using namespace std;
int merge(int [], int, int [], int, int []);

int main() {
int a[100], b[100], m, n, c, sorted[200];

cout<<"Input number of elements in first array\n";
cin>>m;

cout<<"Input"<<m<<"integers\n";
for (c = 0; c < m; c++) {
cin>>a[c];
}

cout<<"Input number of elements in second array\n";
cin>>n;

cout<<"Input"<<n<<"integers\n";
for (c = 0; c < n; c++) {
cin>>b[c];
}

merge(a, m, b, n, sorted);

cout<<"Sorted array:\n";

for (c = 0; c < m + n; c++) {
cout<<sorted[c]<<"\n";
}

return 0;
}
int merge(int a[], int m, int b[], int n, int sorted[]) {
int i, j, k;
j = k = 0;
for (i = 0; i < m + n;) {
if (j < m && k < n) {
if (a[j] < b[k]) {
sorted[i] = a[j];
j++;
}
else {
sorted[i] = b[k];
k++;
}
/if element of a array is less than b then push it in resultant array else push element of b in array/
i++;
}
else if (j == m) {
for (; i < m + n;) {
sorted[i] = b[k];
k++;
i++;
/if array a is finished push all the elements of b in resultant array/
}
}
else {
for (; i < m + n;) {
sorted[i] = a[j];
j++;
i++;
/if array b is finished push all the elements of a in resultant array/
}
}
}
}
/*Output:
Input number of elements in first array                                            
3                                                                                  
Input 3 integers                                                                     
6 5 4                                                                              
Input number of elements in second array                                           
3                                                                                  
Input 3 integers                                                                     
3 2 1                                                                              
Sorted array:                                                                      
3                                                                                  
2                                                                                  
1                                                                                  
6                                                                                  
5                                                                                  
4 */
  
-----------------------------------------------------
Passing Array to functions

#include <iostream>
using namespace std;

// function declaration:
double getAverage(int arr[], int size);

int main ()
{
// an int array with 8 ages of people
int balance[8] = {18,9,51,33,15,24,67,54};
double avg;

// pass pointer to the array as an argument.
avg = getAverage( balance, 8 ) ;

// output the returned value
cout << "Average of all ages is : " << avg << endl;

return 0;
}

double getAverage(int arr[], int size)
{
int i, sum = 0;
double avg;

for (i = 0; i < size; ++i)
{
sum += arr[i];
}

avg = double(sum) / size;

return avg;
}
/*Output: Average of all ages is : 33.875*/
  
-----------------------------------------------------
Reverse Array

#include <iostream>
using namespace std;
int main()
{
int n, c, d, a[100], b[100];

cout<<"Enter the number of elements in array\n";
cin>>n;

cout<<"Enter the array elements\n";

for (c = 0; c < n ; c++)
cin>>a[c];

/* Copying elements into array b starting from end of array a */

for (c = n - 1, d = 0; c >= 0; c--, d++)
b[d] = a[c];

/* Copying reversed array into original.
* Here we are modifying original array, this is optional.*/

for (c = 0; c < n; c++)
a[c] = b[c];
cout<<"Reverse array is\n";

for (c = 0; c < n; c++)
cout<<a[c]<<"\n";
return 0;
}
/*Output:
Enter the number of elements in array                                                                                            
4                                                                                                                                
Enter the array elements                                                                                                         
 4 5 6 7                                                                                                                         
Reverse array is                                                                                                                 
7                                                                                                                                
6                                                                                                                                
5                                                                                                                                
4*/
-----------------------------------------------------
Reverse num using Array

#include <iostream>
using namespace std;
int main()
{
int n, array[100], i;
cout<<"Enter no of digits in your number";
cin>>n;

cout<<"Enter no.";
for(i=0,i < n;i++)
cin>>a[i];
/storing each no in array/

cout<<"Reverse no is : ";
for(i=n-1,i > =0;i--)
cout<<a[i];
/Printing array in reverse order/
}


Output:

Enter no of digits in your number 2                                                
Enter no.5 7                                                                       
Reverse no is : 7 5
-----------------------------------------------------
Return Array from pointer

#include <iostream>

using namespace std;

int * getElements( )
{
static int r[5];
for (int i = 0; i < 5; ++i)
{
cout << "Enter the element at " << i << " : " ;
cin >> r[i] ;
}
for (int i = 0; i < 5; ++i)
{
cout << r[i] << endl;
}

return r;
}

// main function to call above defined function.
int main ()
{
// a pointer to an int.
int *p;

p = getElements();
for ( int i = 0; i < 5; i++ )
{
cout << "*(p + " << i << ") : ";
cout << *(p + i) << endl;
}


Output:

Enter the element at 0 : 1
Enter the element at 1 : 2
Enter the element at 2 : 3
Enter the element at 3 : 4
Enter the element at 4 : 5
1
2
3
4
5
*(p + 0 ) : 1
*(p + 1 ) : 2
*(p + 2 ) : 3
*(p + 3 ) : 4
*(p + 4 ) : 5
  
-----------------------------------------------------
Array of pointer

#include <iostream>
using namespace std;
using namespace std;
const int MAX = 5;

int main ()
{
int arr[MAX] = {10,20,30,40,50};
int *ptr[MAX];

for (int i = 0; i < MAX; i++)
{
ptr[i] = &arr[i]; // assign the address of integer.
}
for (int i = 0; i < MAX; i++)
{
cout << "Value of var[" << i << "] = " << *ptr[i] << endl;
}
return 0;
}


Output:

Value of var[0] = 10
Value of var[1] = 20
Value of var[2] = 30
Value of var[3] = 40
Value of var[4] = 50
-----------------------------------------------------
pointer to Array

#include <iostream>
using namespace std;

int main ()
{
// an array of 4 elements.
double balance[4] = {18,9,51,33};
double *p;

p = balance;

// output each array element's value
cout << "Using Pointer array values are as follows " << endl;
for ( int i = 0; i < 4; i++ )
{
cout << "*(p + " << i << ") : ";
cout << *(p + i) << endl;
}

cout << "Using Balance array values are as follows" << endl;
for ( int i = 0; i < 4; i++ )
{
cout << "*(balance + " << i << ") : ";
cout << *(balance + i) << endl;
}

return 0;
}


Output:

Array values using pointer
*(p + 0) : 18
*(p + 1) : 9
*(p + 2) : 51
*(p + 3) : 33
Array values using balance as address
*(balance + 0) : 18
*(balance + 1) : 9
*(balance + 2) : 51
*(balance + 3) : 33
  
-----------------------------------------------------
-----------------------------------------------------
-----------------------------------------------------
-----------------------------------------------------
-----------------------------------------------------

         


