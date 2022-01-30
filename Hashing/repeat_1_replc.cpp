#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
      mp[arr[i]]++;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>1)
        {
            arr[i] = 1;
            v.push_back(arr[i]);
        }
        else 
         v.push_back(arr[i]);
    }  
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}