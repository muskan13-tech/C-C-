#include<bits/stdc++.h>
using namespace std;

void print_data(){

}

int main(){
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    // cout<<dq.front()<<" ";   
    // cout<<dq.front()<<" ";   
    // cout<<dq.back()<<" ";   
    //for printing all the values 
    for(auto i : dq)
       cout<<i<<" ";
 
    return 0;
}