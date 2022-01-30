#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

void  helpr(Node * root , int lvl , vector<int> &ans){
    if(root == NULL) return;
    if(!root->left && !root->right)
      ans.push_back(lvl);
    helpr(root->left , lvl+1 , ans);  
    helpr(root->right , lvl+1 , ans);  
}

bool sameLevel(Node * root){
    vector<int> ans;
    helpr(root , 0 , ans);
    for(int i = 1 ; i<ans.size();i++){
        if(ans[i] != ans[i-1])
          return false;
    }
    return true;
}

void print_node(Node* root){
    if(root == NULL)
      return;
    print_node(root->left);
    cout<<root->data<<" ";
    print_node(root->right);  
}


int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
   // root->right->right = new Node(7);
    //root->right->left = new Node(6);
    
    print_node(root);
    bool ans = sameLevel(root);
    if(ans == true)
      cout<<"Same level"<<endl;
    else 
      cout<<"Not at the same level";  
    return 0;
}