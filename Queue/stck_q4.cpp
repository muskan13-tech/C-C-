#include<bits/stdc++.h>
using namespace std;

class my_stack{
    queue<int> q1;
    queue<int> q2;
    int N;
    public:
    my_stack(){
        N=0;
    }

    void push(int x){
        q1.push(x);
        N++;
        cout<<x<<" ";
    }


    void pop(){
     if(q1.empty()){
         return;
     }
     while(q1.size() != 1){
         q2.push(q1.front());
         q1.pop();
     }
    q1.pop();  // pop the last element ;
    N--;
    
    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;

    }
};

int main(){
    my_stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    st.pop();

}