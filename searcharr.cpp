#include<iostream>

using namespace std;
int main()
{
    int n,m;
    cout<<"Length of array :";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
         cin>>arr[i][j];
    }
    int target;
    cout<<"target : ";cin>>target;
    int r=0,c=m-1;
    bool found=false;
    while(r<n && c>=0)
    {
        if(arr[r][c]==target)
        {
          cout<<"target found "<<r<<" "<<c<<" "<<endl;
          found = true;
        }
        if(arr[r][c]<target)
          r++;
        else
        {
            c--;
        }
            
    }
    if(found)
     cout<<"found "<<endl;
    else
    {
        cout<<"Not found";
    }
    
    return 0;
}