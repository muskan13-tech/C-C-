#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
bool hash_table[MAX+1][2];

bool search_ele(int x){
    if(x>=0){
        if(hash_table[x][0] == 1)
          return true;
        else 
         return false;  
    }
    else{
        x = abs(x);
        if(hash_table[x][1] == 1)
          return true;
        else 
          return false;  
    }

}

void insert_ele(int arr[] , int n){
     for(int i=0;i<n;i++){
         if(arr[i]>=0){
            hash_table[arr[i]][0] = 1;
         }
         else{
            hash_table[abs(arr[i])][1] = 1;
        }
     }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int find ;
    cin>>find;
    insert_ele(arr,n);
    cout<<search_ele(find);

    return 0;
}