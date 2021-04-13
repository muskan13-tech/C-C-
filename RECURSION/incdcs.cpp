#include<iostream>
using namespace std;

void incdrs(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    incdrs(n-1);
}

void incdrs2(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    incdrs2(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    incdrs(n);
    incdrs2(n);
    return 0;
}