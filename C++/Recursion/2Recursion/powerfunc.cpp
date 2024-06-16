#include<iostream>
using namespace std;
int power(int a,int b){

    if(b==1) return a;
    if(b==0) return 1;
    if(b%2==0) {
        int ans=power(a,b/2);
        return ans*ans;
    }
    if(b%2!=0) {
        int ans=power(a,b/2);
        return ans*ans*a;
    }


}



int main(){



     cout<< power(2,6);









}