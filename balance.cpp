#include<bits/stdc++.h>
using namespace std;

bool balanceBract(string s){
    stack<char> s1;
    char x;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            s1.push(s[i]);
            continue;
        }
        if(s1.empty())
          return false;
        switch(s[i]){
            case ')':
              x = s1.top();
              s1.pop();
              if(x == '{' || x == '[')
                return false;
              break;  
            case '}':
              x = s1.top();
              s1.pop();
              if(x == '(' || x == '[')
                return false;
              break;    
            case ']':
              x = s1.top();
              s1.pop();
              if(x == '(' || x == '{')
                return false;
              break;      
        }  
    }
    return (s1.empty());
}

int main(){
    string s;
    cin>>s;
    if(balanceBract(s))
      cout<<"Balanced"<<endl;
    else
      cout<<"Not Balanced"<<endl;  
}