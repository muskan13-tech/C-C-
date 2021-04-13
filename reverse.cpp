#include<iostream>

using namespace std;

void Reverse(int arr[],int f,int e)
{
    if(f>=e)
    return;
    int temp = arr[f];
    arr[f] = arr[e];
    arr[e]= temp;

    Reverse(arr,f+1,e-1);
}

void Print(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    Print(arr,n);
    Reverse(arr,0,n-1);
    Print(arr,n);

    return 0; 
}