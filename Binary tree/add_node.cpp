#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};
// pre oder traversal.
void print_node(Node* root){
    if(root == NULL)
       return;
    cout<<root->data<<" ";
    print_node(root->left);
    print_node(root->right);
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    root->right->left = new Node(6);
    
    print_node(root);
    return 0;
}