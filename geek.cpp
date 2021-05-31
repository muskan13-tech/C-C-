#include<iostream>
using namespace std;
int main(){
    int H[3];
    for(int i=0;i<3;i++){
        cin>>H[i];
    }
    int count=0;
        for(int i=0;i<=3;i++){
            if(H[i-1]>=H[i]){
                count++;
            }
        }
    cout<<min(count,max(8,8-count));
}