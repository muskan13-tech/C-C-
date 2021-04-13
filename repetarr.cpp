#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array  :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    int idx[n];
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        idx[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!= -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if(minidx == INT_MAX)
     cout<<"-1"<<endl;
    else
    {
        cout<<"The index is : "<<minidx<<endl;
    }
    
    return 0;
}