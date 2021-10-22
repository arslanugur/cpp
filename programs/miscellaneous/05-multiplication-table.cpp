#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter number to find multiplication table : ";
    cin>>num;

    for(int a=1;a<=10;a++)
        cout<<num<<" * "<<a<<" = "<<num*a<<endl;

    return 0;
}

/*
Output:
Enter number to find multiplication table : 19
19 * 1 = 19
19 * 2 = 38
19 * 3 = 57
19 * 4 = 76
19 * 5 = 95
19 * 6 = 114
19 * 7 = 133
19 * 8 = 152
19 * 9 = 171
19 * 10 = 190
*/

