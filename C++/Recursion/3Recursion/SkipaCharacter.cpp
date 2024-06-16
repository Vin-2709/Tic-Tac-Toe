#include<iostream>
#include<string>
using namespace std;

//we want to skip "a" from a string
void skip(string ans,string org,int idx){
 
    if(idx==org.size()) {
        cout<<ans;
        return;

    char ch=org[idx];
    if(ch=='a') skip(ans,org,idx+1);
    else skip(ans+ch,org,idx+1);
}
}


int main(){
    skip("","aakash",0);
}