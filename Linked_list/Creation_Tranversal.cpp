#include <iostream>
using namespace std;

//to create and print the linked list

class node
{
public:
    int data;   
    node *next; //pointer to next node
};

void printList(node *d)
{
    while (d != NULL)
    {
        cout << d->data << " -> ";
        d = d->next;
    }
}

int main()
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 10;      //assign first value
    head->next = second;  // link first node with second node
    second->data = 20;    //assign second data value
    second->next = third; //link second node with third
    third->data = 30;     //assign third value
    third->next = NULL;   //to indicate list is terminated

    printList(head);

    return 0;
}