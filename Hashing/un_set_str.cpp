#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;
    s.insert("Muskan");
    s.insert("Ritu");
    s.insert("Mohit");
    s.insert("rishu");
    
    for(auto it = s.begin();it != s.end();it++)
      cout<<(*it)<<endl;
    string key = "rishu";
    if(s.find(key) == s.end()){
        cout<<"Not found"<<endl;
    }else
      cout<<"found "<<endl;
    s.erase(key);
    for(auto it = s.begin();it != s.end();it++)
      cout<<(*it)<<endl;

    cout<<s.size()<<endl;
      
    return 0;
}