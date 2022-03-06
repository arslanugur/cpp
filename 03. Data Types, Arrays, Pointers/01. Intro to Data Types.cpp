Data Types
      //The operating system allocates memory 
      //                 and selects what will be stored in the reserved memory based on the variable's data type.
      //The data type defines the proper use of an identifier, what kind of data can be stored, and which types of operations can be performed.
      //There are a number of built-in types in C++. 
      
      //The difference between variable and identifier 
      //that is the identifier represent a name of a variable, 
      //In another way each variable has a name, type and scope. 
      //The name of this variable called identifier. 
      //Example: int number = 11; We declare a variable with name (identifier) number, with type int and value 11
      
      /*Four types of data types in C++. 
        1.Basic data types: int, float, char, double etc. 
        2.Derived Data types: array, pointers etc. 
        3.Enumeration Data type:enum 
        4.User defined data type: struct */
        
        //https://www.geeksforgeeks.org/c-data-types/
        //https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm
        
Expressions
      //The examples below show legal and illegal C++ expressions.        
55+15 //  legal C++ expression
//Both operands of the + operator are integers

55 + "John" // illegal
// The + operator is not defined for integer and string

      //string + string // legal 
      //int + int // legal 
      //string + int // illegal
      
      //You can implement some logic for illegal expressions by overloading operators. 
      

Numeric Data Types
      //Numeric data types include:
      //Integers (whole numbers), such as -7, 42.
      //Floating point numbers, such as 3.14, -42.67.   

      //https://stackoverflow.com/questions/2386772/what-is-the-difference-between-float-and-double
      //https://www.geeksforgeeks.org/difference-float-double-c-cpp/
      
      
Strings & Characters
      //A string is composed of numbers, characters, or symbols. 
      //String literals are placed in double quotation marks; some examples are "Hello", "My name is David", and similar.

      //Characters are single letters or symbols like, and must be enclosed between single quotes, like 'a', 'b', etc.
      //In C++, single quotation marks indicate a character; double quotes create a string literal. 
      //While 'a' is a single a character literal, "a" is a string literal.
        
        
Booleans
      //The Boolean data type returns just two possible values: true (1) and false (0).
      //Conditional expressions are an example of Boolean data type.
        
      //Example: 
using namespace std; 
int main() 
{ 
    int a =10, b= 10; 
    bool c ; 
    if (a==b) 
    c=true; 
    else c=false; 
    if (c) 
    cout << "two above numbers are same"<< "\n"; //output
    else 
    cout << "two above numbers aren't same" << "\n"; 
    return 0; 
    }  
        
        
      /*Summary of Keywords 
        Integer ---> int a = 10; 
        Character ---> char a = 'z'; 
        Boolean ---> bool a = true; 
        Floating Point ---> float a = 9,1; 
        Double Floating Point ---> double a = 3,14; 
        Void ----> void a; 
        Wide Character ----> wchar_t a;
        */

        

