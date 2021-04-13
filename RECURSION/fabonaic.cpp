#include<iostream>
using namespace std;

int fabonaic(int n)
{
    if(n==0 || n==1)
     return n;
    return fabonaic(n-1)+fabonaic(n-2); 
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cout<<fabonaic(i)<<" ";

    return 0;
}