#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
    float a, b, c, x1, x2, determinant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    determinant = b*b - 4*a*c;

    if(a==0)
    {
      cout<<" 'a'can not be zero";
    }
    else
    {
        if (determinant > 0)
         {
            x1 = (-b + sqrt(determinant)) / (2*a);
            x2 = (-b - sqrt(determinant)) / (2*a);
            cout << "Roots are real and different." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
         }
        else if (determinant == 0)
         {
            cout << "Roots are real and same." << endl;
            x1 = (-b + sqrt(determinant)) / (2*a);
            cout << "x1 = x2 =" << x1 << endl;
         }
        else 
        {
            realPart = -b/(2*a);
            imaginaryPart =sqrt(-determinant)/(2*a);
            cout << "Roots are complex and different."  << endl;
            cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        }
    return 0;
    }
}

/*
Output:
Enter coefficients a, b and c: 4 2 3
Roots are complex and different.
x1 = -0.25+0.829156i
x2 = -0.25-0.829156i
*/

