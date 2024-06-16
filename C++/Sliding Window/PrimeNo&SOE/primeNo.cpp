#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool prime(int n){
    // for(int i=2;i<n;i++){
    for(int i=2;i<sqrt(n);i++){      //to reduce time complexity
        if(n<2) return false;
        if(n%i==0) return false;
    }
    return true;
}

void printFactors(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }
    // for(int i=sqrt(n);i>=1;i--){
    //     if(n%(n/i)==0) cout<<n/i<<" ";
    // }
    for(int i=1;i<sqrt(n);i++){
        if(n%(n/i)==0) cout<<n/i<<" ";
    }
}

int main(){
       
    //   cout<< prime(41);
       printFactors(42);
}
