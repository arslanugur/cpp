#include <iostream>
using namespace std;

// function declaration:
double getAverage(int arr[], int size);

int main ()
{
// an int array with 8 ages of people
int balance[8] = {18,9,51,33,15,24,67,54};
double avg;

// pass pointer to the array as an argument.
avg = getAverage( balance, 8 ) ;

// output the returned value
cout << "Average of all ages is : " << avg << endl;

return 0;
}

double getAverage(int arr[], int size)
{
int i, sum = 0;
double avg;

for (i = 0; i < size; ++i)
{
sum += arr[i];
}

avg = double(sum) / size;

return avg;
}
/*Output: Average of all ages is : 33.875*/
 
 
