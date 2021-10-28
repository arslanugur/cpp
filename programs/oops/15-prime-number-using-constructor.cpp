#include<iostream>
#include<conio.h>
using namespace std;

class prime
{
    int num,k,i;

    public:prime(int x)  //declaration of constructor
    {
        num=x;
    }

    void check()
    {
        k=1;
        {
            for(i=2;i<=num/2;i++)
            {
                if(num%i==0)
                {
                    k=0;
                    break;
                }
                else
                {
                    k=1;
                }
            }

        }
    }

    void show()
    {
        if(k==1)
        {
            cout<<"\n"<<num<<" is a prime number.";
        }
        else
        {
            cout<<"\n"<<num<<" is Not a prime number.";
        }
    }
};

//declaration of main function
int main()
{

    int a;
    cout<<"Enter the Number : ";
    cin>>a;
    prime obj(a);   //calling constructor
    obj.check();
    obj.show();

}

/*
Output:
Enter the Number : 7
7 is a prime number.
*/  

