#include<iostream>
#include<cstdlib>

using namespace std;

struct node {
    int info;
    struct node *link;
} *top;


class stack_list {

public:
    node *push(node *, int);

    node *pop(node *);

    void traverse(node *);

    stack_list()
    {
        top = NULL;
    }
};

int main()
{
    int choice, item;
    stack_list sl;

    cout << "Operations on Stack" << endl;
    cout << "\n-------------" << endl;
    cout << "1.Push Element into the Stack" << endl;
    cout << "2.Pop Element from the Stack" << endl;
    cout << "3.Traverse the Stack" << endl;
    cout << "4.Quit" << endl;
    while (1)
    {
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter value to be pushed into the stack: ";
                cin >> item;
                top = sl.push(top, item);
                break;
            case 2:
                top = sl.pop(top);
                break;
            case 3:
                sl.traverse(top);
                break;
            case 4:
                exit(1);
            default:
                cout << "Wrong Choice" << endl;
        }
    }
}

node *stack_list::push(node *top, int item)
{
    node *tmp;
    tmp = new (struct node);
    tmp->info = item;
    tmp->link = top;
    top = tmp;
    return top;
}

node *stack_list::pop(node *top)
{
    node *tmp;
    if (top == NULL)
        cout << "Stack is Empty" << endl;
    else
    {
        tmp = top;
        cout << "Element Popped: " << tmp->info << endl;
        top = top->link;
        free(tmp);
    }
    return top;
}

void stack_list::traverse(node *top)
{
    node *ptr;
    ptr = top;
    if (top == NULL)
        cout << "Stack is empty" << endl;
    else
    {
        cout << "Stack elements :" << endl;
        while (ptr != NULL)
        {
            cout << ptr->info << endl;
            ptr = ptr->link;
        }
    }
}

/*
Output:
Operations on Stack

-------------
1.Push Element into the Stack
2.Pop Element from the Stack
3.Traverse the Stack
4.Quit

Enter your Choice: 1
Enter value to be pushed into the stack: 10

Enter your Choice: 1
Enter value to be pushed into the stack: 20

Enter your Choice: 1
Enter value to be pushed into the stack: 30

Enter your Choice: 1
Enter value to be pushed into the stack: 40

Enter your Choice: 3
Stack elements :
40
30
20
10

Enter your Choice: 2
Element Popped: 40

Enter your Choice: 2
Element Popped: 30

Enter your Choice: 3
Stack elements :
20
10

Enter your Choice: 4
*/

