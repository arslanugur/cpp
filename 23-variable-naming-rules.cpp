Variable Naming Rules
      /*Use the following rules when naming variables:
        - All variable names must begin with a letter of the alphabet or an underscore( _ ).
        - After the initial letter, variable names can contain additional letters, as well as numbers. 
          Blank spaces or special characters are not allowed in variable names.*/
          
      /*There are two known naming conventions:
        - Pascal case: The first letter in the identifier 
                       and the first letter of each subsequent concatenated word are capitalized. For example: BackColor
        - Camel case: The first letter of an identifier is lowercase 
                       and the first letter of each subsequent concatenated word is capitalized. For example: backColor 
       */
       
       //https://en.m.wikipedia.org/wiki/Hungarian_notation
       
       //Example
/*
INPUT: Enter any variable name .

OUTPUT:Program will show if entered name is valid variable name in C++ or not .

Variable naming conditions in C++ are as follows :

#1. A variable name should not start with number.

#2. It should not contain special charecters eg. ;@:?.!\/%&*| etc.

#3. It should not have any white spaces .

#4. Keywords cannot be used as variable name.
*/

#include<iostream>
#include<string>
using namespace std;

bool FL(string); //checks first letter
bool SC(string); //checks special chars
bool WS(string); //checks white spaces
bool KW(string); //checks keyword

int main()
{
string vName;    
int is_val=0; 
    
cout<<"Enter the variable name\n";

getline(cin,vName);
    
cout<<"You entered: "<<vName<<"\n\n";

    
is_val+=FL(vName);
is_val+=SC(vName);
is_val+=WS(vName);
is_val+=KW(vName);
 
cout<<"***\n\n";
if(is_val==4)   
    cout<<vName<<" is a valid variable name because it satisfies all conditions of valid variable name ";
else
    cout<<vName<<" \nis an invalid variable name because it satisfies only "<<is_val<<" conditions out of 4";
    
return 0;
    
}

bool FL(string vName)
{
    if(vName[0]>=48&&vName[0]<=57) 
    {
    cout<<"#1.First character is number [Invalid]\n\n";
    return false;
    }
    else
    {
     cout<<"#1.First character is not number [Valid]\n\n";
     return true;
    }
    
}

bool SC(string vName)
{   int flag=0;
    for(int i=0;i<vName.length();i++)
     {
      if((vName[i]>=33&&vName[i]<=47)||(vName[i]>=58&&vName[i]<=64)||(vName[i]>=91&&vName[i]<=94)||vName[i]==96||(vName[i]>=123&&vName[i]<=126))
         {
            flag++;
         }
        
     }
    if(flag>0)
    {
    cout<<"#2.Name contains special characters [invalid]\n\n";
     return false;
    }
    else
    {
    cout<<"#2.Name does not contain special character (underscore allowed) [Valid]\n\n";
    return true;
    }
}

bool WS(string vName)
{   
    int flag=0;
    for(int i=0;i<vName.length();i++)
       {
        if(vName[i]==' ')
           {
            flag++;
           }
       }
    
    if(flag>0)
    {
      cout<<"#3.name contains white space [Invalid]\n\n";
      return false;     
    }
    else
    {
      cout<<"#3.Name does not contain white spaces [Valid]\n\n";
      return true;
    }
}

bool KW(string vName)
{
  string Keyword[]={"auto","double","int","struct","break","else","long","switch","case","enum","register","typedef","char","extern","return","union","const","float","short","unsigned","continue","for","signed","void","default","goto","signed","void","default","goto","sizeof","volatile","do","if","static","while","asm","dynamic_cast","namespace","reinterpret_cast","bool","explicit","new","static_cast","catch","false","operator","template","class","friend","private","this","const_cast","inline","public","throw","delete","mutable","protected","true","try","typeid","typename","using","virtual","wchar_t"};
    
for(int i=0;i<66;i++)
    {
        if(vName==Keyword[i])
        {
         cout<<Keyword[i]<<" is a keyword [Invalid]\n\n";
          return false;
        }
        
    }
    
          cout<<"#4 "<<vName<<" is not a keyword [Valid]\n\n";
          return true;
}



CASE-SENSITIVITY
      //C++ is case-sensitive, 
      //which means that an identifier written in uppercase is not equivalent to another one with the same name in lowercase.
      //For example, myvariable is not the same as MYVARIABLE and not the same as MyVariable.
      //These are three different variables.
      
      //Choose variable names that suggest the usage, for example: firstName, lastName.

      //It is important to know that keywords like aoto, double, int, struct etc can't be used as variable names. 
      //However we are free to use Auto, douBle, INT, StrucT etc because C++ is a case sensitive language
      
      
      //Example
 #include <iostream> 
 using namespace std; 
int main() { 
      int shadow = 1; 
      int Shadow = 2; 
      int SHADOW = 3; 
      int SHAdow = 4; 
      cout<<shadow<<endl<<Shadow<<endl; 
      cout<<SHADOW<<endl<<SHAdow; 
      return 0; 
} //output: 1 2 3 4



Variable Naming Rules
      //C++ keyword (reserved word) cannot be used as variable names.
      //For example, int, float, double, cout cannot be used as a variable name. 

      //There is no real limit on the length of the variable name (depends on the environment), 
      //but try to keep your variable names practical and meaningful.


      /*All reserved keywords means we can't have these words as variable:
      auto, break, case, char, const, continue default, do, double, else, enum, extern, 
      float, for, goto, if, int, long register, return, short, signed, sizeof, static, 
      struct, switch, typedef, union, unsigned, void volatile, while.*/
      

      //Example
#include <iostream>
int main() {
    int cout = 8; //to use cout as variable name
    std::cout << cout;
    return 0;
}
 
      //Example: to declare an int variable named var3, a double variable named salary, and a bool variable named ab_c14.
int var3;
double salary;
bool ab_c14;


      
      
