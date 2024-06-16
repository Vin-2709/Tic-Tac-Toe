#include<iostream>
#include<string>
using namespace std;

// we have to find all possible permutations of a given string. abc--> acb,bca,bac......
void permutations(string ans,string original){
    if(original=="") {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.size();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutations(ans+ch,left +right);   
    }
}

int main(){
    permutations("","abcde");
}