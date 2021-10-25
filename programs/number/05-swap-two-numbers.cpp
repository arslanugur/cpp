#include<iostream>
using namespace std;

int main()

{

int var1, var2, swap;

 cout<<"Enter value for first integer:  ";
 cin>>var1;
 cout<<"Enter value for second integer:  ";
 cin>>var2;
 cout<<"\nValues Before swapping:  \n"<<endl;
 cout<<"First Integer ="<<var1<<endl;
 cout<<"Second Interger ="<<var2<<endl;
              swap=var1;
              var1=var2;
              var2=swap;
 cout<<"\nValues After swapping:  \n"<<endl;
 cout<<"First Integer ="<<var1<<endl;
 cout<<"Second Interger ="<<var2<<endl;
 return 0;
}


/*
Output:
Enter value for first integer:  4
Enter value for second integer:  5

Values Before swapping:

First Integer =4
Second Interger =5

Values After swapping:

First Integer =5
Second Interger =4
*/

