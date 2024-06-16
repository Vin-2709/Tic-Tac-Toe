#include<iostream>
using namespace std;
int main(){ 

int arr[]={23,4,12,5,47,86,98};
    int n=7;
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
          swap(arr[j],arr[j-1]);
          j--;
        }
    }

for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }



}