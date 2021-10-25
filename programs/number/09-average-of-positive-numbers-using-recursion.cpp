#include <iostream>
using namespace std;

void recurse (float sum, int i ) // Each call gets its own count
{
    int num = 0;

    cout<<"Enter another positive integer: ";
    cin>>num;

    if(num < 0){

        cout<<"ERROR\n";
        recurse (sum, i ); //First function call, so it starts at one

    }
     else if(num == 0){

        if(sum == 0){
            cout<<"NO AVERAGE";
        }
        else {
            cout<<"\nThe Average of Positive Integers is "<<(sum/i)<<"\n";
        }

    }
    else {

        sum = sum + num;
        i++;
        recurse (sum, i );
    }
}

int main()
{

    float num;
    float sum = 0;
    int i = 0;

    cout<<"Enter a positive integer: ";
    cin>>num;

    if(num < 0){

        cout<<"ERROR\n";
        recurse (sum, i ); //First function call, so it starts at one

    }
    else if(num == 0){

        cout<<"NO AVERAGE";

    }
    else {

        sum = sum + num;
        i++;
        recurse (sum, i );
    }


  return(0);
}

/*
Output:
Enter a positive integer: -1
ERROR
Enter another positive integer: 2
Enter another positive integer: 3
Enter another positive integer: 0

The Average of Positive Integers is 2.5
*/
  
  

  
