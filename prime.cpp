#include<iostream>
using namespace std;

void primeNUM(int n)
{
    bool check=false;
   for(int i=2;i<n;i++)
   {
       if(n%i==0)
       { check = true;
        break;}
   }
   if(check)
   cout<<"IS PRIME "<<endl;
   else
   {
       cout<<"NOT PRIME"<<endl;
   }
   
}

int main()
{
   int n;
   cin>>n;
   primeNUM(n);

   return 0;
}
