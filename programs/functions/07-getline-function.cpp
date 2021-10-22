#include<iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!\n";

    return 0;
}

/*
Output:
Enter your full name: Creative Hub
Hello, Creative Hub!
*/

