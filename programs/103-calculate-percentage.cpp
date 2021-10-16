#include <iostream>
using namespace std;
int main()
{
int s1, s2, s3, s4, s5, sum, total = 500;
float per;
cout<<"\nEnter marks of 5 subjects :";
cin>>s1>>s2>>s3>>s4>>s5;

sum = s1 + s2 + s3 + s4 + s5;
cout<<"\nSum :"<<sum;

per = (sum * 100)/500;
/* percentage formula*/
cout<<"\nPercentage :"<<per;
}

/*
Output:
Enter marks of 5 subjects :59                                                      
23 57 89 90                                                                        
                                                                                   
Sum :318                                                                           
Percentage :63
*/

