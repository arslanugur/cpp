#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //variable declaration
    char str[150];
    int i,vowel,cons,ch,digit,space,o;
    o=vowel=cons=ch=digit=space=0;

    //take input from user
    cout << "Enter a string : " << endl;
    cin.getline(str, 150);

    //logic for checking vowels,consonants,digit and blank spaces
    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'
           || str[i]=='O'|| str[i]=='U')
        {
            ++vowel;
        }
        else if((str[i]>='a'&& str[i]<='z')|| (str[i]>='A'&& str[i]<='Z'))
        {
            ++cons;
        }

        else if(str[i]>='0'&&cons<='9')
        {
            ++digit;
        }
        else if (str[i]==' ')
        {
            ++space;
        }

    }

    //display output
    cout << "\nNumbers of Vowels : " << vowel << endl;
    cout << "Numbers of Consonants : " << cons << endl;
    cout << "Numbers of Digits : " << digit << endl;
    cout << "Numbers of White Spaces : " << space << endl;

    return 0;
}

/*
Output:
Enter a string :
i love programming very much

Numbers of Vowels : 8
Numbers of Consonants : 16
Numbers of Digits : 0
Numbers of White Spaces : 4
*/

