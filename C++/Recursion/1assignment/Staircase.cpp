#include<iostream>
using namespace std;

int staircase(int n){
    if(n==3) return 4;
    if(n==2) return 2;
    if(n==1) return 1;
    int first=staircase(n-1);
    int second=staircase(n-2);
    int third=staircase(n-3);
    return  first+second+third;
}
 

int main(){

  cout<< staircase(90);
}