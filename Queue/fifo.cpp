#include<bits/stdc++.h>
using namespace std;

#define n 20

class Queue{
    int  *arr;
    int front;
    int back;
    public:
    Queue(){
        front = -1;
        back = -1;
    }

    void push(int value){
        if(back==n-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        back++;
        arr[back] = value;

        if(front == -1){
            front++;
        }
    }
};