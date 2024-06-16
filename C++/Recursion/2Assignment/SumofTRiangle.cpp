#include<iostream>
#include<vector>
using namespace std;



void sum(vector<int>v,int size){

    if(size==0){
      return;
    }
       for(int i=0;i<size;i++){
         cout<<v[i]<<" ";
         v[i]=v[i]+v[i+1];
       }
       cout<<endl;

       sum(v,size-1);
       

      
}

int main(){
   vector<int>v={1,2,3,4,5};
   sum(v,5);

}