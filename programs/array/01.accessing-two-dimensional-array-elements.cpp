#include <iostream>
using namespace std;

int main()
{
    // an array with 5 rows and 2 columns.
    int a[5][2] = {{0, 0},
                   {1, 2},
                   {2, 4},
                   {3, 6},
                   {4, 8}};

    // output each array element's value
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j] << endl;
        }
    }
    
    return 0;
}

/*Output:
a[0][0]: 0
a[0][1]: 0
a[1][0]: 1
a[1][1]: 2
a[2][0]: 2
a[2][1]: 4
a[3][0]: 3
a[3][1]: 6
a[4][0]: 4
a[4][1]: 8*/


Array element swapping
#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int arr[100], i, temp, size;

    cout << "enter array size : ";
    cin >> size;

    cout << "enter elements in to array : \n";
    for (i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    cout << "\narray before swaping elements : \n";
    for (i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    //element swapping logic
    for (i = 1; i < size; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }

    cout << "\narray after swapping elements : \n";
    for (i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


Output:
enter array size : 4
enter elements in to array :
1 2 3 4

array before swaping elements :
1 2 3 4
array after swapping elements :
2 1 4 3

My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
int main()
{
    //If the size is omitted, the compiler uses the number of values
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // No intitialization.
    float p1[1000];

    //To initialize an array to all zeros, initialize only the first value.
    // All 1000 values initialized to zero.
    float p2[1000] = {0.0};

    // Initial values of pressure(variable) undefined.
    float pressure[10];

    // Remaining characters zero.
    char greeting[100] = "Hello";

    // Array size is 6 (final zero on strings).
    char goodbye[] = "Adios";

    return 0;
}

Array initialization
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <iostream>

using namespace std;

class Demo
{
    int x;

public:
    
    void setX(int i)
    {
        x = i;
    }

    int getX()
    {
        return x;
    }
};

int main()
{
    Demo obj[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        obj[i].setX(i);
    }
    
    for (i = 0; i < 4; i++)
    {
        cout << "obj[" << i << "].getX() : " << obj[i].getX() << endl;
    }
    
    return 0;
}

Array of objects
obj[0].getX() : 0
obj[1].getX() : 1
obj[2].getX() : 2
obj[3].getX() : 3
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
// for std::swap, use <utility> instead if C++11
#include <algorithm>
#include <iostream>

#define SIZE 10
using namespace std;

int main()
{

    cout << "array values :" << " 132, 520, 210, 510, 140 ,125,52,96,55,85" << "\n";
    //input array values
    int array[SIZE] = {132, 520, 210, 510, 140, 125, 52, 96, 55, 85};

    cout << "sorted values : ";

    // Step through each element of the array
    for (int startIndex = 0; startIndex < SIZE; ++startIndex)
    {
        // smallestIndex is the index of the smallest element we've encountered so far.
        int smallestIndex = startIndex;

        // Look for smallest element remaining in the array (starting at startIndex+1)
        for (int nowIndex = startIndex + 1; nowIndex < SIZE; ++nowIndex)
        {
            // If the current element is smaller than our previously found smallest
            if (array[nowIndex] < array[smallestIndex])
                // This is the new smallest number for this iteration
            {
                smallestIndex = nowIndex;
            }
        }

        // Swap our start element with our smallest element
        swap(array[startIndex], array[smallestIndex]);
    }

    // Now print our sorted array as proof it works
    for (int index = 0; index < SIZE; ++index)
    {
        cout << array[index] << ' ';
    }

    cout << "\n";
    return 0;
}

Array sort
array values : 132, 520, 210, 510, 140 ,125,52,96,55,85
sorted values : 52 55 85 96 125 132 140 210 510 520
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float sum = 0.0, average;
    cout << "Enter the numbers of data: ";
    cin >> n;
    float num[n];
    for (i = 0; i < n; ++i)
    {
        cout << endl << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    cout << endl << "Sum = " << sum;

    average = sum / n;
    cout << endl << "Average = " << average;

    return 0;
}

Array sum and average
Enter the numbers of data: 4
1. Enter number: 5
2. Enter number: 2
3. Enter number: 9
4. Enter number: 3
Sum = 19
Average = 4.75
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{

    int i, inputarray[10], no, pos;

    cout << "Enter 10 data elements in array: ";
    for (i = 0; i < 10; i++)
    {
        cin >> inputarray[i];
    }
    cout << "\nEnter position of element to delete: ";
    cin >> pos;

    if (pos > 10)
    {
        cout << "\n position value is not in range: ";
    }
    else
    {
        --pos;
        for (i = pos; i <= 9; i++)
        {
            inputarray[i] = inputarray[i + 1];
        }

        cout << "\n\nNew data in array: ";

        for (i = 0; i < 9; i++)
        {
            cout << inputarray[i];
            cout << " ";
        }
    }
    return 0;
}

Deletions in Array
Enter 10 data elements in array: 65
56
86
96
35
12
85
65
52
18

Enter position of element to delete: 3


New data in array: 65 56 96 35 12 85 65 52 18
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>
using namespace std;

 int main()
  {

   int numarr[100],evenarr[100],i,j=0,k=0,num;

   cout<<"Enter Size of Array : ";
   cin>>num;

   cout<<"Enter "<<num<<" Data elements in Array : ";
   for(i=0; i<num;i++)
   {
        cin>>numarr[i];
   }

   for(i=0; i<num;i++)
   {
        if(numarr[i]%2==0)
        {
            evenarr[j]=numarr[i];
            j++;
        }
   }

   cout<<"\nEven Elements : ";

    for(i=0; i<j ;i++)
    {
        cout<<evenarr[i]<<"  ";
    }
  }

Display even numbers in a array
Enter Size of Array : 10
Enter 10 Data elements in Array : 9
8
12
44
23
53
28
30
49
48

Even Elements : 8  12  44  28  30  48

My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

//method declaration
void lower_halfmatrix(int mat[10][10], int row);

//define main method
int main()
{
    //variable declaration
    int mat[10][10], i, j, row, col;

    //enter number of row and column you want
    cout << "Enter how many numbers of row and column you want : ";
    cout << "\n";
    cin >> row;
    cout << "\n";
    cin >> col;
    cout << "\n";
    cout << "enter elements";
    cout << "\n";

    for (i = 0; i < row; i++)
    {
        cout << "\n";
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    lower_halfmatrix(mat, row);

    return 0;
}

//method definition
void lower_halfmatrix(int mat[10][10], int row)
{
    int i, j;
    cout << "\n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

Display lower triangle of a matrix
Enter how many numbers of row and column you want :
3
3

enter elements

7
5
2

1
3
6

4
9
8

7
1 3
4 9 8
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

//method declaration
void upper_halfofmatrix(int mat[10][10], int col, int r);

int main()
{
    //variable declaration
    int mat[10][10], row, col, i, j;
    //input for row and column
    cout << "enter how many numbers of row and column you want : ";
    cin >> row >> col;
    //enter element into matrix
    cout << "enter elements: \n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    upper_halfofmatrix(mat, col, row);

    return 0;
}

//method definition
void upper_halfofmatrix(int mat[10][10], int col, int row)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i <= j)
                cout << mat[i][j];

            else
                cout << " ";
        }

        cout << "\n";
    }
}

Display upper half of matrix
enter how many numbers of row and column you want : 3
3
enter elements:
1
2
3
4
5
6
7
8
9
123
 56
  9
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{
    int mat[5][5], order, i, j, flag = 0;

    cout << "Enter size of matrix : ";
    cin >> order;

    cout << "Enter matrix element : \n";
    for (i = 0; i < order; i++)
    {
        cout << "\n";
        for (j = 0; j < order; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
        {
            if (i == j)
            {
                if (mat[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if (mat[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    cout << "The given matrix is ";
    if (flag == 0)
        cout << "an identity matrix.\n";
    else
        cout << "not an identity matrix.\n";

    return 0;
}

Identity matrix
Enter size of matrix : 3
Enter matrix element :

1 0 0

0 1 0

0 0 1
The given matrix is an identity matrix.
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{
    int i, j, k, n;
    float a[10][10] = {0}, d;

    cout << "Enter the order of matrix : ";
    cin >> n;
    cout << "Enter the elements : " << endl;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];

    for (i = 1; i <= n; i++)
        for (j = 1; j <= 2 * n; j++)
            if (j == (i + n))
                a[i][j] = 1;

    for (i = n; i > 1; i--)
    {
        if (a[i - 1][1] < a[i][1])
            for (j = 1; j <= n * 2; j++)
            {
                d = a[i][j];
                a[i][j] = a[i - 1][j];
                a[i - 1][j] = d;
            }
    }
    cout << "Augmented : " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n * 2; j++)
            cout << a[i][j] << "    ";
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n * 2; j++)
            if (j != i)
            {
                d = a[j][i] / a[i][i];
                for (k = 1; k <= n * 2; k++)
                    a[j][k] -= a[i][k] * d;
            }
    }

    for (i = 1; i <= n; i++)
    {
        d = a[i][i];
        for (j = 1; j <= n * 2; j++)
            a[i][j] = a[i][j] / d;
    }


    cout << "Inverse Matrix : " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = n + 1; j <= n * 2; j++)
            cout << a[i][j] << "    ";
        cout << endl;
    }

    return 0;
}

Inverse matrix using Gauss jordan method
Enter the order of matrix : 3
Enter the elements :
4
2
7
5
1
8
9
4
7
Augmented :
9    4    7    0    0    1
4    2    7    1    0    0
5    1    8    0    1    0
Inverse Matrix :
-0.490196    0.27451    0.176471
0.72549    -0.686274    0.0588236
0.215686    0.0392157    -0.117647
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

    cout << "Enter the number of rows and columns of matrix : ";
    cin >> m >> n;
    cout << "Enter the elements of first matrix : \n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> first[c][d];

    cout << "Enter the elements of second matrix : \n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> second[c][d];

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    cout << "Sum of entered matrices:-\n";

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            cout << sum[c][d] << "\t";

        cout << endl;
    }

    return 0;
}

Matrix addition 
Enter the number of rows and columns of matrix : 2 2
Enter the elements of first matrix :
8 1
2 3
Enter the elements of second matrix :
4 9
5 2
Sum of entered matrices:-
12      10
7       5
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{

    int a[5][5], b[5][5], c[5][5], m, n, p, q, i, j, k;

    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

    if (n == p)
    {
        cout << "\nEnter first matrix:\n";
        for (i = 0; i < m; ++i)
            for (j = 0; j < n; ++j)
                cin >> a[i][j];

        cout << "\nEnter second matrix:\n";
        for (i = 0; i < p; ++i)
            for (j = 0; j < q; ++j)
                cin >> b[i][j];

        cout << "\nThe new matrix is:\n";

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < q; ++j)
            {
                c[i][j] = 0;
                for (k = 0; k < n; ++k)
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                cout << c[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    else
        cout << "\nSorry!!!! Matrix multiplication can't be done";

    return 0;
}

Matrix multiplication
Enter rows and columns of first matrix: 2
3
Enter rows and columns of second matrix: 3
2

Enter first matrix:
1
2
3
4
5
6

Enter second matrix:
1

2
3
4
5
6

The new matrix is:
22      28
49      64
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sub[10][10];

    cout << "Enter the number of rows and columns of matrix : ";
    cin >> m >> n;
    cout << "Enter the elements of first matrix : \n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> first[c][d];

    cout << "Enter the elements of second matrix : \n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> second[c][d];

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sub[c][d] = first[c][d] - second[c][d];

    cout << "Subtraction of entered matrices:-\n";

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            cout << sub[c][d] << "\t";

        cout << endl;
    }

    return 0;
}

Matrix subtraction
Enter the number of rows and columns of matrix : 3 3
Enter the elements of first matrix :
7 6 4
1 9 8
2 3 0
Enter the elements of second matrix :
2 6 4
5 6 1
2 0 9
Subtraction of entered matrices:-
5       0       0
-4      3       7
0       3       -9
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <iostream>

using namespace std;

int main()
{
    int a[10][10], trans[10][10], r, c, i, j;
    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    // Storing element of matrix entered by user in array a[][].
    cout << endl << "Enter elements of matrix: " << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << "\nEnter elements a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
    
    // Displaying the matrix a[][]
    cout << endl << "Entered Matrix: " << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << " " << a[i][j];
            if (j == c - 1)
                cout << endl << endl;
        }
    }
    // Finding transpose of matrix a[][] and storing it in array trans[][].
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            trans[j][i] = a[i][j];
        }
    }
    
    // Displaying the transpose,i.e, Displaying array trans[][].
    cout << endl << "Transpose of Matrix: " << endl;
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            cout << " " << trans[i][j];
            if (j == r - 1)
                cout << endl << endl;
        }
    }
    
    return 0;
}

