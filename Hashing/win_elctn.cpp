#include<bits/stdc++.h>
using namespace std;

vector<string> winElection(string arr[] , int n){
     unordered_map<string , int> mp;
     for(int i=0;i<n;i++){
         mp[arr[i]]++;
     }
     vector<string> v;
     string name = "";
     int max_vote = 0;
     for(auto i:mp){
         if(i.second>max_vote){
             name = i.first;
            max_vote = max(i.second,max_vote);
         }
        else if(i.second == max_vote){
            name = min(name , i.first);

        }
    }
    v.push_back(name);
    string temp = to_string(max_vote);
    v.push_back(temp);

    return v;
}

int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<string> s = winElection(arr,n);
    cout<<s[0]<<" "<<s[1];
    return 0;
}