#include <iostream>
using namespace std;

//This program is for finding the length of linked list

class node{
    public:
    int data;
    node* next;
};

void push(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//iterative method
int count(node *head){
    int count = 0;
    node* current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

//recursive method
int getcount(node* head){
    if (head == NULL){
        return 0;
    }
    else{
        return 1+ getcount(head->next);
    }
}

int main(){
    node* head = NULL;
    push(&head, 10);
    push(&head, 5);
    push(&head, 0);

    cout<<count(head); //3
    cout<<getcount(head); //3
    return 0;
}