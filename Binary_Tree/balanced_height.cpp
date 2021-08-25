#include "bits/stdc++.h"
using namespace std;

//if height of right branch and left branch is equal then it is Balanced tree

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight, rHeight) + 1;
}

bool balancedTree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (balancedTree(root->left) == false)
    {
        return false;
    }
    if (balancedTree(root->right) == false)
    {
        return false;
    }

    int lHeight = height(root->left);
    int rHeight = height(root->right);
    if (abs(lHeight - rHeight) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    if (balancedTree(root))
    {
        cout << "Balanced Tree";
    }
    else
    {
        cout << "Not balanced";
    }
    return 0;
}
