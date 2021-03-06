#include <iostream>

using namespace std;

void max_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j + 1] > a[j])
            j = j + 1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j / 2] = temp;
    return;
}

void heapsort(int *a, int n)
{
    int i, temp;
    for (i = n; i >= 2; i--)
    {
        temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        max_heapify(a, 1, i - 1);
    }
}

void build_maxheap(int *a, int n)
{
    int i;
    for (i = n / 2; i >= 1; i--)
    {
        max_heapify(a, i, n);
    }
}

int main()
{
    int n, i, x;
    cout << "Enter no of elements of array : ";
    cin >> n;
    int a[20];
    for (i = 1; i <= n; i++)
    {
        cout << "Enter element " << (i) << " : ";
        cin >> a[i];
    }
    build_maxheap(a, n);
    heapsort(a, n);
    cout << "Heap Sort Output" << endl;
    for (i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

/*
Output:
Enter no of elements of array : 5
Enter element 1 : 6
Enter element 2 : 2
Enter element 3 : 1
Enter element 4 : 8
Enter element 5 : 3
Heap Sort Output
1
2
3
6
8
*/

