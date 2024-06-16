#include<stdio.h>
// void greet() {

     
//      printf("what is your name ?");
//      char str [34];
//      gets(str);
//      printf("hi %s , how can i help you ?",str);


//   return;  
// }




// int hello(int a,int b){

//  float c=(a*b)/(a+b);
//  return c;



// }

// int main () {


// //    greet();
// //    printf("\nthanks for contacting us");
//  int x;
//  printf("1st no. :");
//  scanf("%d",&x);
//  int y;
//  printf("2nd no.:");
//  scanf("%d",&y);
//  float ans= hello(x,y);
//  printf("%f",ans);

//     return 0;
// }



// //printing hello world n no of times by using loops
// void print(int c){

//    for (int i=0;i<c;i++){
//      printf("hello world\n");}

// }



// int main () {

//    printf("Enter the n:");
//    int c;
//    scanf("%d",&c);
//    print(c);



//     return 0;
// }




// //printing helllo n no. of times using recursion



// void hello(int c){
// if(c==0){

//     return;
//   }
//   printf("Hello\n");
//   hello(c-1);
  


// }

// int main (){

//     hello(5);
//     return 0;
// }




//FACTORIAL BY RECURSION

// int fact(int n){
//   if (n==1){
//     return 1;
//   }
//   int factnm1=fact(n-1);
//   int factn=factnm1*n;
//    return factn;



// }


// int main (){
//     fact(5);
//     printf("%d",fact(5));





//     return 0;
// }




// FIBONACCI SERIES USING RECURRSION

int fib(int n){
  if(n==0){
    return 0;

  }
  if (n==1){
    return 1;
  }

 int fibNm1=fib(n-1);
 int fibNm2=fib(n-2);
 int fibN= fibNm1 + fibNm2;
 return fibN;



}

int main () {

 printf("%d",fib(6));




  return 0;
}












