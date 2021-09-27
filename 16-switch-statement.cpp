SWITCH STATEMENT
Multiple Conditions
      //Sometimes there is a need to test a variable for equality against multiple values. 
      //That can be achieved using multiple if statements.
      //For example: 
#include <iostream>
using namespace std;

int main()
{
    int age = 42;
    if (age == 16) {
        cout <<"Too young";
    }
    if (age == 42) {
        cout << "Adult";
    }
    if (age == 70) {
        cout << "Senior";
    }

    return 0;
}   //output: Adult --> The switch statement is a more elegant solution in this scenario.


      //Improved Example to Above:
#include <iostream> 
using namespace std; 

int main() 
{ 
  int age; 
  cin>>age; 
  if (age <= 16) { 
    cout <<"Too young"; 
  } 
  if (age > 16) 
    if (age < 70) { 
      cout << "Adult"; 
    } 
  if (age >= 70) { 
    cout << "Senior"; 
  } 
  return 0; 
}

      //Example: to print "you can drive a car" if the variable 'age' equals 16, print "buy a lottery ticket" if the 'age' is equal to 18.
int age;
cin >> age;
if (age == 16) {
 cout << "you can drive a car" << endl;
} 
if (age == 18) {
 cout << "buy a lottery ticket" << endl;
}


https://www.sololearn.com/learning/1051/1618/2804/2



      //Example:
#include <iostream> 
using namespace std; 
int main() { 
  int d; 
  cout << "Enter you're age" << endl; 
  cin >> d; if (d>=12) { 
    if (d>=18) 
      cout << "Adult" << endl; 
    else cout << "Teenager" << endl;
  } 
  else { 
    if (d<=1) 
      cout << "Baby" << endl; 
    else { 
      if (d<=3) 
        cout << "Toddler" << endl; 
      else { 
        if (d<=5) 
          cout << "Preschooler" << endl; 
        else 
          cout << "Gradeschooler" << endl; 
      } } } 
  return 0; 
}


      //Example about Days
#include <iostream>
using namespace std;
int main() 
{
    int num;
    cin>>num;
    switch(num)

    
    {
    
        case 1:cout<<"\n Sunday"
        "\n you made this"; 
        break;
        
        
        case 2:cout<<"\n Monday"
        "\n you made this"; 
        break;
        
        
        case 3:cout<<"\n Tueday"
        "\n you made this"; 
        break;
        
        
        case 4:cout<<"\n Wednesday"
       "\n you made this"; 
        break;
        
        
        case 5:cout<<"\n Thursday"
       "\n you made this"; 
        break; 
        
          
        case 6:cout<<"\n Friday"
        "\n you made this"; 
        break;
        
        
        case 7:cout<<"\n Saturday"
        "\n you made this"; 
        break;
        
        
        default:cout<<"\n Sorry enter value between (1-7)... ";
        
                 } 
         
    return 0;   
}
