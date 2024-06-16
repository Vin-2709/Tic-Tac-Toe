#include <stdio.h>
// int factorial(int a) {
//     int fact=1;
//     for
//         (int i=2;i<=a;i++){
//         fact=fact*i;
//     }
        
    
    


//    return fact;

// }
// int main () {
    // int x;
    // printf("Enter the value of N: ");
    // scanf("%d",&x);
    // int y;
    // printf("Enter the value of r: ");
    // scanf ("%d" , &y);

    // int ncr= factorial(x)/(factorial(y)*factorial(x-y));
    // printf("%d",ncr);
 






   int factorial (int x) {
     
     int fact=1;
     for (int i=2;i<=x;i++) {
        fact=fact*i;
     }
    return fact;
   }
 


  int main () {
    int n;
     printf("Enter the value of n:");
     scanf("%d",&n);
     int r;
     printf("Enter the value of r: ");
     scanf("%d",&r);

     int npr= factorial (n)/factorial(n-r);
     printf("%d",npr);





    return 0;
}