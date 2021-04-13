#include<iostream>
using namespace std;

int UniqueNum(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[]={1,2,3,10,1,2,3};
    cout<<UniqueNum(arr,7)<<endl;

    return 0 ;
}