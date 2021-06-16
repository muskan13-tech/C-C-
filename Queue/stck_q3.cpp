#include<bits/stdc++.h>
using namespace std;

class my_stack{
   int N;
   queue<int> q1;
   queue<int> q2;
   public:
   my_stack(){
       N=0;
   }
   //push function
   void push(int x){
       q2.push(x);
       N++;
       cout<<x<<" ";
       while(!q1.empty()){
           q2.push(q1.front());
           q1.pop();
       }
       queue<int> temp = q1;
       q1 = q2;
       q2 = temp;
   }
   //pop function 
   void pop(){
       q1.pop();
       N--;
   }
   //size function 
   int size(){
       return N;
   }

   //top function
   int top(){
       return q1.front();
   }
};

int main(){
    my_stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<endl<<st.top()<<endl;
     

    return 0;
}