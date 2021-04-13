#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Length of the character : ";
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[n-1-i])
        {
          check = true;
          break;
        }        
    }
    if(check==true)
    {
        cout<<"IT IS PALLINDROME "<<endl;
    }
    else
    {
        cout<<"NOT PALLINDROME "<<endl;
    }
    
    return 0;
}