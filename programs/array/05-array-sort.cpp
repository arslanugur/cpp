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

/*Output:
array values : 132, 520, 210, 510, 140 ,125,52,96,55,85
sorted values : 52 55 85 96 125 132 140 210 510 520 */


