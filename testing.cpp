// int maxHeight(node *root){
//     if(root == NULL)
//      return -1;
//      else
//      {
//          int lh = maxHeight(node->left);
//          int rh = maxHeight(node->right);

//          if(lh > rh)
//           return lh+1;
//         else
//           return rh+1;  
//      }
// }


// reverse of linked list

// void reverseLL(){
//     Node *cur = head;
//     Node* prev = NULL , *next = NULL;
//     while(cur != NULL){
//         next = cur->next;
//         prev = cur;
//         cur = next;
//     }
//     head = prev;
// }

// reverse of string
#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1,2,2,3,4,4,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int,int> mp;
    set<int> s1;
    for(int i=0;i<n;i++){
        s1.insert(arr[i]);
    }
    for(int i=1;i<=s1.size();i++){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> v , v1;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto i:mp){
        if(i.second > 1)
         v.push_back(i.first);
        else
         v1.push_back(i.first); 
    }

    for(auto i:v)
      cout<<i<<" ";
    cout<<endl;  
    cout<<"not repeating";
    for(auto i:v1)
      cout<<i<<" ";  

    return 0;
}