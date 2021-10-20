#include <stdio.h>
#include<iostream>
using namespace std;

//declaration of constant value
#define MAX 5
int top, state;

// for deletion of element from stack-POP FUNCTION

int pop(int stack[])
{
    int value;
    if (top == -1)
    {
        value = 0;
        state = 0;
    }
    else
    {
        state = 1;
        value = stack[top];
        --top;
    }
    return value;
}


// for insertion of element into stack -PUSH FUNCTION

void push(int stack[], int item)
{
    if (top == (MAX - 1))
    {
        state = 0;
    }
    else
    {
        state = 1;
        ++top;
        stack[top] = item;
    }
}

void showstack(int stack[])
{
    int i;

    cout << "\n Stack contain: ";

    if (top == -1)
    {
        cout << "empty";
    }

    else
    {
        for (i = top; i >= 0; --i)
            cout << stack[i] << "\t";
    }
    cout << "\n";
}

// main method
int main()
{
    int stack[MAX], item;
    int ch;
    top = -1;

    cout << "\nSelect one choice from following Menu : ";
    cout << "\n\n1.push item in stack";
    cout << "\n2.pop item from stack";
    cout << "\n3.Exit ";

    do
    {
        do
        {
            cout << "\n\nEnter your choice : ";
            cin >> ch;

            if (ch < 1 || ch > 3)
            {
                cout << "invalid choice";
            }
        }

        while (ch < 1 || ch > 3);

        switch (ch)
        {
            case 1:
                cout << "enter element you want to push :";
                cin >> item;
                cout << item;
                push(stack, item);

                if (state)
                {
                    cout << "\n after push operation";
                    showstack(stack);

                    if (top == (MAX - 1))
                    {
                        cout << "\n stack is full";
                    }
                }

                else
                    cout << "stack overflow";
                break;
            case 2:
                item = pop(stack);
                if (state)
                {
                    cout << "poped item is :" << item << "\n after pop operation";
                    showstack(stack);
                }

                else
                    cout << "stack underflow";
                break;

            default:
                cout << "Exit... ";

        }//close switch case
    }//close do

    while (ch != 3);

    return 0;
}

/*
Output:
Select one choice from following Menu : 

1.push item in stack
2.pop item from stack
3.Exit 

Enter your choice : 1
enter element you want to push :12
12
 after push operation
 Stack contain: 12	


Enter your choice : 1
enter element you want to push :23
23
 after push operation
 Stack contain: 23	12	


Enter your choice : 1
enter element you want to push :34
34
 after push operation
 Stack contain: 34	23	12	


Enter your choice : 2
poped item is :34
 after pop operation
 Stack contain: 23	12	


Enter your choice : 3
Exit... 
*/

