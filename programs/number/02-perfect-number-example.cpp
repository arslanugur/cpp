#include<iostream>
#include<conio.h>
using namespace std;

int main()                 //Start of main
{

   int i=1, u=1, sum=0;
   while(i<=500)
 {                                  // start of first loop.

   while(u<=500)
   {                               //start of second loop.
     if(u<i)
     {
      if(i%u==0 )
      sum=sum+u;
     }                          //End of if statement

     u++;
   }                           //End of second loop

   if(sum==i)
   {
    cout<<i<<" is a perfect number."<<"\n";
   }

   i++;
   u=1;  sum=0;
 }                             //End of First loop
   getch();
 }


/*
Output:
6 is a perfect number.
28 is a perfect number.
496 is a perfect number.
*/

