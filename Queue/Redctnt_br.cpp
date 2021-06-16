#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count =0;
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top()== '(')
              count++;
            while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }

    cout<<count<<endl;
    return 0;
}