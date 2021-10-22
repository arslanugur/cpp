#include <iostream>
#include <string>
using namespace std;

template<typename T>
inline T const &Max(T const &val1, T const &val2)
{
    return val1 < val2 ? val2 : val1;
}

int main()
{

    int num1 = 9;
    int num2 = 210;
    cout << "Max(num1, num2): " << Max(num1, num2) << endl;

    double dbl1 = 1.5;
    double dbl2 = 210.87;
    cout << "Max(dbl1, dbl2): " << Max(dbl1, dbl2) << endl;

    string str1 = "Hey";
    string str2 = "maximum here";
    cout << "Max(str1, str2): " << Max(str1, str2) << endl;

    return 0;
}

/*
Output:
Max(num1, num2): 210
Max(dbl1, dbl2): 210.87
Max(str1, str2): maximum here
*/

