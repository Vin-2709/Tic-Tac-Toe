#include<iostream>
using namespace std;
#include<climits>
#include<math.h>
void Reeverse(int arr[],int idx,int n){
     
      if(idx==n){
       
        return;
      }
       
      Reeverse(arr,idx+1,n);
      cout<<arr[idx]<<" ";
     
}




// int Reverse(int n,int i){
//   if(n<10) return n;
//   return (n%10)*pow(10,i-1) + Reverse(n/10,i-1);
// }


int main(){
    // int arr[]={1,2,3,4,5,6,7,9,11,12,13,14,15};
    //  int n=sizeof(arr)/sizeof(arr[0]);
    
    // Reverse(arr,0,n);

 reverse(123000010,0);

  
}