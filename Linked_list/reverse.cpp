#include <iostream>
using namespace std;

//this program is to reverse linked list

class node
{
public:
    int data;
    node *next;
};

void push(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(node *i)
{
    while (i != NULL)
    {
        cout << i->data << " ";
        i = i->next;
    }
    cout<<endl;
}

//iterative method
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

//recursive method
node* reverseRecursive(node* &head){
    if(head == NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

int main()
{
    node *head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printList(head); //1 2 3 4 5

    node* newhead = reverse(head);
    printList(newhead); // 5 4 3 2 1 

    node* recurrsiveHead = reverseRecursive(newhead);
    printList(recurrsiveHead); //1 2 3 4 5
    
    return 0;
}