//program to show how method overloading works
# include<iostream>
using namespace std;

//area method with one parameter
int area(int side)
{
	return side*side;
}

//area method with two parameter
int area(int l , int b)
{
	return l*b;
}

int main()
{

	int (*para1)(int);
	int (*para2)(int,int);

	para1=area;
	para2=area;

	cout<<"Address of area(int) : "<<(unsigned int)para1<<endl;
	cout<<"Address of area(int,int) : "<<(unsigned int)para2<<endl;

	cout<<"Invoking area(int) via para1 : "<<para1(20)<<endl;
	cout<<"Invoking area(int,int) via para2 : "<<para2(10,20);
}

/*
Output:
Address of area(int) : 4199232
Address of area(int,int) : 4199244
Invoking area(int) via para1 : 400
Invoking area(int,int) via para2 : 200
*/
  
  
