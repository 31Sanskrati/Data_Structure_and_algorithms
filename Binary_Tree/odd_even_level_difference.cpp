#include <bits/stdc++.h>
using namespace std;

// Given a Binary Tree.
// Find the difference between the sum of node values at even levels and the sum of node values at the odd levels.

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

int odd_even_level_difference(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int count = 1;
    int odd = 0;
    int even = 0;

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            count++;
        }
        if (temp != NULL)
        {
            if (count % 2 == 0)
            {
                even += temp->data;
            }
            else
            {
                odd += temp->data;
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
    return odd-even;
}

int main()
{

    node *head = new node(1);
    head->left = new node(2);
    head->right = new node(3);
    head->left->left = new node(4);
    head->left->right = new node(5);

    cout << "The difference between odd level sum and even level sum is " << odd_even_level_difference(head);
    return 0;
}