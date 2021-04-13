#include<iostream>
#include<string>
using namespace std;

int setBit(int n, int pos)
{
    return(n|(1<<pos));
}
int main()
{
   int t;
   cin>>t;
   while(t<0)
   {
       int n,k;
       cin>>n>>k;
       string A;
       cin>>A;
       cout<<setBit(n,k)<<endl;
   }
   
   return 0;
}