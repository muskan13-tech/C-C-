#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int *ptr=&n;
    cout<<*ptr<<endl;
    cout<<n<<endl;
    cout<<&n<<endl;

    ptr++;
    cout<<ptr<<endl;

    return 0;
}