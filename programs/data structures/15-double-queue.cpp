#include<iostream>

using namespace std;

class nodecreation {
public:
    int data;

    class nodecreation *next;

    class nodecreation *prev;
};

class dqueueoperation : public nodecreation {
    nodecreation *head, *tail;
    int top1, top2;

public:
    dqueueoperation()
    {
        top1 = 0;
        top2 = 0;
        head = NULL;
        tail = NULL;
    }

    void push(int x)
    {
        nodecreation *temp;
        int ch;
        if (top1 + top2 >= 5)
        {
            cout << "\ndqueue overflow!!!";
            return;
        }
        if (top1 + top2 == 0)
        {
            head = new nodecreation;
            head->data = x;
            head->next = NULL;
            head->prev = NULL;
            tail = head;
            top1++;
        }
        else
        {
            cout << "\nAdd element 1.FIRST 2.LAST\nEnter your choice : ";
            cin >> ch;

            if (ch == 1)
            {
                top1++;
                temp = new nodecreation;
                temp->data = x;
                temp->next = head;
                temp->prev = NULL;
                head->prev = temp;
                head = temp;
            }
            else
            {
                top2++;
                temp = new nodecreation;
                temp->data = x;
                temp->next = NULL;
                temp->prev = tail;
                tail->next = temp;
                tail = temp;
            }
        }
    }

    void pop()
    {
        int ch;
        cout << "\nDelete \n1.First Node \n2.Last Node\nEnter your choice : ";
        cin >> ch;
        if (top1 + top2 <= 0)
        {
            cout << "\nDqueue under flow!!!!";
            return;
        }
        if (ch == 1)
        {
            head = head->next;
            head->prev = NULL;
            top1--;
        }
        else
        {
            top2--;
            tail = tail->prev;
            tail->next = NULL;
        }
    }

    void display()
    {
        int ch;
        nodecreation *temp;
        cout << "\nDisplay from \n1.Staring \n2.Ending \nEnter your choice : ";
        cin >> ch;
        if (top1 + top2 <= 0)
        {
            cout << "\nunder flow";
            return;
        }
        if (ch == 1)
        {
            temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
        else
        {
            temp = tail;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->prev;
            }
        }
    }
};

int main()
{
    dqueueoperation d1;
    int ch;
    cout << "Enter Dequeue Operation you want to perform" << endl;
    cout << "1. Insert" << endl;
    cout << "2. Delete" << endl;
    cout << "3. Display" << endl;
    cout << "4. Exit" << endl;
    while (1)
    {

        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
            case 1:
                cout << "\nEnter element : ";
                cin >> ch;
                d1.push(ch);
                break;

            case 2:
                d1.pop();
                break;

            case 3:
                d1.display();
                break;
            case 4:
                return 0;
        }
    }
}

/*
Output:
Enter Dequeue Operation you want to perform
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice : 1

Enter element : 12
Enter your choice : 1

Enter element : 23

Add element 1.FIRST 2.LAST
Enter your choice : 1
Enter your choice : 1

Enter element : 45

Add element 1.FIRST 2.LAST
Enter your choice : 2
Enter your choice : 2

Delete 
1.First Node 
2.Last Node
Enter your choice : 1
Enter your choice : 3

Display from 
1.Staring 
2.Ending 
Enter your choice : 1
12 45 
Enter your choice : 4
*/

