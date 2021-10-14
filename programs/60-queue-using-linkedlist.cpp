#include<iostream>
using namespace std;

struct node {
int data;
node *next;
}*front = NULL,*rear = NULL,*p = NULL,*np = NULL;

void push(int x) {
np = new node;
np->data = x;
np->next = NULL;

if(front == NULL) {
front = rear = np;
rear->next = NULL;
}

else {
rear->next = np;
rear = np;
rear->next = NULL;
}
}

int remove() {
int x;
if(front == NULL) {
cout<<"empty queuen"; }
else
{
p = front;   x = p->data;
front = front->next;
delete(p);
return(x);
}
}

int main() {
int n,c = 0,x;
cout<<"Enter the number of values to be pushed into queue";
cin>>n;
while (c < n) {
cout<<"Enter the value to be entered into queuen";
cin>>x;
push(x);
c++;
}

cout<<"Removed Values";
while(true) {
if (front != NULL)
cout<<remove()<<endl;
else break;
}
return 0;
}

/*
Output:
Enter the number of values to be pushed into queue 5
Enter the value to be entered into queue 5
Enter the value to be entered into queue 3
Enter the value to be entered into queue 2
Enter the value to be entered into queue 9
Enter the value to be entered into queue 1
Removed Values 5 3 2 9 1
*/

