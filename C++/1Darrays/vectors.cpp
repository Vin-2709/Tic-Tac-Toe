#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;
  int main (){
    vector<int> v;      // dynamic array, can be used without declaring size and elements and can be changed later on
    v.push_back(12);    // for insering elements
    v.push_back(11);
    v.push_back(9);
    v.push_back(34);
    v.push_back(17);  
    v.push_back(18);  
    v.push_back(19);  
    v.push_back(20);  
    v.push_back(22);  
  //   cout<<v[2]<<endl;             //accesing and updating value
  //   for(int i=0;i<v.size();i++){
  //       cout<<v[i]<<endl;    // printing value 
  //   }
    // v.pop_back();        // eliminates last element
    // v.pop_back();
    // v.pop_back();
    
    //  for(int i=0;i<v.size();i++){                     // printing array
    //     cout<<v[i]<<endl;                      
    // }


   sort(v.begin(),v.end());            //SORTING NOT WORKING
  for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;  
  }
  }


  // WAP TO PRINT DOUBLET FROM AN ARRAY WHOSE SUM IS EQUAL TO TARGET ELEMENT 




  //   int x;
  //   vector<int>v;
  //   cout<<"ENTER TARGET :";
  //   cin>>x;
  //   int n;
  //   cout<<"ENTER NO. OF ARRAY ELEMENTS :";
  //   cin>>n;
  //   for(int i=0;i<n;i++){
  //     int q;
  //     cout<<"ENTER ARRAY ELEMENTS :";
  //     cin>>q;
  //     v.push_back(q);
  //   }

  // for(int i=0;i<v.size()-1;i++){
  //   for(int j=i+1;j<v.size();j++){
  //     if(v[i]+v[j]==x) cout<<"("<<v[i]<<" "<<v[j]<<")";
  //   }
  //   cout<<endl;
  // }




// WAP TO INSERT ELEMENTS OF AN ARRAY INTO ANOTHER ARRAY IN REVERSEE ORDER   ******************




  // vector<int>v;
  // int n;
  // cout<<"ENTER NO. OF ARRAY ELEMENTS :";
  // cin>>n;
  // for(int i=0;i<n;i++){
  //     int q;
  //     cout<<"ENTER ARRAY ELEMENTS :";
  //     cin>>q;
  //     v.push_back(q);
  //   }
  // vector<int>w(v.size());
  // for(int i=0;i<=w.size();i++){
  //   int j=v.size()-1-i;                      // i+j=size-1
  //    w[j]=v[i]; 
      
    
     


  // }

  // for(int i=0;i<w.size();i++){
      
  //     cout<<w[i]<<" ";
  // }





// REEVERSE AN ARRAY WITHOUT USING AN EXTRA ARRAY


// vector<int> v;      
//     v.push_back(12);    
//     v.push_back(11);                        // creating an array
//     v.push_back(9);
//     v.push_back(34);
//     v.push_back(17);  
//     v.push_back(18);  
//     v.push_back(19);  
//     v.push_back(20);  
//     v.push_back(22); 

//   for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";                  //PRINTING THE ARRAY
//   }
//   cout<<endl;
  
  
  // for(int i=0, j=v.size()-1;i<=j;i++,j--){
  
  //   int temp=v[i];
  //   v[i]=v[j];                          // SWAPPING ARRAY
  //   v[j]=temp;



  // }
// for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";              //PRINTING REVERSED ARRAY
//   }





  




//INBUILT FUNNCTIONS TO REVERSE

// reverse(v.begin(),v.end());
// for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";              //PRINTING REVERSED ARRAY
//   }








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
















































  