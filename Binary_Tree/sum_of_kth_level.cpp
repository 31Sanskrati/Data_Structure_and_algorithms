#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int level_order_travrersal(node *head, int k)
{
    if (head == NULL)
    {
        return 0;
    }

    queue<node *> q;
    int count = 0;
    int sum = 0;
    q.push(head);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            count++;
        }
        if (temp != NULL)
        {
            cout << temp->data << "->";
            if(count == k){
                sum += temp->data;
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
    return sum;
}

int main()
{

    node *head = new node(1);
    head->left = new node(2);
    head->right = new node(3);
    head->left->left = new node(4);
    head->left->right = new node(5);

    int sum = level_order_travrersal(head, 2);
    cout << "\nSum: "<<sum<<endl;

    return 0;
}