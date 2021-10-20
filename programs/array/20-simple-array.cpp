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

/*
Output:
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
*/

