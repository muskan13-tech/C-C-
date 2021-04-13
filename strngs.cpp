#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1 >>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n = s1.compare(s2);
        if(n==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        

    }

    return 0;
}