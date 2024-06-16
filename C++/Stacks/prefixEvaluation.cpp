#include<iostream>
#include<stack>
using namespace std;
//same as postfix evaluation but two difference--
//1. traverse string in reverse order
//2. val1 = first comes out of stack ,val2= second comes out of stack

int solve(int val1 ,int val2,int ch){
    if(ch=='+') return  val1+val2;
    else if(ch=='-') return  val1-val2;
    else if(ch=='*') return  val1*val2;
    else return val1/val2;
}

int main(){
    string s="-/*+79483";
    stack<int>val;
    for(int i=s.length()-1;i>=0;i--){        //reverse traversal
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else{
            int val1=val.top();              //val1
            val.pop();
            int  val2=val.top();            //val2
            val.pop();
            int ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
    
    }
    cout<<val.top();
}