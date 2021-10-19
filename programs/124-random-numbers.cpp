#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
int c, n;

/rand() is used to get random numbers/

cout<<"Ten random numbers in 1 to 100\n";

for (c = 1; c <= 10; c++) {
n = rand()%100 + 1;
/*rand()%100 gives random value in between 0 to 99 */
cout<<n<<"\n";
}

return 0;
}

/*
Output:
Ten random numbers in 1 to 100                                                     
84                                                                                 
87                                                                                 
78                                                                                 
16                                                                                 
94                                                                                 
36                                                                                 
87                                                                                 
93                                                                                 
50                                                                                 
22
*/

