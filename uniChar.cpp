#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string S[n];
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        string ans = "";
        for(int i=0;i<n;i++){
            ans += S[i];
        }
        set<char> s1;
        for(int j= 0 ;j<ans.size();j++){
            s1.insert(ans[j]);
        }

        cout<<s1.size()<<endl;
    }
}