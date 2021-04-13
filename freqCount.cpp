#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s="ndnfjerfhewdiewokkcndndofjwnqwodonfmvoenoperpo";
    char ans='a';

    int feq[26];
    for(int i=0;i<26;i++)
     feq[i]=0;

    for(int i=0;i<s.size();i++)
    {
        feq[s[i]-'a']++;
    } 

    int maxF=0;
    for(int i=0;i<26;i++)
    {
        if(feq[i]>maxF)
        {
            maxF = feq[i];
            ans = i+'a';
        }
    }

    cout<<maxF<<" "<<ans<<endl;
    
    return 0;
}