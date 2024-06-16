#include<stdio.h>

int main()

{
    float x;
    printf("enter the num1:");
    scanf("%f",&x);
    float y;
    printf("enter the num2:");
    scanf("%f",&y);
    float z= x + y;
    printf("%f\n",z);
    float avg= z/2;
    printf("Avg of two numbers is: %f",avg);

    
    return 0;
}
