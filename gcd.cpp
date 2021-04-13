#include<iostream>

using namespace std;

int gcd(int n, int m)
{
    while(m!=0)
    {
        int temp=n%m;
        n=m;
        m=temp;
    }
    return n;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;

    return 0;
}