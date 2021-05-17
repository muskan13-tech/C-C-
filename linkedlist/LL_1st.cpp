#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

// insertion at the tail ie, from the backside.
void insert_data(node* &head , int value){
    node* n = new node(value);
    
    if(head==NULL){
        head=n;
        return;
    }

    node* temp =head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

// display the data .
void displa_data(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    node* head = NULL;
    insert_data(head,1);
    insert_data(head,2);
    insert_data(head,3);
    insert_data(head,4);
    insert_data(head,5);

    displa_data(head);

    return 0;
}