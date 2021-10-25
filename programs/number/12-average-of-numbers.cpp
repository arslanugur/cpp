#include<iostream>
using namespace std;

int main()
{
    int n;
    double average(0);
    cout<<"Enter the number of values : ";
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int value;
        cin >> value;
        average += value;
    }
    average /= n;
    cout<<"Average is "<<average;
    return 0;
}

/*
Output:
Enter the number of values : 5
12
35
20
45
95
Average is 41.4
*/
  
  
