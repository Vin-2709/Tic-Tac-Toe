#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of A:");
    scanf("%d",&a);
    int b;
    printf("enter the value of B:");
    scanf("%d",&b);
    int c;
    printf("enter the value of c:");
    scanf("%d",&c);
    int d;
    printf("enter the value of d:");
    scanf("%d",&d);

     if (a>b && c && d) {
        printf("a is greater than b,c and d"); }

    else if(b>a && c && d) {
        printf("b is greater than a,c and d");
    }

    else if (c>a && b && d) {
        printf("c is greater than a,b,d");
    }

    else if (d>a && b && c) {
        printf("d is greater than a,b and c");
    }

    return 0;
    
     
}