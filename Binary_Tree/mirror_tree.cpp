#include "bits/stdc++.h"

using namespace std;

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

void mirror(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    mirror(node->left);
    mirror(node->right);

    // induction
    Node *temp = node->left;
    node->left = node->right;
    node->right = temp;

    return;
}

void postorder(Node* node){
    if(node == NULL){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<"->";
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    cout<<"Postorder of tree\n";
    postorder(root);

    mirror(root);
    cout<<"\nPostorder of mirror tree\n";
    postorder(root);
    return 0;
}