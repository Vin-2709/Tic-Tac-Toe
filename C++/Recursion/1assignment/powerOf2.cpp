#include<iostream>
using namespace std;

bool power(int a){
   
    if(a==1) return true;
    if(a%2!=0 || a==0) return false;
   
    return power(a/2);
   
}



int main(){
    power(64);
}