Matrix transpose
Enter rows and columns of matrix: 2 3
Enter elements of matrix: 
Enter elements a11 :1
Enter elements a12 :2
Enter elements a13 :3
Enter elements a21 :4
Enter elements a22 :5
Enter elements a23 :6
Entered Matrix: 
 1 2 3

 4 5 6


Transpose of Matrix: 
 1 4

 2 5

 3 6
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;


int main()
{

    int arr1[100], arr2[100], resultarr[100], n, m, i, j, k, s;

    cout << " Merging Two Arrays";
    cout << "\n\nEnter No. of Elements in First Array : ";
    cin >> n;

    cout << "\nEnter Elements : \n";

    for (i = 1; i <= n; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter No. of Elements in Second Array : ";
    cin >> m;

    cout << "\nEnter Elements in Sorted Order : \n";

    for (i = 1; i <= m; i++)
    {
        cin >> arr2[i];
    }

    i = 1, j = 1;

    for (k = 1; k <= n + m; k++)
    {
        // Compare Elements of Array A and Array B
        if (arr1[i] < arr2[j])
        {
            resultarr[k] = arr1[i];
            i++;

            if (i > n)
            {
                goto b;
            }

        }

        else
        {
            resultarr[k] = arr2[j];
            j++;

            if (j > m)
            {
                goto a;
            }

        }
    }


    a:
    // Copy the Remaining Elements of Array A to C
    for (s = i; s <= n; s++)
    {
        k++;
        resultarr[k] = arr1[s];
    }


    b:
    // Copy the Remaining Elements of Array B to C
    for (s = j; s <= m; s++)
    {
        k++;
        resultarr[k] = arr2[s];
    }

    cout << "\n\nAfter Merging Two Arrays:\n";

    for (k = 1; k <= n + m; k++)
    {
        cout << resultarr[k] << endl;
    }
    return 0;
}

Merging Two Arrays

Enter No. of Elements in First Array : 4

Enter Elements :
7
5
8
6

Enter No. of Elements in Second Array : 4

Enter Elements in Sorted Order :
8
4
1
3


After Merging Two Arrays:
7
5
8
4
1
3
8
6
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int a[20], i, j, k, n;

    //take user input
    cout << "Enter array size : ";
    cin >> n;

    //ask for array elements
    cout << "\nEnter array " << n << " element : \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    //display array elements
    cout << "\nOriginal array Elements are : ";

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    //display new array elements and remove duplicate numbers from array
    cout << "\nNew array Element are  : ";

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if (a[j] == a[i])
            {
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }


    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;

}

