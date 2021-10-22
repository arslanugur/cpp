#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;


struct node {
    int priority;
    int info;
    struct node *link;
};

class Priority_Queue {
private:
    node *front;
public:
    Priority_Queue()
    {
        front = NULL;
    }

    void insert(int item, int priority)
    {
        node *tmp, *q;
        tmp = new node;
        tmp->info = item;
        tmp->priority = priority;
        if (front == NULL || priority < front->priority)
        {
            tmp->link = front;
            front = tmp;
        }
        else
        {
            q = front;
            while (q->link != NULL && q->link->priority <= priority)
                q = q->link;
            tmp->link = q->link;
            q->link = tmp;
        }
    }

    void del()
    {
        node *tmp;
        if (front == NULL)
            cout << "Queue Underflow\n";
        else
        {
            tmp = front;
            cout << "Deleted item is: " << tmp->info << endl;
            front = front->link;
            free(tmp);
        }
    }

    void display()
    {
        node *ptr;
        ptr = front;
        if (front == NULL)
            cout << "Queue is empty\n";
        else
        {
            cout << "Queue is :\n";
            cout << "Priority       Item\n";
            while (ptr != NULL)
            {
                cout << ptr->priority << "                 " << ptr->info << endl;
                ptr = ptr->link;
            }
        }
    }
};

int main()
{
    int choice, item, priority;
    Priority_Queue pq;
    cout << "1.Insert\n";
    cout << "2.Delete\n";
    cout << "3.Display\n";
    cout << "4.Quit\n";
    do
    {
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Input the item value to be added in the queue : ";
                cin >> item;
                cout << "Enter its priority : ";
                cin >> priority;
                pq.insert(item, priority);
                break;
            case 2:
                pq.del();
                break;
            case 3:
                pq.display();
                break;
            case 4:
                break;
            default :
                cout << "Wrong choice\n";
        }
    }
    while (choice != 4);
    return 0;
}

/*
Output:
1.Insert
2.Delete
3.Display
4.Quit

Enter your choice : 1
Input the item value to be added in the queue : 45
Enter its priority : 3

Enter your choice : 1
Input the item value to be added in the queue : 58
Enter its priority : 4

Enter your choice : 1
Input the item value to be added in the queue : 68
Enter its priority : 1

Enter your choice : 1
Input the item value to be added in the queue : 50
Enter its priority : 2

Enter your choice : 3
Queue is :
Priority       Item
1                 68
2                 50
3                 45
4                 58

Enter your choice : 2
Deleted item is: 68

Enter your choice : 3
Queue is :
Priority       Item
2                 50
3                 45
4                 58

Enter your choice :4
*/

