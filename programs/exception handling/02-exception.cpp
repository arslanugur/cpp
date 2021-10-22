//program to show how exception handling work

#include <iostream>
using namespace std;

//method definition
double divisionby(int num1, int num2)
{
    if( num2 == 0 )
    {
        throw "Division by zero condition!";
    }
    cout<<"answer = ";
    return (num1/num2);
}

int main ()
{
    //variable declaration
    int n1,n2;

    //take user input
    cout<<"enter two numbers for division operation  :  ";
    cin>>n1>>n2;
    double n3 = 0;

    //try catch to handle run time error
    try
    {
        n3 = divisionby(n1, n2);
        cout << n3 << endl;
    }
    catch (const char* msg)
    {
        //it will display error msg
        cout << msg << endl;
    }

   return 0;
}

/*
Output:
enter two numbers for division operation  :  3 5
answer = 0
*/

