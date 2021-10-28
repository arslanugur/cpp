//using setprecision manipulator
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main ()
 {
    float  num1,num2,result;
    num1=20;
    num2=3;
    result=num1/num2;

    //use while displaying a floating point value
    cout << setprecision (1) << result << endl;
    cout << setprecision (2) << result << endl;
    cout << setprecision (3) << result << endl;
    cout << setprecision (4) << result << endl;

}

/*
Output:
7
6.7
6.67
6.667
*/

