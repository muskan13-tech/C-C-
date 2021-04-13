#include<iostream>
using namespace std;

int firstocc(int arr[],int n, int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restArr = lastocc(arr,n,i+1,key);
    if(restArr != -1)
    {
        return restArr;
    }    
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int a[]={4,2,1,2,5,2,7};

    cout<<firstocc(a,7,0,2)<<" "<<lastocc(a,7,0,2)<<endl;
    return 0;
}