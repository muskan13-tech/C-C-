#include<iostream>

using namespace std ;

int main()
{
  int t,n,s;
  cin>>t;
  while(t--)
  {
    cin>>n  >>s;
    int arr[n];
    for(int i=1;i<n;i++)
    {
      cin>>arr[i];
    }
    int posi=0,sum=0,flag=0;
    for(int i=1;i<n;i++)
    {
      sum += arr[i];
      while(sum>s)
      {
        sum -= arr[posi];
        posi++;
      }
      if(sum==s)
      {
        cout<<posi<<" "<<i<<endl;
        flag = 1;
        break;
      }
    }
    if(flag == 0)
     cout<<-1<<endl;
  }
  return 0;
}