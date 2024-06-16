#include<iostream>

using namespace std;
int main(){ 
    
    int arr[]={23,4,12,5,47,86,98};
    int n=7;
    for(int i=0; i<n-1;i++){
        int min=1000;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){ min=arr[j];
            mindx=j;}
            
        }
        swap(arr[i],arr[mindx]);
        
    }

   for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }


}
