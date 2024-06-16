#include<iostream>
using namespace std;
#include<vector>
int main (){
      
      // FIND THE LAST OCCURENCE OF THE ELEMENT IN A SORTED ARRAY

    //   int arr[] = {1,2,3,3,4,4,4,5};
    //   int x=4;
    //   int n=sizeof(arr)/sizeof(arr[0]);
    //   int l=0;
    //   int h=n-1;
    //   bool flag=false;
    //   while(l<=h){
    //     int m=(l+h)/2;
    //     if(arr[m]==x){
    //         if(arr[m+1]!=x){
    //             h=m-1;
    //             cout<<m;
    //             flag=true;
    //         }
    //         else l=m+1;
        
            
    //     }
    //     else if(arr[m]<x) l=m+1;
    //     else h=m-1;
    //   }

    // if( flag==false) cout<<"-1";







//  Given a sorted binary array, efficiently count the total number of 1’s in it. 

//******************NOT RUNNING

    // int a[] = {0,0,0,0,1,1};
    //  int n=sizeof(a)/sizeof(a[0]);
    //  int l=0;
    //  int h=n-1;
    //  int count=0;
    //  while(l<h){
    //      int m=(l+h)/2;
    //      if(a[m]==1){
    //         count++;
    //         if(a[m-1]==1){ h=m-1;count++;}
    //         else if(a[m+1]==1) {l=m=1;count++;}
    //      }
    //      else if(a[m]<1) l=m+1;
    //      else h=m-1;


    //      }
    //      cout<<count;



     
//Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not

// int n;
// cin>>n;
// vector<int>v;
// for(int i=0;i<=n;i++){
//     v.push_back(i);
// }
// int l=0;
// int h=v.size();
// bool flag=false;
// while(l<=h){
//     int m=(l+h)/2;
//     if(m*m==n){

//      cout<<m;
//      flag=true;
//      break;

// }
// else if(m*m>n) h=m-1;
// else{
//     l=m+1;
// }





// }
// if(flag==false)cout<<"Not a perfect square";


// COUNT NO OF ONES IN A SORTED ARRAY

//  int arr[]={0,0,0,0,1,1,1,1,1,1,1,1,1};
//  int l=0;
//  int n=sizeof (arr)/sizeof (arr[0]);
//  int h=n-1;
//  int x=1;
//  int frst=-1;
//  while(l<=h){
//     int m=(l+h)/2;
//     if(arr[m]==x){
//         if(arr[m-1]!=x){
//              frst=m;
//              break;
//         }
//         else h=m-1;
//       }
//     else if(arr[m]<x) l=m+1;
//     else h=m-1;
//  }
//  if(frst==-1) cout<<0;
//  else cout<<n-frst;



 // COUNT NO OF ONES IN A MATRIX OF M ROWS AND N COLUMNS

//  int arr[5][6]={{0,0,0,0,1,1},{0,0,0,0,0,1},{1,1,1,1,0,0},{0,1,1,0,1,1},{1,1,1,1,1,1}};
 
//  int s=sizeof (arr)/sizeof (arr[0]);
 
//  int m=5;
//  int n=6;
//  int x=1;
//  int maxO=0;
//  int maxr=0;
//  for (int i=0;i<n;i++){
//     int l=0;
//     int h=s-1;
//     int count=0;
//     int frst=-1;
//   while(l<=h){
//     int mid=(l+h)/2;
//     if(arr[i][mid]==x){
//         if(arr[i][mid-1]!=x){ 
//              frst=mid;
//              break;
//         }
//         else h=mid-1;
//       }
//     else if(arr[i][mid]<x) l=mid+1;
//     else h=mid-1;
    
//  }

//  if(frst==-1) cout<<0;
//  if(count>maxO){
//       maxO=count;
//       maxr=i;
//     }
//  cout<<maxO<<" "<<maxr;



//  }



// RETURN THE ONLY REPEATED NUMBER IN THE ARRAY
// [1,2,3,4,5,5,6]



// int arr[]={1,2,3,4,4,5,6,7};
// int s=sizeof (arr)/sizeof (arr[0]);
// int l=0;
// int h=s-1;
// while(l<=h){
//   int mid=(l+h)/2;
//   if(arr[mid]==mid+1) l=mid+1;
//   else if(arr[mid]==mid){
//     if(arr[mid-1]==arr[mid]) {
//       cout<<arr[mid];
//       break;
//     }
//     else h=mid-1;

//   }
// }

 









}