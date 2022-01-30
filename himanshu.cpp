#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , m;
	cin>>n >>m;
	int a1[n] , a2[m];
	vector<int> b1 ,b2;
	for(int i=0;i<n;i++){
		cin>>a1[i];
		b1.push_back(a1[i]);
	}
	for(int i=0;i<m;i++){
		cin>>a2[i];
		b2.push_back(a2[i]);
	}

	set<int> s1(b1.begin() , b1.end());
	set<int> s2(b2.begin() , b2.end());
	
	vector<int> v1;
	for(auto x:s1){
        v1.push_back(x);
	}
    for(auto x:s2){
        v1.push_back(x);
	}

	
	sort(v1.begin(), v1.end());
	int len = v1.size();
	if(len%2 == 0){
		cout<<v1[len/2 + 1]<<endl;
	}
	else
	 cout<<v1[len/2];

	return 0; 
}