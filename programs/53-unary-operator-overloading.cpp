#include <iostream>
using namespace std;

class Distance
{
private:
int feet; // 0 to infinite
int inches; // 0 to 12
public:
// required constructors
Distance(){
feet = 0;
inches = 0;
}
Distance(int f, int i){
feet = f;
inches = i;
}
// method to display distance
void displayDistance()
{
cout << "F: " << feet << " I:" << inches <<endl;
}
// overloaded minus (-) operator
Distance operator- ()
{
feet = -feet;
inches = -inches;
return Distance(feet, inches);
}
};
int main()
{
Distance D1(4,7), D2(-5, 3),D3(10,-2);

-D1; // apply negation
D1.displayDistance(); // display D1

-D2; // apply negation
D2.displayDistance(); // display D2

-D3; // apply negation
D3.displayDistance(); // display D3

return 0;
}

/*
Output:
F: -4 I: -7
F: 5 I: -3
F: -10 I: 2
*/
