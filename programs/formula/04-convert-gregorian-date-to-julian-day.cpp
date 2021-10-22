#include <iostream>
using namespace std;

 long gregorian_calendar_to_jd(int y, int m, int d)
    {

	y+=8000;
	if(m<3) { y--; m+=12; }
	return (y*365) +(y/4) -(y/100) +(y/400) -1200820
              +(m*153+3)/5-92
              +d-1;

    }

int main()
{
    
    int year = 2014;
    int month = 11;
    int day = 26;

    cout<<"Day in Julian Calendar is "<<gregorian_calendar_to_jd(year,month,day)<<"\n";
    return(0);
    
}

//Output: Day in Julian Calendar is 2456988

