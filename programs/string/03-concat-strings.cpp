#include <iostream>
#include <string>
using namespace std;

int main ()
{
   string str1 = "Programming";
   string str2 = "Hub";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total lenghth of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

   return 0;
}

/*
Output:
str3 : Programming
str1 + str2 : ProgrammingHub
str3.size() :  14
*/
  
  
