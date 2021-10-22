#include <iostream>
using namespace std;
int main()
{
int amount, rate, time, ans;

cout<<"\nEnter Principal Amount :";
cin>>amount;

cout<<"\nEnter Rate of Interest :";
cin>>rate;

cout<<"\nEnter Period of Time :";
cin>>time;

ans = (amount * rate * time)/100;
/Simple interest formula/
cout<<"\nSimple Interest :"<<ans;
}

/*
Output:
Enter Principal Amount :1000                                                         
Enter Rate of Interest :10                                                            
Enter Period of Time :3                                                                                 
Simple Interest :300
*/

