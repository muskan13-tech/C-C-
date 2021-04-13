#include<iostream>
using namespace std;
int Sum(int n)
{
    if(n==0)
     return 0;
    int NewSum = Sum(n-1);
    return NewSum + n; 
}

int main()
{
    int n;
    cin>>n;
    cout<<Sum(n)<<endl;

    return 0;
}