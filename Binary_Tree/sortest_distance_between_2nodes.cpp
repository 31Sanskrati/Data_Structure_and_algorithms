// program to find sortest distance between two nodes
#include <bits/stdc++.h>
using namespace std;

// node structure
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

// funtion to find lowest common ancestor
Node *LCA(Node *node, int n1, int n2)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (node->data == n1 || node->data == n2)
        return node;

    Node *left = LCA(node->left, n1, n2);
    Node *right = LCA(node->right, n1, n2);

    if (left != NULL && right != NULL)
    {
        return node;
    }
    if (left == NULL && right == NULL)
    {
        return NULL;
    }
    if (left != NULL)
    {
        return LCA(node->left, n1, n2);
    }
    return LCA(node->right, n1, n2);
}

// find the distance between LCA and node with data n1
int dis(Node *node, int n1, int x)
{
    if (node == NULL)
    {
        return -1;
    }
    if (node->data == n1)
    {
        return x;
    }
    int left = dis(node->left, n1, x + 1);
    if (left != -1)
    {
        return left;
    }
    return dis(node->right, n1, x + 1);
}

// function for distance between two nodes
int dis2nodes(Node *node, int n1, int n2)
{
    Node *lca = LCA(node, n1, n2);
    cout << "LCA: " << lca->data << endl;
    int d1 = dis(lca, n1, 0);
    int d2 = dis(lca, n2, 0);

    return d1 + d2;
}

int main()
{
    Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->left = new Node(6);
    head->right->right = new Node(7);
    head->right->right->left = new Node(8);

    cout << dis2nodes(head, 2, 8);

    return 0;
}