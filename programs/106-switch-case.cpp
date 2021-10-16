#include <iostream>
using namespace std;

int main ()
{
// local variable declaration:
char grade = 'B';

switch(grade)
{
case 'A' :
cout << "Excellent!" << endl;
break;
case 'B' :
cout << "Well done" << endl;
break;
case 'C' :
cout << "Average" << endl;
break;
case 'D' :
cout << "You passed" << endl;
break;
case 'E' :
cout << "Better try again" << endl;
break;
default :
cout << "Invalid grade" << endl;
}
cout << "Obtained Grade : " << grade << endl;

return 0;
}

/*
Output:
Well done
Obtained Grade : B
*/

