#include <iostream>
using namespace std;

class printData
{
public:
void print(int i) {
cout << "Displaying the int : " << i << endl;
}

void print(double f) {
cout << "Displaying the float : " << f << endl;
}

void print(char* c) {
cout << "Displaying the character : " << c << endl;
}
};

int main(void)
{
printData pd;


pd.print(5); // Call print to print integer

pd.print(500.263); // Call print to print float

pd.print("Hello C++"); // Call print to print character

return 0;
}

/*
Output:
Displaying the int : 5
Displaying the float : 500.263
Displaying the character : Hello C++
*/


