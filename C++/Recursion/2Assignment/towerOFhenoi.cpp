#include<iostream>

using namespace std;

void Henoi(int n,char s,char h,char f){
    
    if(n==0) return ;
    
    Henoi(n-1,s,f,h);
    cout<<s<<" --> "<<f<<endl;
    Henoi(n-1,h,s,f);

}

int main(){
    
    Henoi(3,'A','B','C');
}