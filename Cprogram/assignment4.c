#include<stdio.h>
// #include<limits.h>
// #include<float.h>
int main () {
  
  printf("Vineet (2K22/A15/47) \n");
  printf("Ranges of Data Types:\n");
//   printf("---------------------------------------");
//   printf("Signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
//   printf("Unsigned Char: 0 to %u\n", UCHAR_MAX);
//   printf("Signed short: %d to %d\n", SHRT_MIN,SHRT_MAX);
//   printf("Unsigned short : 0 to %u\n", USHRT_MAX);
//   printf("Signed int : %d to %d\n", INT_MIN,INT_MAX);
//   printf("Unsigned int : 0 to %u\n", UINT_MAX);
//   printf("Signed long : %ld to %ld\n", LONG_MIN, LONG_MAX);
//   printf("Unsigned long : 0 to %lu\n", ULONG_MAX);
//   printf("\n");
//   printf("Floating-point ranges :\n");
//   printf("-----------------------------------------\n");
//   printf("Float: %E to %E\n", FLT_MIN, FLT_MAX);
//   printf("Double: %E to %E\n", DBL_MIN,DBL_MAX);
//   printf("Long Double: %LE to %LE\n", LDBL_MIN,LDBL_MAX);
//   return 0;
// }



// 


#include <stdio.h>

int main() {
    printf("Vineet (2K22/A15/47) \n");
    int number, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999) {
        printf("Invalid input. Please enter a five-digit number.\n");
        return 0;
    }

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}






























