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

/*Output:
enter array size : 4
enter elements in to array :
1 2 3 4

array before swaping elements :
1 2 3 4
array after swapping elements :
2 1 4 3*/

