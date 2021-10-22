#include<iostream>
using namespace std;

int main()
{
    //variable declaration
    float meter, cmeter, kmeter;

    //user input
    cout << "\nEnter length in centimeters : ";
    cin >> cmeter;


    // Convert centimeter into meter and kilometer

    meter = cmeter / 100.0;
    kmeter = cmeter / 100000.0;

    //display converted values

    cout << "\nLength in Meter : ";
    cout << meter;

    cout << "\nLength in Kilometer : ";
    cout << kmeter;

    cout << endl;

    return 0;
}

/*
Output:
Enter length in centimeter : 100

Length in Meter : 1
Length in Kilometer : 0.001
*/

