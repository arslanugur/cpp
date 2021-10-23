#include <iostream>
#include <ctime>
using namespace std;

int main( )
{
   // current date/time based on your system
   time_t nowuptime = time(0);

   // convert current time  to string format
   char* date = ctime(&nowuptime);


   //print the value
   cout << "The localhost date and time is : " <<"\n";
   cout<<date << endl;

}

/*
Output:
The localhost date and time is:
Fri Jan 22 13:11:30 2016
*/

