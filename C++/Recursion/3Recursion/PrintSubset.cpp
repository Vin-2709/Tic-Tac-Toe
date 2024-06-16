#include<iostream>
#include<string>
using namespace std;

//print all subsets of a string 
//using substrings
void subset (string ans,string org){

    if(org==""){
        cout<<ans<<endl;
        return;
    }
    char ch=org[0];
    subset(ans,org.substr(1));
    subset(ans+ch,org.substr(1));

}

//using extra parameter
void Subset (string ans,string org,int idx){

    if(idx==org.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=org[idx];
    Subset(ans,org,idx+1);
    Subset(ans+ch,org,idx+1);

}





int main(){
    Subset("","abc",0);
}