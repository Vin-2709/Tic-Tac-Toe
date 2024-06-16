#include<iostream>
#include<vector>
 using namespace std;




//1.SORT THE ARRAYS OF 0'S AND 1'S


//1st method

//Creating function
// void sort1(vector<int>& v){
//     int no0=0; 
//     int no1=0;
//     for(int i=0; i<v.size();i++){
//         if(v[i]==0)  no0++;
//         else{
//             no1++;
//         }
    
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<no0) v[i]=0;
//         else v[i]=1;
//     }

    

//  }

// int main (){

//    vector<int>v1;
//    v1.push_back(0);
//    v1.push_back(1);
//    v1.push_back(0);
//    v1.push_back(1);
//    v1.push_back(0);
//    v1.push_back(0);
//    v1.push_back(0);
//    v1.push_back(1);

//   for(int i=0;i<v1.size();i++){
//       cout<<v1[i]<<" ";
//    }
//    cout<<endl;


//    sort1(v1);
//    for(int i=0;i<v1.size();i++){
//       cout<<v1[i]<<" ";
//    }



// }



//2nd method  TWO POINTER METHOD


// void sort2(vector<int>&v){                       //creating a function
//     int n=v.size();
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         if(v[i]==1 && v[j]==0){ v[i]=0 ,v[j]=1;};                  //swapping 
//         i++;
//         j--;
//         if(v[i]==0) i++;
//          if(v[j]==1) j--;
//     }
//     }


// int main(){

//   vector<int>v1;
//   v1.push_back(0);
//   v1.push_back(1);
//   v1.push_back(0);
//   v1.push_back(1);
//   v1.push_back(1);
//   v1.push_back(0);
//   v1.push_back(1);

//   for(int i=0;i<v1.size();i++){
//     cout<<v1[i]<<" ";
//   }
//   cout<<endl;

//   sort2(v1);
//    for(int i=0;i<v1.size();i++){
//     cout<<v1[i]<<" ";
//   }

// }

// rest questions on leetcode-75,88,31


//********************** ASSIGNMENT QUESTIONS*****************





// int main (){
// int arr[]={2,3,5,3,7,8};

// calculate product of all elements ina array


// int count=1;
// int size=sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<size;i++){
//     count*=arr[i];
    
// }
// cout<<count;



//FIND THE SECOND LARGEST ELEMENT OF AN ARRAY IN ONE PASS ONLY

// #include<climits>

// int main(){
   

//      int arr[11]={1,45,63,74,74,52,6,4,56,765,55};
//      int smax=INT_MIN;
//      int max=INT_MIN;
//      for(int i=0; i<10;i++){
//         if(max<arr[i]) {smax=max; max=arr[i];}
//         // else if(smax<arr[i]  && arr[i]!=max) smax=arr[i];

//      }
//      if(smax==INT_MIN) cout<<"NO SECOND LARGEST ELEMENT";
//      else cout<<smax;






// }



//FIND MINIMUM ELEMENT OF ANA ARRAY

// int main(){
   

//      int arr[10]={1,45,63,74,52,6,4,56,765,55};
//       int min=INT_MAX;
//      for(int i=0;i<=10;i++){
       
//         if(min>arr[i]) min=arr[i];


//      }
//     cout<<min;









// 


//TO FIND DUPLICATE ELEMENTS


// int main() {
// int arr[5]={1,2,2,4,5};

// for(int i=0;i<5;i++){
//   for(int j=i+1;j<5;j++){
//    if(arr[i]==arr[j]){

//    cout<<arr[i];
// }
//   }
// }
// }



// TO PRINT DIFFERENCE OF ELEMENTS PLACED AT INDICES EVEN AND ODD

// int main(){
   

//      int arr[10]={1,45,63,74,52,6,4,56,765,55};
//      int sum1=0;
//      int sum2=0;
//      for(int i=0;i<10;i++){
//       if(i%2==0) sum2 += arr[i];
//       else sum1 += arr[i];


//      }
//      cout<<sum2-sum1;

// }



//TO FIND ARAY IS SORTED OR NOT

// int arr[]={1,296,3,4,7,61,61};
//     bool flag=false;
//     for(int i=0;i<5;i++){
//         if(arr[i]>arr[i+1]) flag=true;
        
//     }
//     if(flag==true) cout<<"Not Sorted";
//     else cout<<"Sorted";


// // CHANGE VALUE OF ODD INDEX TO SECOND MULTIPLE AND INCREMENT ALL EVEN INDEXED ELEMENT BY 10

int main(){
   
// //       int arr[10]={1,2,3,4,5,6,7,8,9,10};

//     for(int i=0;i<10;i++){
//       if(i%2 !=0) arr[i]=2*arr[i];
//       else arr[i]=arr[i]+10;
//     }

// for(int i=0;i<10;i++){
//   cout<<arr[i]<<"  ";

// }
// }



//to find no of triplet whose sum is equal to  a given number




//MOVE ALL ZEROES TO END OF ARRAY
// void swap(int x,int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }
//     int main (){
        
// int arr[11]={1,0,4,5,0,6,9,0,0,1,2};


// for(int i=0;i<11;i++){
//     if(arr[i]==0) swap(arr[i+1],arr[i+1]);
// }
// for(int i=0;i<11;i++){
//     cout<<arr[i]<<" ";
// }

// int arr[]={1,2,3,4,7,6};
//     bool flag=false;
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<6;j++){
//             if(arr[i]>arr[j]) flag=true;
//         }
//     }
//     if(flag==true) cout<<"Not Sorted";
//     else cout<<"Sorted";

   
int arr[10]={1,0,7,5,6,0,0,2,0,4};
int noZ=0;
for(int i=0;i<10;i++){
    if(arr[i]==0) noZ++;
}
vector<int>v;
for(int i=0;i<10;i++){
    if(arr[i]!=0) v.push_back(arr[i]);
}
for(int i=0;i<noZ;i++){
    v.push_back(0);
}
for(int i=0;i<10;i++){
    cout<<v[i]<<" ";
}


}





