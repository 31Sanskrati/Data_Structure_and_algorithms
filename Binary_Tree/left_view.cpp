#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void left_view(Node *head)
{
    // basecase
    if (head == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(head);

    while (!q.empty())
    {
        int n = q.size(); // number of nodes in a level

        // for every level
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0)
            {
                cout << curr->data << " -> ";
            }
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
        }
    }
    return;
}

int main()
{
    Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->right = new Node(6);
    head->right->right->left = new Node(7);

    left_view(head);
    return 0;
}