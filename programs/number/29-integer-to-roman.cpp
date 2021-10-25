//C++ Program to Convert Integer to Roman Numeral

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //variable declaration
	int Number,j,m,d,c,l,x,ix,v,iv,i;

	//take user input
	cout << " Enter an Integer Number : ";
	cin >> Number;

	if (Number <= 0)
	{
		cout << " Invalid number." << endl;
		cout << " Press enter to continue..." << endl;
		cin.ignore();
		cin.get();
		return 0;
	}

	m = Number / 1000;
	Number = Number % 1000;

	d = Number / 500;
	Number = Number % 500;

	c = Number / 100;
	Number = Number % 100;

	l = Number / 50;
	Number = Number % 50;

	x = Number / 10;
	Number = Number % 10;

	ix = Number / 9;
	Number = Number % 9;

	v = Number / 5;
	Number = Number % 5;

	iv = Number / 4;
	Number = Number % 4;

	i = Number;

	cout << " Roman Numeral = ";
	for (j = 1; j <= m; j++)
		cout << "M";

	for (j = 1; j <= d; j++)
		cout << "D";

	for (j = 1; j <= c; j++)
		cout << "C";

	for (j = 1; j <= l; j++)
		cout << "L";

	for (j = 1; j <= x; j++)
		cout << "X";

	for (j = 1; j <= ix; j++)
		cout << "IX";

	for (j = 1; j <= v; j++)
		cout << "V";

	for (j = 1; j <= iv; j++)
		cout << "IV";

	for (j = 1; j <= i; j++)
		cout << "I";

	cout << endl;

	cout << " Press enter to continue..." << endl;
	cin.ignore();
	cin.get();
	return 0;
}

/*
Output:
 Enter an Integer Number : 32
 Roman Numeral = XXXII
*/
 
   
