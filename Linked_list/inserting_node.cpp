#include <iostream>
using namespace std;

//to insert a node in linked list

class node
{
public:
    int data;
    node *next;
};

void printList(node *i)
{
    while (i != NULL)
    {
        cout << i->data << " -> ";
        i = i->next;
        //cout<<i->next<<"   ";
    }
    cout << "Done" << endl;
}

void insertStart(node **headRef, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = (*headRef);
    (*headRef) = newNode;
}

void insertAfter(node *prevNode, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void insertTail(node *&headRef, int newData)
{
    node *newNode = new node();

    newNode->data = newData;
    newNode->next = NULL;

    if (headRef == NULL)
    {
        headRef = newNode;
    }
    node *temp = headRef;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
int main()
{
    node *head = NULL;
    node *chest = NULL;
    node *arms = NULL;
    node *tail = NULL;

    head = new node();
    chest = new node();
    arms = new node();
    tail = new node();

    head->data = 10;
    head->next = chest;
    chest->data = 20;
    chest->next = arms;
    arms->data = 30;
    arms->next = tail;
    tail->data = 40;
    tail->next = NULL;

    printList(head); //10 -> 20 -> 30 -> 40 -> Done
    insertStart(&head, 0);
    printList(head); //0 -> 10 -> 20 -> 30 -> 40 -> Done
    insertAfter(arms, 1000);
    printList(head); //0 -> 10 -> 20 -> 30 -> 1000 -> 40 -> Done
    insertTail(head, 989);
    printList(head); //0 -> 10 -> 20 -> 30 -> 1000 -> 40 -> 989 -> Done
    return 0;
}