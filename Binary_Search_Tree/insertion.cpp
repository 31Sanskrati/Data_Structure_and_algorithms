#include <iostream>
using namespace std;

/* Binary Tree with three rules
-- Left node key is smaller than node's key
-- Right node key is larger than node's key
-- Left and right tree is also the BST
*/

struct Node{
    int data;
    Node* left, *right;

    Node(int key){
        data = key;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertBST(root->left, val);
    }
    else{
        root->right = insertBST(root->right, val);
    }

    return root;
}

//inorder of BST is always sorted
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    inorder(root);
    return 0;
}