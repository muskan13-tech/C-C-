#include<bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node* next;

  node(int value){
      data = value;
      next = NULL;
  }
};

void insert_ele(node* &head , int value){
    node* n = new node(value);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void delete_ele(node* &head , int value){
     node* temp = head;
     while(temp->next->data!= value){
         temp = temp->next;
     }
     node* todelete = temp->next;
     temp->next = temp->next->next;

     delete todelete;
}

void display_ele(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    insert_ele(head,1);
    insert_ele(head,2);
    insert_ele(head,3);
    insert_ele(head,4);
    insert_ele(head,5);
    insert_ele(head,6);
    insert_ele(head,7);
    
    display_ele(head);
    delete_ele(head , 3);
    display_ele(head);

    return 0;
}