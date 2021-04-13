#include<iostream>
#include<string>

using namespace std;

string ShiftSte(string s,char n)
{
    if(s.length()==0)
    {
        return "";
    }
    char x = s[0];
    string temp = ShiftSte(s.substr(1),n);
    if(x==n)
        return temp+x;
    return  x+temp;
}

int main()
{
    string s;
    char a;
    cin>>s>>a;
    cout<<ShiftSte(s,a);

    return 0;
}