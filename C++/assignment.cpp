#include<iostream>
using namespace std;
int main (){
  
  // int a=4; 
  // int b=5;
  // a++; b--;
  // cout<<++a<<" "<<b--;

  int n;
  cin>>n;
  int sum=0;
  for(int i=0;i<=n;i++){
    int l=n%10;
    n/=10;
    int c=l*l*l;
    sum=sum+c;
     if(sum==i)
     cout<<i;
  }




}