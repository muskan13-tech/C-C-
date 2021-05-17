#include<bits/stdc++.h>
using namespace std;

// class
class node{
    public:
    int data;
    node* next=NULL;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert_front(node* &head , int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void search_value(node* &head , int value){
   node* temp= head;
   while(temp!=NULL){
       if(temp->data == value){
           cout<<head;
       }
       temp = temp->next;
   }
   cout<<head;
}

// display  
void display_list(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    insert_front(head,1);
    insert_front(head,2);
    insert_front(head,3);
    insert_front(head,4);
    insert_front(head,5);
    insert_front(head,6);
    display_list(head);
    search_value(head , 5);
    return 0;
}