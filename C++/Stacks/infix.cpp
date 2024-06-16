#include<iostream>
#include<stack>
using namespace std;


int prior(char ch){
    if(ch=='+' || ch=='-' ) return 1;
    else return 2;
}

int solve(int ch1,int ch2,char opr){
    if(opr=='+') return  ch1+ch2;
    else if(opr=='-') return  ch1-ch2;
    else if(opr=='*') return  ch1*ch2;
    else return ch1/ch2;


}
int main(){
    stack<int>val;
    stack<char>op;
    string s="3*27/3";
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){         //  check if s[i]=0-9
           val.push(s[i]-48);
        }
        else{
             if(op.size()==0 || prior(s[i]>prior(op.top()))) op.push(s[i]);
             else {
                //work
                while(op.size()>0 && prior(s[i]<=prior(op.top()))){
                char op1=op.top();
                op.pop();
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                
                int val3=solve(val1,val2,op1);
                val.push(val3);
                }
                op.push(s[i]);
             }
             
        }
    }
    while( op.size()>0){
        //work
        char op1=op.top();
        op.pop();
         int val2=val.top();
         val.pop();
        int val1=val.top();
        val.pop();
        
        int val3=solve(val1,val2,op1);
        val.push(val3);
        
    }
    cout<<val.top()<<endl;
    

}