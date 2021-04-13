#include<iostream>
#include<string>

using namespace std;

int main()
{
    string n;
    int k;
    cout<<"Enter the required number "<<" "<<"and the digit of rotations"<<endl;
    cin>>n >>k;
    for(int i=0;i<k;i++)
    {
        if(n[i]=='9')
         k+=1;
        n[i]='9'; 
    }
    cout<<n;

    return 0;
}