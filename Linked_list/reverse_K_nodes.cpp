#include <iostream>
using namespace std;

//this program is to reverse K nodes of linked list

class node{
    public:
    int data;
    node* next;
};

void printList(node* i){
    while(i!=NULL){
        cout<<i->data<<" ";
        i = i->next;
    }
    cout<<endl;
}

void push(node** head, int new_data){
    node* new_node = new node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

node* reverseK(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr!=NULL){

    head->next = reverseK(nextptr, k);    
    }
    return prevptr;
}

int main(){
    node *head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printList(head); // 1 2 3 4 5
    int k = 3;
    node* newhead = reverseK(head, k);
    printList(newhead); // 3 2 1 5 4

    return 0;
}