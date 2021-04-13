#include<iostream>

using namespace std;

int kadane(int arr[],int n)
{
    int currentSum=0;
    int MaxSum =INT_MIN;
    for(int i=0;i<n;i++)
    {
        currentSum += arr[i];
        if(currentSum<0)
        {
            currentSum = 0;
        }
        MaxSum = max(MaxSum , currentSum);
    }
   return MaxSum;
}

int main()
{
    int n;
    cout<<"Length of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    int wrapsum;
    int nowrapsum;
    nowrapsum = kadane(arr,n);  
    int totalSum = 0;
    for(int i=0;i<n;i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalSum + kadane(arr,n);

    cout<<max(wrapsum , nowrapsum)<<endl;

    return 0;
}