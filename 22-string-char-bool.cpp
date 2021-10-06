STRINGS
      //A string is an ordered sequence of characters, enclosed in double quotation marks.
      //It is part of the Standard Library.
      //You need to include the <string> library to use the string data type. Alternatively, you can use a library that includes the string library.
#include <string>
using namespace std;

int main() {
    string a = "Learning C++";
    return 0;
}   //output: no outputs

      //The <string> library is included in the <iostream> library, 
      //so you don't need to include <string> separately, if you already use <iostream>.

      //Example:
#include <iostream> 
using namespace std; 
int main() { // declaration variable string can multiple with separator comma 
string a = "Learning C++",b = " by myself", c ="Finally I will finish"; 
  cout<<a+b<<endl<<c; 
  return 0; } 

      //Example
#include <iostream> 
#include<string> 
using namespace std; 
int main() { 
    string a[10]={"ghh","gfgh"}; 
    cout <<a[1]<<endl; 
    cout<<a[0]<<endl; 
    cout<<a<<endl;//memory addres of a cout<<*a;//points to first element 
    return 0; 
}

      //Type in a code that includes the required header file to use string data type in the program:
#include <string>


CHARACTERS
      //A char variable holds a 1-byte integer. 
      //However, instead of interpreting the value of the char as an integer, the value of a char variable is typically interpreted as an ASCII character.

      //A character is enclosed between single quotes (such as 'a', 'b', etc).
      //For example:
char test = 'S';

      //American Standard Code for Information Interchange (ASCII) is a character-encoding scheme that is used to represent text in computers.

      //Example
#include <iostream> 
using namespace std; 
int main()
{ 
    char c; 
    cout << "Enter a character: " <<endl; 
    cin >> c; 
    cout << "ASCII Value of " << c << " is: " <<endl << int(c); 
    return 0; 
    }

      //Example
char letter= 115; 
cout << letter; // Outputs: s 
char ascii= '#' + 'U'; 
cout<< ascii // Outputs: x 
  //http://www.asciitable.com/


      //Example
#include <iostream> 
using namespace std; 
int main() { 
  char x='A'; for(int num=1; num<50; num++){ cout<< x << endl; x++; } return 0; }

      //Example
#include <iostream> 
using namespace std; 
int main() { 
      char x='A'; 
      for(int num=1; num<50; num++){ 
            cout<< x << endl; 
            x++; 
      } 
      return 0; 
} /*Output: A B C D E F .... */


      //Example
#include <iostream>
using namespace std;

int main() {
    int i;
    for(i=0;i<=15;i++)
    {
        cout<<i<<"="<<char(i)<<endl;
    }
    return 0;
}

      //to declare a 'char' variable named 'var' with 'z' as its value.
char var = 'z';               //Notice the char variable is using the 'single' quote notation.


      //Example
int main() { 
      char test; 
      cin >> test; 
      cout << test << endl; 
      getchar(); 
      getchar(); 
      return 0; 
}

      
BOOLEANS
     //Boolean variables only have two possible values: true (1) and false (0).
     //To declare a boolean variable, we use the keyword bool. 
bool online = false;
bool logged_in = true;

     //If a Boolean value is assigned to an integer, true becomes 1 and false becomes 0.
     //If an integer value is assigned to a Boolean, 0 becomes false and any value that has a non-zero value becomes true.


     //Example 1
#include <iostream> 
using namespace std; 
int main() { 
      bool a = true; 
      int d = a; 
      cout << d; 
      return 0; 
} //output of above program is: 1

      //Example 2
#include <iostream> 
using namespace std; 
int main() { 
      bool a = false; 
      int d = a; 
      cout << d; 
      return 0; 
} //output of above program is: 0

      //Example 3
#include <iostream> 
using namespace std; 
int main() { 
      int d = 123; 
      bool a = d; 
      cout << a; 
      return 0; 
} //output of above program is: 1 (it means true) 

      //Example 3
#include <iostream> 
using namespace std; 
int main() { 
      int d = 0; 
      bool a = d; 
      cout << a; 
      return 0; 
} //output of above program is: 0 (it means false)


      //Example
#include <iostream> 
using namespace std; 
int main () { 
      //bool declarations 
      bool a = true; 
      bool b = 1; 
      bool c = false; 
      bool d = 0; 
      bool e = 2.5; 
      bool f = -1; 
      //int declarations 
      int x1 = true; 
      int x2 = 1; 
      int y1 = false; 
      int y2 = 0; 
      //bool outputs 
      cout << a << endl; 
      cout << b << endl; 
      cout << c << endl; 
      cout << d << endl; 
      cout << e << endl; 
      cout << f << endl; 
      //int outputs 
      cout << x1 << endl; 
      cout << x2 << endl; 
      cout << y1 << endl; 
      cout << y2 << endll 
      } 
//bool outputs 1,1,0,0,1,1 -- int outputs 1,1,0,0


      //Example: We can make dafault bool false like bool c = 0; or bool c = false; 
int main() { 
      int a =10, b= 10; 
      bool c = 0; // 0 = false 
      if (a==b) {c=1;} 
      if (c) { 
            cout << "two above numbers are same"<< "\n";
      } 
      else { 
            cout << "two above numbers aren't same" << "\n";
      } 
      return 0; 
} //output: "two above numbers are some" If(a==b) change if(a!=b) result " two above numbers aren't same"


      //Example: to declare two variables a and b of type bool. Initialize the 'b' with true.
bool  a = false;
bool b = true;

      //Example: Is it works too? : bool a = false; bool b; b=!a;
#include <iostream>
using namespace std;
int main() {
      bool a=false;
      bool b;
      if(b=!a){cout<<"ok"<<endl;}
      else{cout<<"not ok"<<endl;};
      cout << "a=" << a << endl <<"b=" << b << endl << endl <<"questions answer!" << endl;
	return 0;
}