Remove duplicates from Array
Enter array size : 5

Enter array 5 element :
9 7 3 6 9

Original array Elements are : 9 7 3 6 9
New array Element are  : 9 7 3 6
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <iostream>

using namespace std;


int main()
{
    int size;
    cout << "Enter How Many Elements You Want To Insert in Array : ";
    cin >> size;
    int arr[size];
    int c, searchelement;
    int flag = 0;

    cout << "\nEnter array element : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to search : ";
    cin >> searchelement;

    for (c = 0; c < size; c++)
    {
        if (arr[c] == searchelement)
        {
            cout << "Element is present at location  : " << c + 1;
            flag = 1;
            break;
        }
    }
    if (!flag)
        cout << "Element is not present in array.\n";

    return 0;
}

Search array
Enter How Many Elements You Want To Insert in Array : 6

Enter array element :
1
2
3
4
5
6
Enter the number to search : 3
Element is present at location  : 3
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int size;

    //take user input for array size
    cout << "Enter how many elements you want to insert in array : ";
    cin >> size;

    int num[size];

    //take user input for array elements
    cout << "\nEnter Array elements : \n";

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "\nElements in array : \n";

    //loop to display array items
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << "\n";
    }

    return 0;
}

Simple array
Enter how many elements you want to insert in array : 4

