#include<iostream>

using namespace std;

void Quicksort(int arr[], int n)
{
  int low = 0, mid = 0, high = n-1;
  while(mid<=high)
    {
      switch(arr[mid])
      {
        case 0 : swap(arr[low],arr[mid]);
          low++;mid++;
          break;
        case 1:mid++;
          break;
      case 2 :swap(arr[mid],arr[high]);
      high--;
      break;
    }
  }
}

int main()
{
    int n;
    cout<<"Length of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    Quicksort(arr,n);  
    
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
   return 0; 
}