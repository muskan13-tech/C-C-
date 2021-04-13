#include<iostream>

using namespace std;

int main()
{
    int n,k,diff,count=0;
    cin>>n>>k;
    int arr[n],max=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        diff = k-arr[i];
        if(count<diff)
         count=diff; 
    }
    if(count<0)
     count=0;
    cout<<count<<endl;

    return 0 ; 
}