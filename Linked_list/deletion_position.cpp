#include <iostream>
using namespace std;

//To delete an element at a certain position

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
    cout << endl;
}

void deleteNode(node **head, int positon){
    if(*head == NULL){
        return;
    }
    node* temp = *head;

    if(positon == 0){
        *head = temp->next;
        free(temp);
        return;
    }

    for(int i = 0; temp != NULL && i<positon; i++){
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL){
        return;
    }

    node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

int main()
{
    node* head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);

    printList(head);
    deleteNode(&head ,3);
    printList(head);
    return 0;
}