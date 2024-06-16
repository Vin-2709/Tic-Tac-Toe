#include<iostream>
  using namespace std;
  #include<cmath>
  #include<climits>
  int main(){
    
//   int arr[]={1,3,5,6,7,8};  // SYNTAX OF AN ARRAY
//   cout<<arr[4];             // printing element of array




  //FIND THE MAXIMUM VALUE OF AN ARRAY

//   int arr[10]={2,4,6,10,74,23,63,46,2};
//   int max=arr[0];
//   for(int i=0;i<10;i++){
//       if(max<arr[i])  max=arr[i];
//   }
//   cout<<max;






// FIND THE SECOND LARGEST ELEMENT OF ARRAY

//  int arr[10]={2,4,6,10,74,23,63,46,2};
//  int max=INT_MIN;
//  for(int i=0;i<10;i++){
//     if(max<arr[i]) max=arr[i];
//  }
// int smax=INT_MIN;
// for(int i=0;i<10;i++){
//     if(arr[i]!=max  && smax<arr[i]) smax=arr[i];
// }

// cout<<max<<endl;
// cout<<smax;


// TO TAKE INPUT THE ELEMENTS OF AN ARRAY

// int n;
// cout<<"N";
// cin>>n;
// int marks[n];
// cout<<"enter";
// for(int i=0;i<n;i++){
//     cin>>n;
    
// }





// int n=8;
// int arr[8];
// cout<<"Enter the elements of array  ";
// for(int i=0;i<8;i++){
//     cin>>n;
// }
// int x;
// cout<<"X? ";
// cin>>x;
// bool flag=false;
// for(int i=0;i<8;i++){
//     if(x==arr[i]) {flag=true;}
//     else{ flag=false;}

// }
// if(flag==true) {cout<<"ELement is present";}
// else {cout<<"Not found";}



 // TO COUNT THE NO OF ELEMENTS OF AN ARRAY GREATER THAN A INPUT NO.

//  int arr[]={1,3,4 ,53,29,444};
//  int x;
//  cout<<"X?";
//  cin>>x;
//  int count=0;
//  for(int i=0;i<6;i++){
//     if(arr[i]>x) count++;
//  }
// cout<<count;


// int arr[]={2,4,6,3,7,9,1,8};
//      int target =8;
//      int n1=arr[0];
//      for(int i=0;i<=7;i++){
//         if(n1 +arr[i+1]==target) cout<<i<<endl;
//         else n1=arr[i];
//      }


//ARRAY AND POINTERS

// int arr[]={1,45,63,74,52,6,4,56,765,56};
// arr[4]=65;
// cout<<arr[4];
// int * p=arr;
// int size=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<size;i++){
//     cout<<*p<<endl;
//     p++;
// }



   

    //  int arr[10]={1,45,63,74,52,6,4,56,765,55};
    //  int smax=INT_MIN;
    //  int max=INT_MIN;
    //  for(int i=0; i<10;i++){
    //     if(max<arr[i]) {smax=max; max=arr[i];}
    //     else if(smax<arr[i]  && arr[i]!=max) smax=arr[i];

    //  }
    //  if(smax==INT_MIN) cout<<"NO SECOND LARGEST ELEMENT";
    //  else cout<<smax;



//taking input
// cout<<"Enter row no :";
// int m;
// cin>>m;
// cout<<"Enter column no :";
// int n;
// cin>>n;
// int arr[m][n];
// for(int j=0;j<m;j++){
//     for(int i=0;i<n;i++){
//         cin>>arr[j][i];
//     }
//     cout<<endl;
// }
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int minr,minc=0;
int maxr=3;
int maxc=3;
while(minr<=maxr && minc<=maxc){
    //left to right
    if(minr>maxr || minc>maxc)  break;
    for(int i=minc;i<maxc;i++){
        cout<<arr[minr][i];
    }
    minr++;

    // top to bottom
    if(minr>maxr || minc>maxc)  break;
    for(int i=minr;i<maxr;i++){
        cout<<arr[i][maxc];
    }
    maxc--;

    // right to left
    if(minr>maxr || minc>maxc)  break;
    for(int i=maxc;i>minc;i--){
        cout<<arr[maxr][i];                                            //123698745
    }
    maxr--;

   // bottom to top
   if(minr>maxr || minc>maxc)  break;
   for(int i=maxr;i>minr;i--){
    cout<<arr[i][minc];
   }
   minc++;

}








}































  

  

