#include<iostream>

using namespace std;
int main()
{
    int n,m;
    cout<<"Lenght of array : ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int row_strt = 0 , row_end = n-1, col_strt = 0,col_end = m-1;
    while(row_strt<=row_end && col_strt<=col_end)
    {
        //row start
     for(int j=col_strt;j<=col_end;j++)
    {
        cout<<arr[row_strt][j]<<" ";
    }
    row_strt++;
     //column end
    for(int i=row_strt;i<=row_end;i++)
    {
        cout<<arr[i][col_end]<<" ";
    }
    col_end--;
    //row end
    for(int j=col_end;j>=col_strt;j--)
    {
        cout<<arr[row_end][j]<<" ";
    }
    row_end--;

    //column start
    for(int i=row_end;i>=row_strt;i--)
    {
        cout<<arr[i][col_strt]<<" ";
    }
    col_strt++;
    }

    
    return 0;
}