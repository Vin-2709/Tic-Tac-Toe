#include<iostream>
#include<vector>
using namespace std;
//Used to find hcf
//use long division method to solve in recursion

int gcd(int a,int b){
    if(b%a==0) return a;
    return gcd(b%a,a);
}

int main(){
    int a=27;
    int b=36;
    cout<<gcd(a,b);
}