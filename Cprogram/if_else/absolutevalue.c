#include <stdio.h>
int main ()
{
    int x;
    printf("enter num");
    scanf("%d",&x);
     if (x<0) {
       int z= -(x);
       printf("%d",z);

     }
     else {
      printf("%d",x);
     }


    return 0;
}