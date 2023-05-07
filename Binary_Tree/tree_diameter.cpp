#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lH = height(root->left);
    int rH = height(root->right);
    return max(lH, rH) + 1;
}

int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lH = 0, rH = 0;

    if (root->left)
        lH = height(root->left);

    if (root->right)
        rH = height(root->right);

    int currD = lH + rH + 1;

    int lD = diameter(root->left);
    int rD = diameter(root->right);

    return max(currD, max(lD, rD));
}

int main()
{
    node *head = new node(1);
    head->left = new node(2);
    head->right = new node(3);
    head->left->left = new node(4);
    head->left->left->left = new node(5);
    head->left->left->right = new node(6);
    head->left->left->left->left = new node(7);
    head->left->left->left->left->left = new node(8);

    cout << "Diameter: " << diameter(head);
    return 0;
}
