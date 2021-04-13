#include<iostream>
using namespace std;

int bitSubarray(int arr[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int arr[5]={1,2,3,45,66};
    bitSubarray(arr,5);

    return 0;
}