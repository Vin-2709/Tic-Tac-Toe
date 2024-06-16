#include<iostream>
#include<vector>
using namespace std;
  
  void Merge(vector<int>&a,vector<int>&b,vector<int>&v){
        
        int i=0,j=0,k=0;
        while(i<a.size() && j<b.size()){
            if(a[i]>b[j]) v[k++]=a[i++];
            else v[k++]=b[j++];
        }

        if(i==a.size()){
            while(j<b.size()) v[k++]=b[j++];
        }
        if(j==b.size()){
            while(i<b.size()) v[k++]=a[i++];
        }

  }

  void mergesort(vector<int>&v){
    
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n1;
    vector<int>a(n1), b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    Merge(a,b,v);
  }

  int main(){

    vector<int>v;
    v={5,6,7,4,8,2,78,241,98,80,-567};
    mergesort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

  }