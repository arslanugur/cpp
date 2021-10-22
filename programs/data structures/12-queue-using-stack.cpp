#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void create();

int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;

int main()
{
    int ch;

    cout<<"1-enter element into queue ";
    // printf("\n2 - Dequeu element from queue");
    cout<<"\n2-display elements ";
    cout<<"\n3-exit from execution";
    create();
    while (1)
    {
        cout<<"\n\nenter your choice :";
        cin>>ch;

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            cout<<"wrong choice";
        }
    }
}

/*Function to create a queue*/
void create()
{
    top1 = top2 = -1;
}

/*Function to push the element on to the stack*/
void push1(int data)
{
    st1[++top1] = data;
}

/*Function to pop the element from the stack*/
int pop1()
{
    return(st1[top1--]);
}

/*Function to push an element on to stack*/
void push2(int data)
{
    st2[++top2] = data;
}

/*Function to pop an element from the stack*/

int pop2()
{
    return(st2[top2--]);
}

/*Function to add an element into the queue using stack*/
void enqueue()
{
    int data, i;

    cout<<"enter data into queue :";
    cin>>data;
    push1(data);
    count++;
}

/*Function to display the elements in the stack*/

void display()
{
    int i;

    for (i = 0;i <= top1;i++)
    {
        cout<<st1[i]<<"\t";

    }
}

/*
Output:
1-enter element into queue
2-display elements
3-exit from execution

enter your choice :1
enter data into queue :4


enter your choice :1
enter data into queue :2


enter your choice :1
enter data into queue :5


enter your choice :2
4       2       5

enter your choice :3
*/

