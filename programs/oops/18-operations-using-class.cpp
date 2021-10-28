#include <iostream>
using namespace std;

//define class
class operations
{
    //member variables
    public:
        int num1,num2;

    //member function or methods
    public:
       void add()
       {
           cout<<"enter two number for addition : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1+num2;
           cout<<"\n";
       }

        void sub()
       {
           cout<<"enter two number for subtraction : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1-num2;
           cout<<"\n";
       }

        void mul()
       {
           cout<<"enter two number for multiplication : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1*num2;
           cout<<"\n";
       }

        void div()
       {
           cout<<"enter two number for division : ";
           cin>>num1>>num2;
           cout<<"addition = "<<(float)num1/num2;
           cout<<"\n";
       }
};
 int main()
 {
     //creation of object
      operations op1;
      op1.add();
      op1.sub();
      op1.mul();
      op1.div();
      return 0;
 }

/*
Output:
enter two number for addition : 1   2
addition = 3
enter two number for subtraction : 5  2
addition = 3
enter two number for multiplication : 4  6
addition = 24
enter two number for division : 6  8
addition = 0.75
*/
  
  
