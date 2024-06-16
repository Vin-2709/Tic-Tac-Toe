#include<iostream>
#include<vector>
using namespace std;
int c=0;

int inversion(vector<int>&a,vector<int>&b){
    int count=0;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[i]) {
            count+=(a.size()-i);
            j++;
        }
        else{
             i++;
        }
    }
    return count;
}
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
    c+=inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    
}



int main(){
    
    
    // vector<int>a, b;
    // a={1,2,3,4};
    // b={5,6,7,8};
    // int n1=a.size();
    // int n2=b.size();
    // vector<int>v(n1+n2);
    // merge(a,b,v);

    
    vector<int>v;
    v={5,1,3,0,4,9,6};
    mergesort(v);
    
    cout<<c;
   




}