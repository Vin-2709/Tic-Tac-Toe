#include<iostream>
using namespace std;
#include<stack>
// find next greater element in array -> 
int main(){
    int n=8;
    int arr[n]={3,1,2,5,4,6,2,3};
    stack<int>stc;
    int ans[n];
    ans[n-1]=-1;
    stc.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
         while(stc.size()>0 && stc.top()<=arr[i]){
            stc.pop();
         }
         if(stc.size()==0)  ans[i]=-1;
         else ans[i]=stc.top();
         stc.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
      cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }






}
