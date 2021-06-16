#include<bits/stdc++.h>
using namespace std;

class my_queue{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int data){
        s1.push(data);
        cout<<"Data is pushed in the stack : "<<data<<endl;
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty "<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            cout<<"s2 is empty "<<endl;
        }
        int top_value = s2.top();
        s2.pop();
        return top_value;
    }

    bool empty(){
        if(s1.empty() && s2.empty())
          return true;
        else
          return false;  
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

   cout<<q.empty()<<endl;

   return 0;
}