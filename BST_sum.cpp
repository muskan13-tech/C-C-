#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

void BSTsum(Node *root , int &sum){
    if(root == 0) return ;
    
    BSTsum(root->left , sum);
    sum += root->data;
    root->data = sum;
    BSTsum(root->right , sum);
    
}

void print_node(Node* root){
    if(root == NULL)
      return;
    print_node(root->left);
    cout<<root->data<<" ";
    print_node(root->right);  
}


int main(){
    Node* root = new Node(30);
    root->left = new Node(22);
    root->right = new Node(36);
    
    int sum = 0;
    cout<<"Early tree :" <<endl;
    print_node(root);
    BSTsum(root ,sum );
    cout<<"Sum Node : "<<endl;
    print_node(root);

    return 0;
}