#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct linked_list
{
    int data;
    struct linked_list *next;
}
Linked_list;

//for adding node
int add_node(Linked_list **head, int d)
{
    Linked_list *l = new Linked_list;
    if(l == NULL) return 0;

    Linked_list *t = *head;
    l->data = d;
    l->next = NULL;

    if(*head == NULL)
    {
        *head = l;
        return 1;
    }

    while(t->next != NULL)
    {
        t = t->next;
    }

    t->next = l;

    return 1;
}

//print the value which are there in linked list
void print_list(Linked_list *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void del_list(Linked_list *head)
{
    while(head != NULL)
    {
        Linked_list *t = head ->next;
        delete head;
        head = t;
    }
}

Linked_list * merge_list(Linked_list *l1, Linked_list *l2)
{
    Linked_list *h = l1, *r = l1, t;

    if(l1 == NULL)
    {
        return l2;
    }

    if(l2 == NULL)
    {
        return l1;
    }

    if(l1->data < l2->data)
    {
        h = r = l1;
        l1 = l1->next;
    }
    else
    {
        h = r = l2;
        l2 = l2->next;
    }

    while(l1->next != NULL && l2->next != NULL)
    {
        if(l1->data < l2->data)
        {
            r->next = l1;
            l1 = l1->next;
            r = r->next;
        }
        else
        {
            r->next = l2;
            l2 = l2->next;
            r = r->next;
        }
    }

    if(l1->next != NULL)
    {
        r->next = l1;
    }

    if(l2->next != NULL)
    {
        r->next = l2;
    }

    return h;
}

//declaration of main method
int main(int argc, char* argv[])
{
    Linked_list *l1 = NULL;
    Linked_list *l2 = NULL;

    for(int i = 0; i < 10; i ++)
    {
        add_node(&l1, i * 3);
    }

    print_list(l1);//it will print first linked list

    for(int i = 0; i < 10; i ++)
    {
        add_node(&l2, i * 7);
    }

    print_list(l2); //it will print 2nd linked list

    Linked_list *h = merge_list(l1, l2);

    print_list(h);

    del_list(h);

 return 0;
}

/*
Output:
0 3 6 9 12 15 18 21 24 27
0 7 14 21 28 35 42 49 56 63
0 0 3 6 7 9 12 14 15 18 21 21 24 28 35 42 49 56 63
*/

