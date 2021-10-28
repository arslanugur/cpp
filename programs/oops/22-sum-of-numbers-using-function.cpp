//program to add N integers using function
#include<iostream>
using namespace std;

//function declaration
int add(int num);

//main method
int main()
{
    //variable declaration
    int num;

    //take input from user
    cout << "Enter a positive integer : ";
    cin >> num;

    //calling add function
    cout << "Sum of n integer is :  " << add(num);
    return 0;
}

//method definition
int add(int num)
{
    if(num!=0)
    {
        return num+add(num-1);
    }
}

/*
Output:
Enter a positive integer : 2
Sum of n integer is :  3
*/
  
  
