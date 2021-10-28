//program to show how call by value works
#include<iostream>
using namespace std;

//function definition
void swap(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
    cout<<"Swapped value of a is  : "<< x<<endl;
    cout<<"Swapped value of b is : "<<y<<endl;
}

int main (int argc, char *argv[])
{
    //variable declaration
    int a ,b;

    //take user input
    cout<<"Enter Two numbers : ";
    cin>>a>>b;

    cout<<"Original values of a  and b  are : "<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;

    //call to swap function
    swap(a, b);
}

/*
Output:
Enter Two numbers : 4 5
Original values of a  and b  are :
Value of a is : 4
Value of b is : 5
Swapped value of a is  : 5
Swapped value of b is : 4
*/
  
  
