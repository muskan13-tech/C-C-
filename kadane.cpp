#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Length of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int currentSum = 0;
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
    cout<<MaxSum<<endl;

    return 0;
}