#include<iostream>
#include<vector>
using namespace std;

int main(){


//     int arr[]={1,2,3,4,7,6};
//     bool flag=false;
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<6;j++){
//             if(arr[i]>arr[j]) flag=true;
//         }
//     }
//     if(flag==true) {cout<<"Not Sorted";}
//     else {cout<<"Sorted";}
// }

//DECLARATION
// int arr[2][4]={{1,2,3,4},{5,6,7,8}};
// for(int i=0;i<2;i++){
//     for(int j=0;j<4;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

//vectors in 2D



//DECLARATION

// vector<vector<int>>v;
// v={{1,2,3},{4,5,6}};
// int row=v.size();           //ROW SIZE
// int column=v[0].size();     //COLUMN SIZE
// cout<<row<<" "<<column;

// vector<vector<int>>m(4,vector<int>(5));        //DECLARING WITH ROW SIZE AND COLUMN SIZE 4,5



//TAKING INPUT OF 2D MATRICES
// int m;
// cout<<"ENTER ROW NO.";
// cin>>m;
// cout<<"ENTER COLUMN NO.";
// int n;
// cin>>n;
// int arr[m][n];
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cin>>arr[i][j];
//     }
// }

// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;

// }










// MATRIX MULTIPLICATION 

// int a1[3][2]={{1,2},{4,5},{7,8}};
// int a2[2][3]={{2,3,4},{5,6,7}};
// int res[3][3];
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         res[i][j]=0;
//         for(int k=0;k<2;k++){
            
//             res[i][j]+=a1[i][k]*a2[k][j];
//         }
//      }
// }

// //print
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<res[i][j]<<" ";
//     }
//     cout<<endl;
// }






//// TO PRINT A MARIX IN A SPIRAL FORM

//taking input
// cout<<"Enter row no :";  
// int m;
// cin>>m;                                                         //NOT WROKING
// cout<<"Enter column no :";
// int n;
// cin>>n;
// int arr[m][n];
// for(int j=0;j<m;j++){
//     for(int i=0;i<n;i++){
// //         cin>>arr[j][i];
//     }
    
// }

// cout<<endl;

// // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int minr,minc=0;
// int maxr=m;
// int maxc=n;
// while(minr<=maxr && minc<=maxc){
//     //left to right
//     if(minr>maxr || minc>maxc)  break;
//     for(int i=minc;i<maxc;i++){
//         cout<<arr[minr][i]<<" ";
//     }
//     minr++;

//     // top to bottom
//     if(minr>maxr || minc>maxc)  break;
//     for(int i=minr;i<maxr;i++){
//         cout<<arr[i][maxc]<<" ";
//     }
//     maxc--;

//     // right to left
//     if(minr>maxr || minc>maxc)  break;
//     for(int i=maxc;i>minc;i--){
//         cout<<arr[maxr][i]<<" ";                                            //123698745
//     }
//     maxr--;

//    // bottom to top
//    if(minr>maxr || minc>maxc)  break;
//    for(int i=maxr;i>minr;i--){
//     cout<<arr[i][minc]<<" ";
//    }
//    minc++;

// }
















}