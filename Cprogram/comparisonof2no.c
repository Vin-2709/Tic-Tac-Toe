#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of A:");
    scanf("%d",&a);
    int b;
    printf("enter the value of B:");
    scanf("%d",&b);
     if (a>b) {
        printf("A is greater than B");
     
    }
     else if (a<b) {
        printf("B is greater than A");
     }
     else if (a=b) {
        printf("A and B are equal");
    
     }
     else {
      printf("Both are equal");
     }

    return 0;
}