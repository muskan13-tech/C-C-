#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end(),greater<int>());
    cout<<a<<endl;

    return 0;
}