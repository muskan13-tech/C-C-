#include<iostream>

using namespace std;
int main()
{
    int n1,n2,n3,i,j,k;
    cout<<"Enter the values of n1 , n2 and n3 : ";
    cin>>n1>>n2>>n3;
    int a1[n1][n2],a2[n2][n3];
    //cout<<"1st array is :- "<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
          cin>>a1[i][j];
    }
    //cout<<"2nd array is:-  "<<endl;
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n3;j++)
          cin>>a1[i][j];
    }
    int ans[n1][n3];

    for(i=0;i<n1;i++){
        for(j=0;j<n3;j++)
        {
            ans[i][j] = 0;
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            for(k=0;k<n2;k++)
            {
                ans[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }


    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
          cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}