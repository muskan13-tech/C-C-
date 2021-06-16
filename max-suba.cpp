#include<bits/stdc++.h>
using namespace std;

vector<int> max_suba(int *arr , int n ,int k){
    vector <int> answer;
    deque<int> dq;
    for(int i=0;i<k;i++){
       while(!dq.empty() and arr[dq.back()]<arr[i]){
           dq.pop_back();
       }
        dq.push_back(i);
    }
    answer.push_back(arr[dq.front()]);
    for(int i=k;i<n;i++){
        if(dq.front() == i-k){
            dq.pop_front();
        }
        while(!dq.empty() and arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        answer.push_back(arr[dq.front()]);
    }
    return answer;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = max_suba(arr , n ,k);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}