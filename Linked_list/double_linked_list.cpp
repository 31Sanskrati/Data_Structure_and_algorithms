#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;

    if (head != NULL)
    {
        head->prev = n;
    }

    head = n;
}

void insertAtEnd(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *new_node = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;
    new_node->data = val;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAtHead(node* &head){
    node* toDelete = head;
    head = head->next;
    head->prev = NULL;

    delete toDelete;
}

void deletion(node *&head, int pos)
{
    if(pos == 1){
        deleteAtHead(head);
    }
    node *temp = head;
    int count = 1;

    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;

    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }

    delete temp;
}

int main()
{
    node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    display(head); //1 2 3 4 
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    display(head); //7 6 1 2 3 4
    deletion(head, 4);
    display(head); // 7 6 1 3 4
    return 0;
}