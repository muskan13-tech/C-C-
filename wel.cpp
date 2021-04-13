#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size :";
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    for(int i=0;i<n;i++)
      cin>>arr[i];
    if(arr[n]==1)
    {
        cout<<"1"<<endl;
        return 0;
    }  
    int ans=0,mx=-1; 
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx = max(mx,arr[i]);
    } 

    cout<<"The ans is : "<<ans<<endl;
    return 0;
}