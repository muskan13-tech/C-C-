#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=j;k<n;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    } 

    return 0;
}