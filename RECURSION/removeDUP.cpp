#include<iostream>
#include<string>

using namespace std;

string removeDUP(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDUP(s.substr(1));
    if(ch == ans[0])
    {
        return ans;
    }

    return (ch+ans);
}

int main()
{
    string s;
    cin>>s;
    cout<<removeDUP(s);

    return 0 ;
}