Enter Array elements :
1
2
3
4

Elements in array :
1
2
3
4
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int arr[10][10], i, j, size;

    cout << "Enter order of square matrix : ";
    cin >> size;

    cout << "\nEnter matrix values : \n";
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {

            cin >> arr[i][j];
        }
    }
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (arr[i][j] != -arr[j][i])
            {
                cout << "\nMatrix is not skew matrix ";
                exit(0);
            }
        }
    }
    cout << "\nMatrix is skew matrix";

    return 0;
}

Skew symmetric matrix
Enter order of square matrix : 3

Enter matrix values :
0 2 -1
-2 0 -4
1 4 0

Matrix is skew matrix
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{

    int size;
    cout << "enter size of array : ";
    cin >> size;

    int arra[size];

    int smallelement, largestelement;

    cout << "\nenter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arra[i];
    }
    largestelement = smallelement = arra[0];
    for (int i = 0; i < size; i++)
    {
        if (arra[i] > largestelement)
        {
            largestelement = arra[i];
        }
        if (arra[i] < smallelement)
        {
            smallelement = arra[i];
        }
    }
    cout << "The biggest number is " << largestelement << endl;
    cout << "The smallest number is " << smallelement << endl;

    return 0;
}

Smallest and largest number in an array
enter size of array : 10

