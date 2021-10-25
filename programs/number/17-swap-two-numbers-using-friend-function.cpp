#include<iostream>
using namespace std;

class Sample
{
   private:
       int x,y;
   public:
       void setdata(int a,int b)
       {
          x=a;
          y=b;
       }
       void showdata()
       {
          cout<<"x="<<x<<"\ny="<<y;
       }

    friend void swap(Sample &s);
};

void swap(Sample &s)
{
    int temp;
    temp=s.x;
    s.x=s.y;
    s.y=temp;
}

int main()
{
    Sample s;
    int x,y;

    cout<<"Enter x = ";
    cin>>x;
    cout<<"Enter y = ";
    cin>>y;

    s.setdata(x,y);

    cout<<"\nBefore Swapping\n";
    s.showdata();
    cout<<"\nAfter Swapping\n";
    swap(s);
    s.showdata();

    return 0;
}

/*
Output:
Enter x = 15
Enter y = 5

Before Swapping
x=15
y=5
After Swapping
x=5
y=15
*/
  
  
