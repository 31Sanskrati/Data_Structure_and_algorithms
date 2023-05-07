#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

struct queue
{
    /* data */
    node *front;
    node *back;
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *temp = new node(x);
        if (back == NULL)
        {
            front = temp;
            back = temp;
        }
        else
        {
            back->next = temp;
            back = temp;
        }

        cout << "Pushed" << endl;
        return;
    }

    int pop()
    {
        if (front == NULL)
        {
            return -1;
        }
        node *temp = front;
        int x = front->data;
        front = front->next;

        if (front == NULL)
        {
            back = NULL;
        }

        delete (temp);

        return x;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.pop();
    q.pop();

    cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1) << endl;
    cout << "Queue Rear : " << ((q.back != NULL) ? (q.back)->data : -1) << endl;

    return 0;
}
