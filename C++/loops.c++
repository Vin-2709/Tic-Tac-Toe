#include<iostream>
using namespace std;
//***********while loop******************

//print n numbers
int main (){
//     int i=0;
//     while(i<=20 ) {  //condition

//       cout<<i<<" ";
//       i=i+1;         //increment
//     }

//  // print even numbers till input n
//     cout<<"enter the number n:";
//     int n;
//     cin>>n;
//     int i=2;
//     while(i<=n){
       
//        cout<<i<< " " ;
//        i=i+2;

//     }


    // TO TELL A NUMBER IS PRIME OR NOT
    
    // cout<<"enter the number n:";
    // int n;
    // cin>>n;
    // int i=2;
    // while(i<n) {
    //   if(n%i==0){
    //     cout<<"it is not a prime no.";
        
      
    //   }
    //   else{
    //     cout<<"it is a prime no.";
    //   }
    //   i=i+1;
    // }

    


    //**************FOR LOOP*****************


    //to print sum of n numbers

//     cout<<"Enter the value of n:";
//     int n;
//     cin >>n;
//     int sum=0;
//     for(int i=0;i<=n;i++){
     
//      sum+=i;

//     }
//     cout<<sum;
// }



    //PRINT ALL ALPHABETS UPPER CASE USING ASCSCII VALUES

//     int a=65;
//     while(a<=90){
//         char ch=(char)a;
//         cout<<ch<<endl;
//         a++;
//     }


    



// }


// for(int i=65;i<=90;i++){

//     char ch=(char)i;
//     cout<<ch<<endl;
   
// }
// }



               //TO CHECK WHETHER A NUMBER IS PRIME OR NOT

// int n;
// cout<<"ENTER YOUR NUMBER :";
// cin>>n;
// for(int i=2;i<=(n-1);i++){

//    if(n%i!=0){
//     cout<<"IT IS  A PRIME NUMBER";
//     break;
//    }
// //    else{
// //     cout<<"IT IS A PRIME NUMBER";
// //     break;
// // }
   
    

// }

                        //TO COUNT THE NUMBER OF DIGITS




int n;
cin>>n;
// int count=0;
// for(int i=0;i<=20;i++){
//     n=n/10;
//     count++;
//     if(n==0) break;
    
   

// }

// cout<<count;            
            
            
//  int n;
//  cin>>n;
//  int count=0;
//  while(n>0) {
//     n/=10;
//     count++;

//  }          
            
//   cout<<count;          
            


            //TO PRINT THR SUM OF GIVEN NUMBERS


//   int n;
//   cin>>n;
//   //int last_digit=0;
//   int sum=0;
//   while(n>0){
//     int last_digit=n%10;
//     n/=10;
    
//     sum+=last_digit;
    
//   }
//     cout<<sum;

                  //TO PRINT THE REVERSE DIGITS OF NUMBER

// int r=0;
// while(n>0){

//    int last=n%10;
//    n/=10;
//    r*=10;
//    r+=last;
   




// }
// cout<<r;}



                 //TO FIND THE SUM OF SERIES 1-2+3-4+5-6.....

// int sum=0;
// for(int i=0;i<=n;i++){
//    if(i%2==0){
//     sum-=i;

//    }
//    else{
//     sum+=i;
//    }
// }

// cout<<sum;





               // TO FIND THE FACTORIAL 

// int fact=1;
// for(int i=1;i<=n;i++){

//     fact=fact*i;

// }
// cout<<fact;


// int fab=1;
// for(int i=1;i<=n;i++){
//     fab=fab
// }


// }            




            //  to print armstrong number


int sum=0;
for(int i=1;i<=500;i++){
    int last=i%10;
    
    int c=last*last*last;
    sum+=c;
    i/=10;
    if(sum==i){
        cout<<i;

    }
    
    }
}