#include<iostream>
using namespace std;


// we are given a 2D matrix and we are beginning position (0,0) , we have to reach (n,n) final position , but we can only move right or down
//using two parameteers only
int grid(int m,int n){
    if(m<1 || n<1) return 0;
    if(m==1 && n==1) return 1;
    int right = grid(m,n-1);
    int down=grid(m-1,n);
    return right+ down;
}


//printing paths taken
void print(int row,int col,string s){
    if(row<1 || col<1) return ;
    if(row==1 && col==1) {
        cout<<s<<endl;
        return;
    }
    print(row,col-1,s +'R');
    print (row-1,col,s+'D');
}

int main(){
   
   print (3,3,"");
//     cout<<grid(5,5);
}