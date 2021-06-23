#include <iostream>
using namespace std;

//to delete an element when an element is given to delete

class node
{
public:
    int data;
    node *next;
};

void deleteNode(node **head, int key)
{

    node *temp = *head;
    node *prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        delete temp;
        return;
    }

    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
        {
            return;
        }

        prev->next = temp->next;
        delete temp;
    }
}

void printList(node *head_ref)
{
    while (head_ref != NULL)
    {
        cout << head_ref->data << " ";
        head_ref = head_ref->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    node *middle = NULL;
    node *tail = NULL;

    head = new node();
    middle = new node();
    tail = new node();

    head->data = 11;
    head->next = middle;
    middle->data = 55;
    middle->next = tail;
    tail->data = 110;
    tail->next = NULL;

    printList(head);
    deleteNode(&head, 110);
    printList(head);
    return 0;
}