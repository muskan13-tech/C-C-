#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int K=0,I=0,C=0,S=0,T=0,A=0,R=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='K')
            K++;
            else if(s[i]=='I')
            I++;
            else if(s[i]=='C')
            C++;
            else if(s[i]=='S')
            S++;
            else if(s[i]=='T')
            T++;
            else if(s[i]=='A')
            A++;
            else if(s[i]=='R')
            R++;
        }
        K = K/2;
        T = T/2;
        int count = 0;
        if(K<=T)
        count = K;
        if(T<=K)
        count = T;
        
        cout<<count<<endl;
        
    }
    return 0;
}