enter array elements : 12
43
64
97
36
54
23
98
65
46
The biggest number is 98
The smallest number is 12
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <vector>
// for auto_ptr
#include <memory>
// for the ceil and log10 and floor functions
#include <cmath>
#include <iostream>
// for the setw function
#include <iomanip>	

using namespace std;

typedef vector<int> IntRow;
typedef vector<IntRow> IntTable;

auto_ptr<IntTable> getSpiralArray(int dimension)
{
    auto_ptr<IntTable> spiralArrayPtr(new IntTable(
            dimension, IntRow(dimension)));

    int numConcentricSquares = static_cast< int >( ceil(
            static_cast< double >( dimension ) / 2.0));

    int j;
    int sideLen = dimension;
    int currNum = 0;

    for (int i = 0; i < numConcentricSquares; i++)
    {
        // do top side
        for (j = 0; j < sideLen; j++)
            (*spiralArrayPtr)[i][i + j] = currNum++;

        // do right side
        for (j = 1; j < sideLen; j++)
            (*spiralArrayPtr)[i + j][dimension - 1 - i] = currNum++;

        // do bottom side
        for (j = sideLen - 2; j > -1; j--)
            (*spiralArrayPtr)[dimension - 1 - i][i + j] = currNum++;

        // do left side
        for (j = sideLen - 2; j > 0; j--)
            (*spiralArrayPtr)[i + j][i] = currNum++;

        sideLen -= 2;
    }

    return spiralArrayPtr;
}

void printSpiralArray(const auto_ptr<IntTable> &spiralArrayPtr)
{
    size_t dimension = spiralArrayPtr->size();

    int fieldWidth = static_cast< int >( floor(log10(
            static_cast< double >( dimension * dimension - 1 )))) + 2;

    size_t col;
    for (size_t row = 0; row < dimension; row++)
    {
        for (col = 0; col < dimension; col++)
            cout << setw(fieldWidth) << (*spiralArrayPtr)[row][col];
        cout << endl;
    }
}

int main()
{
    printSpiralArray(getSpiralArray(5));

    return 0;
}

