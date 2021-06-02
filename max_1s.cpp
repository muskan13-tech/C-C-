#include<bits/stdc++.h>
using namespace std;

int max_row_1(vector<vector<int>> arr , int n , int m){
   int j=m-1, i=0;
   int result = -1;
   while(j>=0  && i<n){
       while (j>=0 && arr[i][j] == 1)
       {
           j--;
           result = i;
       }
       i++;       
   }
   return result;
}

int main(){
    int n,m;
    cout<<"Rows and column "<<endl;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<max_row_1(arr , n , m);
    return 0;
}
