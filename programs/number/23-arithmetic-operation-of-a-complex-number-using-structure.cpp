#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
struct complex
{
 float rel;
 float img;
}s1,s2;

int main()
{

 float a,b;
 cout<<"Enter real and imaginary part of 1st complex number:";
 cin>>s1.rel>>s1.img;
 cout<<"Enter real and imaginary part of 2nd complex number:";
 cin>>s2.rel>>s2.img;

  //Addition
 a=(s1.rel)+(s2.rel);
 b=(s1.img)+(s2.img);
 cout<<"\nAddition: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

  //Subtraction
 a=(s1.rel)-(s2.rel);
 b=(s1.img)-(s2.img);
 cout<<"\nSubtraction: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

  //Multiplication
 a=((s1.rel)*(s2.rel))-((s1.img)*(s2.img));
 b=((s1.rel)*(s2.img))+((s2.rel)*(s1.img));
 cout<<"\nMultiplication: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

  //Division
 a=(((s1.rel)*(s2.rel))+((s1.img)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
 b=(((s2.rel)*(s1.img))-((s1.rel)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
 cout<<"\nDivision: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";
 return 0;
}

/*
Output:
Enter real and imaginary part of 1st complex number:4 2
Enter real and imaginary part of 2nd complex number:3 -1

Addition: (7)+(1)i
Subtraction: (1)+(3)i
Multiplication: (14)+(2)i
Division: (1)+(1)i
*/

