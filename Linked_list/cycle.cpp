#include <iostream>
using namespace std;

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

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool cyclePresent(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void deleteCycle(node *head)
{
    node *fast = head;
    node *slow = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

int main()
{
    node *head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printList(head);
    cout << cyclePresent(head) << endl;
    makeCycle(head, 3);
    cout << cyclePresent(head) << endl;

    deleteCycle(head);
    //cout << cyclePresent(head) << endl;
    printList(head);

    return 0;
}