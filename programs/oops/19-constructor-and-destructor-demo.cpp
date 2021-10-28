#include<iostream>
using namespace std;

//class creation
class CubeDemo
{
    //member variable and member function declaration
    public:
        int side;

        //constructor declaration
        CubeDemo()
         {
          side=8;
         }
        //destructor declaration
        ~CubeDemo()
         {
          cout<<"\nDestructor called...";
         }

};

//declaration of main method

int main()
{
    //object creation
    CubeDemo cdemoobj;
    cout<<"";
    cout << cdemoobj.side;

}

/*
Output:
8
Destructor called...
*/
  
