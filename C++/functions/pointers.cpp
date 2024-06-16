#include<iostream>
using namespace std ;
 

// int a=5;
// int b=8;
// int* p1=&a;
// int* p2=&b;
// // cout<<p1<<endl;
// // cout<<p2;
// cout<<*p1+5;


///     PRODUCT OF TWO NO.S USING POINTERS




// int a=78,b=47;
// int *a1=&a;
// int *a2=&b;
//  cout<<(*a1)*(*a2);















 // SWAP TWO FUNCTIONS USING POINTERS
 

void swap(int*p1,int*p2){

    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    return;


}

int main(){
    int a=17,b=20;
    int *p1=&a;
    int *p2=&b;
    swap(p1,p2);
    cout<<a<<' '<<b;
}
