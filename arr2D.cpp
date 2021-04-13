#include<iostream>

using namespace std;

int main()
{
    int m , n;
    cout<<"Enter the rows and the columns ";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int x;
    bool flag = false;
    cout<<"Find this number : ";
    cin>>x;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"number is found  "<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if(flag)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<" not found "<<endl;
    }
    
    return 0; 
}