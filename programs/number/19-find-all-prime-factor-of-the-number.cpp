# include <iostream>
# include <math.h>
using namespace std;

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        cout<<"2 ";
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            cout<<i<<" ";
            n = n/i;
        }
    }

    if (n > 2)
    {
        cout<<n;
    }
}

int main()
{
    int n;
    cout<<"Enter number to find all prime factor : ";
    cin>>n;
    cout<<"Prime factors are : ";
    primeFactors(n);
    return 0;
}

/*
Output:
Enter number to find all prime factor : 55
Prime factors are : 5 11
*/
  
