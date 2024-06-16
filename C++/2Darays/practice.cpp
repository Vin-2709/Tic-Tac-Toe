#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void disp(int n,int m, int arr){
    int m;
    int n;
    cout<<"Enter row and column no.";
    cin>>m>>n;
    cout<<"Enter elements";
    int arr[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[m/2][i];
    }


}
int main(){
    // //ADDING TWO MATRIX
    // int matA[3][2]={{1,2},{3,4},{5,6}};
    // int matB[3][2]={{1,3},{7,9},{8,5}};
    // int n=3;
    // int m=2;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //             cout<<(matA[i][j]=matA[i][j] + matB[i][j])<<" ";

    //     }
    //     cout<<endl;
    // }




    //FIND LARGEST ELEMENT OF MATRIX
    // int max=INT_MIN;
    // int n=3;
    // int m=3;
    // int arr[3][3]={{1,2,19},{17,18,16},{361,54,296}};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr[i][j]>max)  max=arr[i][j];
        
    //     }
    // }
    // cout<<max;
   disp;

}


// MAKING A FUNNCTION
