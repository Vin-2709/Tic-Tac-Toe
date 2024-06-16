#include<iostream>
#include<vector>
#include<string>
using namespace std;



void reverse(int n,int r){
  if(n==0){
    cout<<r;
    return;
  }
  reverse(n/10,r*10+(n%10));
}



int main(){
    
    reverse(14780200,0);
}