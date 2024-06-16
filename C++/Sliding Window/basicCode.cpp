#include<iostream>
using namespace std;
int main(){

    //finding maximum sum of subarray of size k.
    int arr[]={2,3,4,51,456,34,2,4,5};
    int k=3;
    int maxsum=0;
    int sum=0;
    int maxidx=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    //calculating sum of first window
    for(int i=0;i<k;i++){           
        sum+=arr[i];
    }
    maxsum=sum;
  
  //initialising sliding window
  int i=1,j=k;
  while(j<n){
    sum+=arr[j]-arr[i-1];
    if(maxsum<sum) {
        maxsum=sum;
        maxidx=i;
    }
    i++;
    j++;

  }
  cout<<maxsum<<" "<<maxidx;

}