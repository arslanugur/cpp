#include <iostream>

using namespace std;

class DequeEmptyException {
public:
    DequeEmptyException()
    {
        cout << "Deque empty" << endl;
    }
};


class Node {
public:
    int data;
    Node *next;
    Node *prev;
};

class Deque {
private:
    Node *front;
    Node *rear;
    int count;

public:
    Deque()
    {
        front = NULL;
        rear = NULL;
        count = 0;
    }

    void InsertFront(int element)
    {
        // Create a new node
        Node *tmp = new Node();
        tmp->data = element;
        tmp->next = NULL;
        tmp->prev = NULL;

        if (isEmpty())
        {
            // Add the first element
            front = rear = tmp;
        }
        else
        {
            // Prepend to the list and fix links
            tmp->next = front;
            front->prev = tmp;
            front = tmp;
        }

        count++;
    }

    int RemoveFront()
    {
        if (isEmpty())
        {
            throw new DequeEmptyException();
        }

        //  Data in the front node
        int ret = front->data;

        // Delete the front node and fix the links
        Node *tmp = front;
        if (front->next != NULL)
        {
            front = front->next;
            front->prev = NULL;
        }
        else
        {
            front = NULL;
        }
        count--;
        delete tmp;

        return ret;
    }

    void InsertBack(int element)
    {
        // Create a new node
        Node *tmp = new Node();
        tmp->data = element;
        tmp->next = NULL;
        tmp->prev = NULL;

        if (isEmpty())
        {
            // Add the first element
            front = rear = tmp;
        }
        else
        {
            // Append to the list and fix links
            rear->next = tmp;
            tmp->prev = rear;
            rear = tmp;
        }

        count++;
    }

    int RemoveBack()
    {
        if (isEmpty())
        {
            throw new DequeEmptyException();
        }

        //  Data in the rear node
        int ret = rear->data;

        // Delete the front node and fix the links
        Node *tmp = rear;
        if (rear->prev != NULL)
        {
            rear = rear->prev;
            rear->next = NULL;
        }
        else
        {
            rear = NULL;
        }
        count--;
        delete tmp;

        return ret;
    }

    int Front()
    {
        if (isEmpty())
            throw new DequeEmptyException();

        return front->data;
    }

    int Back()
    {
        if (isEmpty())
            throw new DequeEmptyException();

        return rear->data;
    }

    int Size()
    {
        return count;
    }

    bool isEmpty()
    {
        return count == 0 ? true : false;
    }
};

int main()
{
    // Stack behavior using a general dequeue
    Deque qu;
    try
    {
        if (qu.isEmpty())
        {
            cout << "Deque is empty" << endl;
        }

        // Push elements
        qu.InsertBack(1500);
        qu.InsertBack(2020);
        qu.InsertBack(1300);
        qu.InsertBack(100);
        qu.InsertBack(900);
        qu.InsertBack(10);

        // Size of queue
        cout << "Size of dequeue = " << qu.Size() << endl;

        // Pop elements
        cout << qu.RemoveBack() << endl;
        cout << qu.RemoveBack() << endl;
        cout << qu.RemoveBack() << endl;
    }
    catch (...)
    {
        cout << "Some exception occured" << endl;
    }

    // Queue behavior using a general dequeue
    Deque dq1;
    try
    {
        if (dq1.isEmpty())
        {
            cout << "Deque is empty" << endl;
        }

        // Push elements
        dq1.InsertBack(4100);
        dq1.InsertBack(2400);
        dq1.InsertBack(3050);
        dq1.InsertBack(100);
        dq1.InsertBack(900);
        dq1.InsertBack(10);
        // Size of queue
        cout << "Size of dequeue = " << dq1.Size() << endl;

        // Pop elements
        cout << dq1.RemoveFront() << endl;
        cout << dq1.RemoveFront() << endl;
        cout << dq1.RemoveFront() << endl;
    }
    catch (...)
    {
        cout << "Some exception occured" << endl;
    }

    return 0;
}

/*
Output:
Deque is empty
Size of dequeue = 6
10
900
100
Deque is empty
Size of dequeue = 6
4100
2400
3050
*/

