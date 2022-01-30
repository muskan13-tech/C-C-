#include<bits/stdc++.h>
using namespace std;

int main(){
   unordered_set<int> s;
   s.insert(10);
   s.insert(9);
   s.insert(0);
   s.insert(5);
   s.insert(1);

   for(auto it = s.begin() ; it != s.end();it++){
      cout<<(*it)<<" ";
   }
   cout<<"\n"<<s.size()<<"  is the size of the set "<<endl;
  // s.clear();
   //cout<<s.size()<<"  is the size of the set "<<endl;
    int k = 19;
    if(s.find(k) != s.end()){
        cout<<"Found"<<endl;
    }else
      cout<<"Not Found "<<endl;

   return 0;
}