#include<iostream>
#include<string>
using namespace std;
void reverseStr(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    string res = s.substr(1);
    reverseStr(res);
    cout<<s[0];
}
int main()
{
    string s;
    cin>>s;
    reverseStr(s);
    return 0;
}