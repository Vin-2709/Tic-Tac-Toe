#include<iostream>
#include<vector>
using namespace std;






   


//Merging two sorted arrays
void merge(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0,j=0,k=0;
    int n=v.size();
    while(i<a.size() && j<b.size()) {
         if(a[i]<b[j])  v[k++]=a[i++];
        else  v[k++]=b[j++];  
    }
       
    if(i==a.size()) while(j<b.size()) v[k++]=b[j++];
    else if(j==b.size()) while(i<a.size()) v[k++]=a[i++];   
}


void mergesort(vector<int>&v){
    
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n1;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++)  b[i]=v[i+n1];
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
    
}



int main(){
    vector<int>v;
    v={1,15,2,333,7,8,49,9};
    mergesort(v);
    
    // vector<int>a, b;
    // a={1,2,3,4};
    // b={5,6,7,8};
    // int n1=a.size();
    // int n2=b.size();
    // vector<int>v(n1+n2);
    // merge(a,b,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
          } 
   




}