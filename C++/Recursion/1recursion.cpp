#include<iostream>
using namespace std;
// print from 1 to  n
void print(int n){
      if(n==0) return;      // base case
      print(n-1);
      cout<<n<<endl;
}

//print form n to 1
void pprint(int n){
      if(n==0) return;      // base case
      cout<<n<<endl;
      print(n-1);
}

//factorial
int fact(int  n){
    if(n==0 || n==1 ) return 1;      //base case
    return n*fact(n-1);
}


//print sum from 1 to n
int sum1toN(int n){
    if(n==0) return 0 ;
    return n + sum1toN(n-1);

}

//print sum from 1 to n using other parameter


// a raised to power b
int power(int a,int b){
    if(b==0) return 1;
    
    return a*power(a,b-1);
}












int main (){

     //print(5);
    //  pprint(5);

    //  cout<<fact(5);

//    cout<<sum1toN(5);
   cout<<power(-7,2);
   











}