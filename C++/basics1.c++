#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int fun1(int n,int x){
  if(n>0) return ((n%x) +fun1(n/x,x));
  else return 0;
}
int main (){
// //basic
// cout <<"how are you"<<endl;

 

//increment and deccrement
// int i=7;
// cout<<i++<<endl;   //preincrement(prints then increases)

// cout<<++i<<endl;   //postincrement(increases then prints)

// cout<<i--<<endl;


// cout<<--i<<endl;


// bool x=1;
// bool y=0;
// cout<< x;

// int x=10;
// int y=12;
// cout<<"The value of X is "<<x<<" only and the value of Y is "<<y<<endl;
// x+=1;
// cout<<x;
  // cout<<"*"<<endl;
  // cout<<"**"<<endl;
  // cout<<"***"<<endl;
  // cout<<"****"<<endl;


  //typecasting
  // char ch='a';
  // cout<<(int)ch;
  
  // cout<<(char)97;


//  for(int i=0;i<=8;i++) {
//       char ch='a';
//       cout<<(char)('A'+ i);

//  }

// cout<<fun1(513,3);

// int n=123553;
// string s=to_string(n);
// cout<<s;
vector<int>v;
v={2,34,56,6,4,32,3};
int maxi=max(2,4);
cout<<maxi;









 
}