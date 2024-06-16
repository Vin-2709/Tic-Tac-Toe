#include<iostream>
using namespace std;

//No. of ways to climb a staircase with given (n) size if 1 or 2 steps can be taken at a time
int stair(int n){

    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+ stair(n-2);

    }



int main(){


    cout<<stair(6);
}