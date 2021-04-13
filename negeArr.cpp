#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int n;
	n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n,greater<int>()); 

	for(int i=n-1;i>=0;i--)
	 cout<<arr[i]<<" ";
	return 0;
}