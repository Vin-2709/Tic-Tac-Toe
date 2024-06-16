#include<iostream>
using namespace std;

void disp(int arr[],int n){

    if(n<0) return;
    disp(arr,n-1);
    cout<<arr[n]<<" ";

}


int main(){


int arr[]={1,2,3,4,5,6,7,89,9};
disp(arr,8);



}