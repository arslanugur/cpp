#include <iostream>
using namespace std;

int main()
{
    double length;
    double width;
    double height;
    double volume;

    cout << "Please Enter a Length for your box: ";
    cin >> length;

    cout << "\nPlease Enter a Width for your box: ";
    cin >> width;

    cout << "\nPlease Enter a Height for your box: ";
    cin >> height;


    volume = length * width * height;
    cout << "\n\nThe Volume of your box is: " << volume << endl;

    return 0;
}


/*
Output:
Please Enter a Length for your box:2
Please Enter a Width for your box:3
Please Enter a Height for your box:4
The Volume of your box is:24
*/

