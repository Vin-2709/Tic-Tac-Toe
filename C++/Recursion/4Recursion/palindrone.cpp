#include<iostream>
#include<string>
using namespace std;

//Palindrone is a word which is same if pronounced from end . eg- racecar
//return true if a input word is palindrone 
bool palidrone(string s,int i,int j){
       if (i>j) return true;
       if(s[i]!=s[j]) return false;
       else return palidrone(s,i+1,j-1);
}


int main(){
    string s;
    cin>>s;
    int n=s.size()-1;
    cout<<palidrone(s,0,n);
}