#include<bits/stdc++.h>
using namespace std;


struct Node{
    public:
    int  data;
    struct Node *left;
    struct Node *right;
    Node(int value){
        data = value;
        left = NULL;
        right  = NULL;
    }
};

vector<int> LeftView(Node* root){
    vector<int> v;
    queue<Node *> q;
    if(root)
      q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            Node *temp = q.front();
            q.pop();
            if(i==0){
                v.push_back(temp->data);
            }
            if(temp->left!= NULL)  
               q.push(temp->left);
            if(temp->right!= NULL)  
               q.push(temp->right);
        }
    }  
    return v;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    root->right->left = new Node(6);
    
    vector<int> v = LeftView(root);
    for(int x : v)
      cout<<x<<" ";

    return 0;
}