#include<stdio.h>
int main () {
    
//   printf("enter your first name  ");
//   char first[10];
//   scanf("%s",first);
//   printf("your name is  %s",first);



//     return 0;
// }


// gets(str) is used to scan a whole sentence.
// puts(str) is used to print that sentence.
// gets(str) is dangerous so we use fgets(str,n,stdin)

//int main () {

  // char str[10];
  // gets(str);
  // puts(str);
  
  

//  char str[20];
//  fgets(str,20,stdin);
//  puts (str);
  
  // char str[20]="hello i am vin";
  // puts(str);





// we cannot change a string of arrays after its declaration but we can change is using a pointer 



// char *str="hello, i am vin";
// puts(str);
// str ="hello";
// puts(str);

// char str="hello i am vin";
// puts(str)

//   return 0;

// }
int a[]={2,-2,4,7,9,-7,-9};
int n=sizeof(a)/sizeof(a[1]);
for(int i=1;i<n;i++){
  for(int j=2;j<=n;j++){
    if(a[i]+a[j]==0)
    printf("%d,%d \n",a[i],a[j]);
  }
}
}