#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myfunction(int i, int j)
{
    return (i < j);
}

struct myclass {
    bool operator()(int i, int j)
    { return (i < j); }
}
        myobject;

int main()
{
    int arr[] = {312, 171, 152, 435, 26, 980, 353, 334};
    vector<int> myvector(arr, arr + 8);

    sort(myvector.begin(), myvector.begin() + 4);

    // using function as comp
    sort(myvector.begin() + 4, myvector.end(), myfunction);

    // using object as comp
    sort(myvector.begin(), myvector.end(), myobject);

    // print out content:

    cout << "sorted matrix contains:";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;

    cout << '\n';

    return 0;
}

/*
Output:
sorted matrix contains: 26 152 171 312 334 353 435 980
*/

