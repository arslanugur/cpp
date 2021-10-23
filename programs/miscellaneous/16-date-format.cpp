// Display the current date in the formats of "2007-11-10"
// and "Sunday, November 10, 2007".

#include <vector>
#include <string>
#include <iostream>
#include <ctime>

class Date
{
	struct tm ltime;

	public:
	
	/// Default constructor.
	Date()
	{
		time_t t = time(0);
		localtime_r(&t, &ltime);
	}

	std::string getDate(const char* fmt)
	{
		char out[200];
		size_t result = strftime(out, sizeof out, fmt, &ltime);
		return std::string(out, out + result);
	}

	std::string getISODate() {return getDate("%F");}

	std::string getTextDate() {return getDate("%A, %B %d, %Y");}
};

int main()
{
	Date d;
	std::cout << d.getISODate() << std::endl;
	std::cout << d.getTextDate() << std::endl;
	return 0;
}

/*
Output:
2016-03-16
Wednesday, March 16, 2016
*/

