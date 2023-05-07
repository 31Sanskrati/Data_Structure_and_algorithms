#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *newNode(int key)
{
    Node *node = new Node;
    node->data = key;
    node->left = node->right = NULL;
    return node;
}

void getVerticalOrder(map<int, vector<int>> &m, int d, Node *root)
{
    if (root == NULL)
    {
        return;
    }
    m[d].push_back(root->data);
    getVerticalOrder(m, d--, root->left);
    getVerticalOrder(m, d++, root->right);
    return;
}

int main()
{
    Node *root = newNode(10);
    root->left = newNode(7);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right = newNode(4);
    root->right->left = newNode(14);
    root->right->right = newNode(16);

    map<int, vector<int>> m;
    int distance = 0;

    getVerticalOrder(m, distance, root);

    map<int, vector<int>>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        for(int i = 0; i<it->second.size(); i++){
            cout << it->second[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}