#include<iostream>
#include<vector>
#include<string>
using namespace std;


//for given n,generate all binary strings without 1 being written together twice or more.
//eg- for n=2   00,01,10,

void binary(int n,string s){
    if(s.length()==n){
        cout<<s<<endl;  
        return; 
    }
    binary(n,s+'0');
    if( s==""  ||  s[s.length()-1]=='0') binary(n,s+'1');                   //only append 1 if last element is not 1   
}

int main(){
    
    binary(2,"");
}