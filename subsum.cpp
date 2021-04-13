#include<iostream>

using namespace std;

int main()
{
    int n,s;
    cout<<"Enter the size : ";
    cin>>n;
    cout<<"Enter the sum : ";
    cin>>s;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    int st=-1,en = -1, sum = 0,i=0,j=0;
    while(j<n && sum+arr[j]<=s)
    {
        sum += arr[j];
        j++;
    }
    if(sum == s)
    {
     cout<<i<<" "<<j<<endl;
     return 0;
    }
    while(j<n)
    {
        sum += arr[j];
        while(sum>s)
        {
            sum -= arr[i];
            i++;
        }
        if(sum == s)
        {
            st = i;
            en = j;
            break;
        }
        j++;
    }
   cout<<st<<" "<<en<<endl;

   return 0;
}