#include<bits/stdc++.h>
using namespace std;

class my_queue{
    stack<int> s1;
    stack<int> s2;
public:
  void push(int x){
      s1.push(x);
      cout<<"Data is pushed in the stack : "<<x<<endl;
  }    
   int pop(){
       if(s1.empty()){
           cout<<"Queue is empty \n";
           return -1;
       }
       int top_value = s1.top();
       s1.pop();
       if(s1.empty())
          return top_value;

       int item = pop();
       s2.push(top_value);

       return item;
   }
};

int main(){
   my_queue q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);

   cout<<q.pop()<<endl;

   return 0;
}