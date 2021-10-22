#include <iostream>

#define MAX 5
using namespace std;

class Circular_Queue
{
    
private:
    int *cqueue_arr;
    int front, rear;
    
public:
    Circular_Queue()
    {
        cqueue_arr = new int[MAX];
        rear = front = -1;
    }

    void insert(int item)
    {
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
        {
            cout << "Queue Overflow \n";
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            if (rear == MAX - 1)
                rear = 0;
            else
                rear = rear + 1;
        }
        cqueue_arr[rear] = item;
    }

    void del()
    {
        if (front == -1)
        {
            cout << "Queue Underflow\n";
            return;
        }
        cout << "Element deleted from queue is : " << cqueue_arr[front] << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front == MAX - 1)
                front = 0;
            else
                front = front + 1;
        }
    }

    void display()
    {
        int front_pos = front, rear_pos = rear;
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements :\n";
        if (front_pos <= rear_pos)
        {
            while (front_pos <= rear_pos)
            {
                cout << cqueue_arr[front_pos] << "  ";
                front_pos++;
            }
        }
        else
        {
            while (front_pos <= MAX - 1)
            {
                cout << cqueue_arr[front_pos] << "  ";
                front_pos++;
            }
            front_pos = 0;
            while (front_pos <= rear_pos)
            {
                cout << cqueue_arr[front_pos] << "  ";
                front_pos++;
            }
        }
        cout << endl;
    }
};

int main()
{
    int choice, item;
    Circular_Queue cq;
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
                cout << "Input the element for insertion in queue : ";
                cin >> item;
                cq.insert(item);
                break;
            case 2:
                cq.del();
                break;
            case 3:
                cq.display();
                break;
            case 4:
                break;
            default:
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
Input the element for insertion in queue : 2

Enter your choice : 1
Input the element for insertion in queue : 3

Enter your choice : 1
Input the element for insertion in queue : 4

Enter your choice : 1
Input the element for insertion in queue : 5

Enter your choice : 1
Input the element for insertion in queue : 6

Enter your choice : 3
Queue elements :
2  3  4  5  6

Enter your choice : 2
Element deleted from queue is : 2

Enter your choice : 1
Input the element for insertion in queue : 65

Enter your choice : 3
Queue elements :
3  4  5  6  65

Enter your choice : 1
Input the element for insertion in queue : 8
Queue Overflow

Enter your choice : 3
Queue elements :
3  4  5  6  65

Enter your choice : 1
Input the element for insertion in queue : 65
Queue Overflow

Enter your choice : 2
Element deleted from queue is : 3

Enter your choice : 2
Element deleted from queue is : 4

Enter your choice : 2
Element deleted from queue is : 5

Enter your choice : 3
Queue elements :
6  65

Enter your choice : 1
Input the element for insertion in queue : 56

Enter your choice : 3
Queue elements :
6  65  56

Enter your choice :4
*/