Spiral matrix
   0   1   2   3  4
 15 16 17 18  5
 14 23 24 19  6
 13 22 21 20  7
 12 11 10   9  8
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include <stdio.h>
#include<iostream>

using namespace std;

//declaration of constant value
#define MAX 5
int top, state;

// for deletion of element from stack-POP FUNCTION

int pop(int stack[])
{
    int value;
    if (top == -1)
    {
        value = 0;
        state = 0;
    }
    else
    {
        state = 1;
        value = stack[top];
        --top;
    }
    return value;
}


// for insertion of element into stack -PUSH FUNCTION

void push(int stack[], int item)
{
    if (top == (MAX - 1))
    {
        state = 0;
    }
    else
    {
        state = 1;
        ++top;
        stack[top] = item;
    }
}

void showstack(int stack[])
{
    int i;

    cout << "\n Stack contain: ";

    if (top == -1)
    {
        cout << "empty";
    }

    else
    {
        for (i = top; i >= 0; --i)
            cout << stack[i] << "\t";
    }
    cout << "\n";
}

// main method
int main()
{
    int stack[MAX], item;
    int ch;
    top = -1;

    cout << "\nSelect one choice from following Menu : ";
    cout << "\n\n1.push item in stack";
    cout << "\n2.pop item from stack";
    cout << "\n3.Exit ";

    do
    {
        do
        {
            cout << "\n\nEnter your choice : ";
            cin >> ch;

            if (ch < 1 || ch > 3)
            {
                cout << "invalid choice";
            }
        }

        while (ch < 1 || ch > 3);

        switch (ch)
        {
            case 1:
                cout << "enter element you want to push :";
                cin >> item;
                cout << item;
                push(stack, item);

                if (state)
                {
                    cout << "\n after push operation";
                    showstack(stack);

                    if (top == (MAX - 1))
                    {
                        cout << "\n stack is full";
                    }
                }

                else
                    cout << "stack overflow";
                break;
            case 2:
                item = pop(stack);
                if (state)
                {
                    cout << "poped item is :" << item << "\n after pop operation";
                    showstack(stack);
                }

                else
                    cout << "stack underflow";
                break;

            default:
                cout << "Exit... ";

        }//close switch case
    }//close do

    while (ch != 3);

    return 0;
}

Stack using array
Select one choice from following Menu : 

1.push item in stack
2.pop item from stack
3.Exit 

Enter your choice : 1
enter element you want to push :12
12
 after push operation
 Stack contain: 12	


Enter your choice : 1
enter element you want to push :23
23
 after push operation
 Stack contain: 23	12	


Enter your choice : 1
enter element you want to push :34
34
 after push operation
 Stack contain: 34	23	12	


Enter your choice : 2
poped item is :34
 after pop operation
 Stack contain: 23	12	


Enter your choice : 3
Exit... 
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>

using namespace std;

int main()
{
    int i, Num_arr[50], sum, num;

    cout << "Enter size of array : ";
    cin >> num;

    //Reading values into Array
    cout << "\nEnter array elements : ";
    for (i = 0; i < num; i++)
    {
        cin >> Num_arr[i];
    }

    //Computation of total
    sum = 0;
    for (i = 0; i < num; i++)
    {
        sum = sum + Num_arr[i];
    }

    //Printing of total
    cout << "\nSum of array element is : " << sum;

    return 0;
}

Sum of the array elements
Enter size of array : 5

Enter array elements : 1
2
5
9
6

Sum of array element is : 23
My lesson highlights! Check it out on your phone in Programming Hub: https://goo.gl/D2iETN
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int arr[10][10], i, j, size;

    cout << "Enter size of matrix : ";
    cin >> size;


    cout << "Enter values in matrix : \n";
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                cout << "\n\nMatrix is not symmetric";

                exit(0);
            }
        }
    }
    cout << "\n\nMatrix is symmetric";

    return 0;
}

symmetric matrix
Enter size of matrix : 3
Enter values in matrix :
5 6 7
6 3 2
7 2 1


Matrix is symmetric
