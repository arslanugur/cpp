#include<iostream>
using namespace std;

// Creating a NODE Structure
struct node {
int data;
struct node *next;
};

// Creating a class STACK
class stack {
struct node *top;
public: stack() // constructor {
top=NULL; }

void push();
// to insert an element
void pop(); // to delete an element

void show(); // to show the stack };
// PUSH Operation void stack::push() {

int value;
struct node *ptr;
cout<<"\nPUSH Operationn";
cout<<"Enter a number to insert: ";
cin>>value;
ptr=new node;
ptr->data=value;
ptr->next=NULL;
if(top!=NULL) ptr->next=top;
top=ptr;
cout<<"\nNew item is inserted to the stack!!!";
}

// POP Operation
void stack::pop() {
struct node *temp;
if(top==NULL) {
cout<<"\nThe stack is empty!!!"; }
temp=top; top=top->next;
cout<<"\nPOP Operation........\nPoped value is "<<temp->data;
delete temp;
}

// Show stack
void stack::show() {
struct node *ptr1=top;
cout<<"\nThe stack is\n";
while(ptr1!=NULL) {
cout<<ptr1->data<<" ->";
ptr1=ptr1->next;
}
cout<<"NULL\n";
}

// Main function
int main() {
stack s;
int choice;
while(1) {
cout<<"\n---"; 
  cout<<"\n\t\tSTACK USING LINKED LIST\n\n"; 
  cout<<"1:PUSH\n2:POP\n3:DISPLAY STACK\n4:EXIT";

cout<<"\nEnter your choice(1-4): ";
cin>>choice;
switch(choice) {
case 1: s.push(); break;
case 2: s.pop(); break;
case 3: s.show(); break;
case 4: return 0;
break;
default: cout<<"\nPlease enter correct choice(1-4)!!";
break;
}
}
return 0;
}

/*
Output:
STACK USING LINKED LIST 1:PUSH 2:POP 3:DISPLAY STACK 4:EXIT 
Enter your choice(1-4): 1 PUSH Operation Enter a number to insert: 12 New item is inserted to the stack!!!
STACK USING LINKED LIST 1:PUSH 2:POP 3:DISPLAY STACK 4:EXIT 
Enter your choice(1-4): 1 PUSH Operation Enter a number to insert: 5 New item is inserted to the stack!!! 
STACK USING LINKED LIST 1:PUSH 2:POP 3:DISPLAY STACK 4:EXIT 
Enter your choice(1-4): 2 POP Operation........ Poped value is 5 
STACK USING LINKED LIST 1:PUSH 2:POP 3:DISPLAY STACK 4:EXIT 
Enter your choice(1-4): 3 The stack is 12 ->NULL
STACK USING LINKED LIST 1:PUSH 2:POP 3:DISPLAY STACK 4:EXIT 
Enter your choice(1-4): 4
*/

