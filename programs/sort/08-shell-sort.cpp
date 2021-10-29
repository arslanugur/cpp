#include <iostream>
using namespace std;

//Print values
void print_ar(int ar[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

//Shell sort function
void shell_sort(int ar[], int size)
{
    int j;

    //Narrow the array by 2 everytime
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; ++i)
        {
            int temp = ar[i];
            for (j = i; j >= gap && temp < ar[j - gap]; j -= gap)
            {
                ar[j] = ar[j - gap];
            }
            ar[j] = temp;
        }
    }
}

int main()
{
    int ar[] = {1, 4, 16, 30, 29, 18, 100, 2, 43, 1};

    cout << "Intial Array : ";
    print_ar(ar, 10);

    shell_sort(ar, 10);

    cout << "Sorted Array : ";
    print_ar(ar, 10);

    return 0;
}

/*
Output:
Intial Array : 1 4 16 30 29 18 100 2 43 1 
Sorted Array : 1 1 2 4 16 18 29 30 43 100 
*/

