#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    string tmp = "C Plus Plus";

    cout<<"String : "<<tmp<<endl;

    cout<<"Converting string to char array : ";

    char charArray[1024];
    strncpy(charArray, tmp.c_str(), sizeof(charArray));
    charArray[sizeof(charArray) - 1] = 0;

    for(int i = 0;charArray[i]!=0;i++)
    {
        cout<<endl<<"charArray["<<i<<"] :\t"<<charArray[i];
    }

    return 0;
}

/*
Output:
String : C Plus Plus
Converting string to char array :
charArray[0] :  C
charArray[1] :
charArray[2] :  P
charArray[3] :  l
charArray[4] :  u
charArray[5] :  s
charArray[6] :
charArray[7] :  P
charArray[8] :  l
charArray[9] :  u
charArray[10] : s
*/

