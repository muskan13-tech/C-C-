#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool check = false;
    unordered_set<int> s1;
    int pre_sum = 0;
    for(int i=0;i<n;i++){
        pre_sum += arr[i];
        if(pre_sum == 0)
          check = true;
        if(s1.find(pre_sum) != s1.end())
          check = true;

        s1.insert(arr[i]);  
    }
    if(check == false)
      cout<<"Not FOUND "<<endl;
    else 
      cout<<"FOUND"<<endl;
        
    return 0;
}