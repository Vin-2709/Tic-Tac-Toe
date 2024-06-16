#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   int n;
   cout<<"Enter No. of students ";
   cin>>n;
  vector<string>names(n);
  cout<<"Enter Names";
  for(int i=0;i<n;i++){
     
     string s;
     cin>>s;
    
    names.push_back(s);
    
  }
  sort(names.begin(),names.end());
  cout<<names[0];

// for(int i=0;i<n;i++){
//     cout<<names[i];

// }

  



}