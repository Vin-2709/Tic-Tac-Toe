#include<iostream>
using namespace std;
int main (){

      //  int arr[]={2,3,4,1,5,7,8,46,86,97};
      //  int n=sizeof (arr)/sizeof (arr[0]);
      //  int x=96;

       // LINEAR SEARCH         it is simple search by using loops . its time complexity is O(n) 
      
    //    bool flag=true;
    //   for (int i=0;i<n;i++){
        
    //     if(arr[i]==x) {cout<<i;
    //     flag=false;
    //      break;}
    //    
    //   }
    //   if(flag==true) cout<<"Element not found";



      // BINARY SEARCH        Sorted array ,  it reduces TC O(logn) by converting search space into half 

    //     int L=0;
    //     int H=n-1;
    //     bool flag=true;
    //  while(L<=H){
    //    int M= (L+H)/2;
    //     if(arr[M]==x){ 
    //     cout<< M ; 
    //     flag=false;
    //     break;}
    //     else if(arr[M]<x) L=M+1;
    //     else H=M-1;
    //  }
    // if(flag==true)cout<<"NO ELEMENT";




    //TO FIND LOWER BOUND OF AN ELEMENT WHICH MAY OR MAY NOT BE PRESENT IN THE ARRAY
    
    //     int L=0;
    //     int H=n-1;
    //     bool flag=true;
    //  while(L<=H){
    //    int M= (L+H)/2;
    //     if(arr[M]==x){                   //if element is present
    //     cout<< arr[M-1] ;                // arr[m-1] is lower bound
    //     flag=false;
    //     break;}
    //     else if(arr[M]<x) L=M+1;
    //     else H=M-1;
    //  }
    // if (flag==true){cout<<arr[H];}             // if element not present    High is the lower bound 


   

    //TO FIND UPPER BOUND


    //     int L=0;
    //     int H=n-1;
    //     bool flag=true;
    //  while(L<=H){
    //    int M= (L+H)/2;
    //     if(arr[M]==x){                   //if element is present
    //     cout<< arr[M+1] ;                //arr[m+1] is upper bound
    //     flag=false;
    //     break;}
    //     else if(arr[M]<x) L=M+1;
    //     else H=M-1;
    //  }
    // if (flag==true){cout<<arr[L];}      // arr[l] is upper obund
       





    // TO FIND FIRST OCCURENCE OF AN ELEMENT WHICH IS BEING REPEATED

//     int ar[]={11,12,4,4,4,4,6,7,7,7,7,8,5,5,5,5,9,0,0,0,0,0};
//     int s=sizeof(ar)/sizeof(ar[0]);
//     int x=8;
//     int L=0;
//     int H=s-1;
//     bool flag=false;
//     while(L<=H){
//       int M=(L+H)/2;
//       if(ar[M]==x){
//         if(ar[M-1]!=x){
//           flag=true;
//           cout<<M;
//           break;
//         }
//         else{
//           H=M-1;
//         }
//       }
//       else if(ar[M]<x) L=M+1;
//       else H=M-1;

// }
// if(flag==false) cout<<-1;


//FIND FIRST MISSING POSITIVE INTEGER IN THE ARRAY


// int arr[]={0,1,2,3,4,5,6,7,9,67};
// int n=sizeof (arr)/sizeof (arr[0]);
//     int L=0;
//     int H=n-1;
//     int ans=0;
//     while(L<=H){
//       int M=(L+H)/2;
//       if(arr[M]==M) L=M+1;
//       else{ 
//         ans=M;
//         H=M-1;
        
//       }
      
//     }
//     cout<<ans;
   //    int a[] = {0,0,0,0,1,1};
   //   int n=sizeof(a)/sizeof(a[0]);
   //   int l=0;
   //   int h=n-1;
   //   int count=0;
   //   while(l<h){
   //       int m=(l+h)/2;
   //       if(a[m]==1){
   //          count++;
   //          if(a[m-1]==1) h=m-1,count++;
   //          else if(a[m+1]==1) l=m=1,count++;
   //       }
   //       else if(a[m]<1) l=m+1;
   //       else h=m-1;


   //       }
   //       cout<<count;


 

      










}