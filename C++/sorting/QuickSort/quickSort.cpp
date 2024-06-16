#include<iostream>
using namespace std;

int partion(int arr[],int si,int ei){
    int pvtele=arr[si];
     int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<pvtele) count++;                  //finding no. of smaller elements than pvt and storing in  count
    }
    int pi=si+count;
    swap(arr[si],arr[pi]);                       // swapping first element with pvt element idx and placing pivot element in its correct position
    int i=si;
    int j=ei;
    while(i<si && j>ei){
        if(arr[i]<pvtele) i++;                                    //arranging smaller elements to left of pvt and greater elements to right of pvt
        else if(arr[j]>pvtele) j--;
        else if(arr[i]>pvtele && arr[j]<pvtele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pi;                               //returning pvt idx
 
}


void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;                      // return when only a single element is left in array
    int pi=partion(arr,si,ei);
    quicksort(arr,si,pi-1);                   // apply same process to left and right subarray of pvt element
    quicksort(arr,pi+1,ei);
   
}


int main(){
     
     int arr[]={4,7,632,78,58,9};
     int n= sizeof(arr)/sizeof(arr[0]);
     int si=0;
     int ei=n-1;
     quicksort(arr,si,ei);
      for(int i=si;i<=ei;i++){
        cout<<arr[i]<<" ";
    }
    



}