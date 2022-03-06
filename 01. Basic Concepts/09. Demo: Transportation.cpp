Transportation
      /*
      A program for a bus service.
      A bus can transport 50 passengers at once.
      Given the number of passengers waiting in the bus station as input, 
      you need to calculate and output how many empty seats the last bus will have.

      Sample Input: 126, Sample Output:24 //input: people in the station
      Sample Input:  12, Sample Output:38 //output: empty seats for the last bus 
      Sample Input: 231, Sample Output:19
      
      Explanation: 
      The first bus will transport 50 passengers, leaving 126-50=76 in the station. 
      The next one will leave 26 in the station, 
      thus, the last bus will take all of the 26 passengers, having 50-26=24 seats left empty. 
      */
      
      //Hint: The modulo operator % can help to determine the number of passengers for the last bus.
      
      //Code:
#include <iostream>
using namespace std;

int main() {
    int b,x,y;
    cin >> x;     //input --> the number of passengers waiting in the bus station
    b = x % 50;     
    y = 50 - b;     //seats left empty --> y
    cout << y;      //output
    return 0;
}

      //Code Two:
#include <iostream>
using namespace std;

int main() {
    int people,seats=50,empty=0;
    cin>>people ;
    if(people >50)
    {
      empty =people%seats;
      seats =seats-empty;
    }
    else
    {
      seats=seats-people;
    }
    cout <<seats;
    
    
    return 0;
}






