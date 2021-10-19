#include <iostream>
#include <cstring>

using namespace std;

struct Student
{
char name[50];
char college[50];
char address[100];
int student_id;
};

int main( )
{
struct Student student1; // Declare student1 of type Student
struct Student student2; // Declare student2 of type Student
struct Student student3; // Declare student3 of type Student

// Student 1 specification
strcpy( student1.name, "A. B. C.");
strcpy( student1.college, "VJTI");
strcpy( student1.address, "Dadar");
student1.student_id = 200043;

// student 2 specification
strcpy( student2.name, "D. E. F. ");
strcpy( student2.college, "SPIT");
strcpy( student2.address, "Mahim");
student2.student_id = 200034;

// student 3 specification
strcpy( student3.name, "P. Q. R. ");
strcpy( student3.college, "VIT");
strcpy( student3.address, "Andheri");
student2.student_id = 200061;

// Print student1 info
cout << "Student 1 name : " << student1.name <<endl;
cout << "Student 1 college : " << student1.college <<endl;
cout << "Student 1 address : " << student1.address <<endl;
cout << "Student 1 id : " << student1.student_id <<endl;

cout <<"\n\n";
// Print Student2 info
cout << "Student 2 name : " << student2.name <<endl;
cout << "Student 2 college : " << student2.college <<endl;
cout << "Student 2 address : " << student2.address <<endl;
cout << "Student 2 id : " << student2.student_id <<endl;

cout <<"\n\n";
// Print Student3 info
cout << "Student 3 name : " << student3.name <<endl;
cout << "Student 3 college : " << student3.college <<endl;
cout << "Student 3 address : " << student3.address <<endl;
cout << "Student 3 id : " << student3.student_id <<endl;
return 0;
}

/*
Output:
Student 1 name : Malik
Student 1 college :matrusri
Student 1 address : santosh nagar
Student 1  id : 089
Student 2 name : aayush
Student 2 college :matrusri
Student 2 address : santosh nagar
Student 2 id : 062
Student 3 name : chetan
Student 3 college :matrusri
Student 3 address : santosh nagar
Student 3  id : 098
*/

