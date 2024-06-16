#include<iostream>
using namespace std;
#include<algorithm>



int main(){


    //   cout<<"what is your name ?"<<endl;
    //   string name;
    //   getline(cin,name);                            //taking input 
    //   cout<<"HI ,"<<name<<" how can i help you?";


     // Wap to print vowels in a sentence

    //  string str="hi bro, how you doing?";
    //  for(int i=0;i<str.size();i++){
    //     char vowel;
    //     if(str[i]=='a' || 'e' || 'i' || 'o' || 'u'){
    //         vowel += str[i];
    //     }
    //     cout<<vowel;
    //  }



   // input a tring of size of n and update all even positions in string to character a

//    string str;
//    getline(cin, str);
//    for(int i=0;i<str.size();i++){
//     if(i%2==0) str[i]='a';
//    }
//    cout<<str;


// some operators

// 1. add

// string s="hi";
// string t="bro";
// cout<<s+t+" whatsup";

//2. reverse

// string str="My name is vineet";
// reverse(str.begin(),str.end());
// cout<<str;

//Wap to print reverse of  first half of input

// string str="My name is vineet";
// int n=str.size();
// reverse(str.begin(),str.begin()+n/2);
// cout<<str;


string x;
int count=0;
cin>>x;
for(int i=0;i<x.size();i++){
    if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){
        
    }
    else count++;
}
cout<<count;



//WAP TO REVERSE THE SECOND HALF OF A STRING

// string str;
// cin>>str;
// int n=str.size();
// reverse(str.begin()+n/2,str.end());
// cout<<str;


//WAP TO CONVERT INTEGERS STRING INTO INTEGERRS

// string str;
// cin>>str;
// int n=str.size();
// for(int i=0;i<n;i++){
//    int ascii=(int)str[i];
//    int no=ascii-48;
//    cout<<no;
// }




// string str;
// cin>>str;
// reverse(str.begin(),str.end());
// if(str==reverse) cout<<"PALINDROME";
// else cout<<"NOT;











}


