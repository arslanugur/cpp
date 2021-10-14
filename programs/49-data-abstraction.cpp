#include <iostream>
using namespace std;

class Account{
public:
// constructor
Account(int i = 0)
{
total = i;
}
// Connected with others
void Deposit(int number)
{
total += number;
}
// Connected with others
void Withdraw(int number)
{
total -= number;
}
// Connected with others
int getBalance()
{
return total;
};
private:
// hidden data from Others
int total;
};
int main( )
{
Account a;

a.Deposit(30);
a.Withdraw(20);
a.Deposit(10);
a.Deposit(10);
a.Withdraw(20);

cout << "Balance : " << a.getBalance() <<endl;
return 0;
}

/*
Output:
Balance : 10
*/

