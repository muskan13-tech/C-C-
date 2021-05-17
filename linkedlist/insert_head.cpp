#include<bits/stdc++.h>
using namespace std;

class node{
   public:
    int data;
    node* next;

    // constructor.
    node(int val){
        data = val;
        next = NULL;
    }
};

void insert_head(node* &head , int value){
    node* n = new node(value);
    
    n->next = head;
    head = n;
}

void display_data(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    insert_head(head,1);
    insert_head(head,2);
    insert_head(head,3);
    insert_head(head,4);
    insert_head(head,5);

    display_data(head);

    return 0;
}
