#include <iostream>
using namespace std;
int main()
{
int marks;
cout<<"Enter your marks :";
cin>>marks;

if(marks>100)
/marks greater than 100/
cout<<"Not valid marks";

else if(marks>=80)
/marks between 80 & 99/
cout<<"your grade is A";

else if(marks >=70)
/marks between 70 & 79/
cout<<"your grade is B";

else if(marks>=50)
/marks between 50 & 69/
cout<<"your grade is C";

else if(marks>=35)
/marks between 35 & 49/
cout<<"your grade is D";

else
/marks less than 35/
cout<<"your grade is E";
}
/*Output:Enter your marks :98
         your grade is A*/

