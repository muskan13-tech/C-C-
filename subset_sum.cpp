#include<bits/stdc++.h>
using namespace std;


bool check(int n,int arr[] , int sum){
    if(sum == 0) return true;
    if(n == 0) return false;

    if(arr[n-1]>sum){
        return check(n-1,arr,sum);
    }
    return check(n-1,arr,sum) || check(n-1 , arr , sum-arr[n-1]);
}

int main(){
    int n , sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<check(n,arr,sum);
    return 0;
}