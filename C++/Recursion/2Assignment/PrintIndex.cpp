#include<iostream>
using namespace std;

void Print(int arr[],int idx,int n){

   if(idx==n) return;
    cout<<idx;
    Print(arr,idx+1,n);

}

int main(){
    int arr[]={2,3,4,5,6,7,8,};
}