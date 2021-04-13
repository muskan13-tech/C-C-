#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
     cin>>arr[i];
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(int j=i;j<n;j++)
        {
          temp += arr[j];
          cout<<temp<<endl;
        }
    } 
    return 0;
}