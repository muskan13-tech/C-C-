#include<bits/stdc++.h>
using namespace std;

string customString(string order , string type){
    map<char , int> mp;
    string ans = "";
    for(auto x: type){
        mp[x]++;
    }
    for(auto x: order){
        if(mp.find(x) != mp.end())
        {
            auto temp = mp.find(x);
            int count = temp->second;
            string s(count,x);
            ans += s;
            mp.erase(x);
        }
    }
    for(auto x:mp){
        string s(x.second , x.first);
        ans += s;
    }
    return ans;
}

int main(){
    string s1 , s2;
    cin>>s1>>s2;
    cout<<customString(s1,s2);
    return 0;
}