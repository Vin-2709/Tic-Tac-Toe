#include<iostream>
using namespace std;

int recursion(int a,int b){
    if(a>b) return 0;
    
     if(a%2==0) {
      
      return recursion(a+1,b);
      }
     
     return  a+recursion(a+2,b);

           

}



int main(){


    cout<<recursion(2,10);
}