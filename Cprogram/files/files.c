
  // opening and reading a file text.c
    // FILE *fptr;
    // fptr=fopen("file name","operation");
    // //operations - read="r", write="w"

    //READING AND SCANNING FROM A FILE
    // FILE *fptr;
    // fptr=fopen("Test.txt","r");
    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("character=%c\n",ch);

    // fclose(fptr);

    //****ABOVE CODE IS CORRECT BUT NOT WORKING****

    // FILE *fptr;
    // fptr=fopen("Text.txt","w");

    
    // // ****fputc is used to change the file data****

    // fputc('a',fptr);
    // fputc('b',fptr);
    // fputc('c',fptr);
    // fputc('c',fptr);
    // fputc('a',fptr);
    // fputc('a',fptr);
    // fputc('a',fptr);

    // fclose(fptr); 

   //***** EOF represents End Of File.....to print a whole line from a file , we use EOF as ending limit 

//   FILE *fptr=fopen("Text.txt","r");
//   char ch;
  
//   while(ch != EOF) {
//     printf("%c",ch);
//     ch=fgetc(fptr);
//   }
//   fclose(fptr);


// ****MAKE A PROGRAM TO READ 5 INTEGERS FROM A FILE

//  FILE *fptr=fopen ("Text.txt","r");
//  int  n;
// fscanf(fptr,"%d",&n);
// printf("%d",n);
// fscanf(fptr,"%d",&n);
// printf("%d",n);
// fscanf(fptr,"%d",&n);
// printf("%d",n);
// fscanf(fptr,"%d",&n);
// printf("%d",n);
// fscanf(fptr,"%d",&n);
// printf("%d",n);




// fclose(fptr);
#include<stdio.h>
#include <stdio.h>

int main() {
    printf("Name:Vineet  Roll No.:2k22/A15/47\n");
    int numbers[10];
    int i, max;

    printf("Enter 10 numbers:\n");

    // Read input numbers
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume the first number as the maximum
    max = numbers[0];

    // Find the maximum number
    for (i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Print the maximum number
    printf("The greatest number is: %d\n", max);

    return 0;
}


jjjj