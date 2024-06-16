//pointers is used to store adress of a variable
#include<stdio.h>
// int main () {
// // int age=22;
// // int *ptr=&age; //adress of age is stored in ptr
// // int _age= *ptr; //value of adress stored in ptr
// // printf("%d",_age);

// // pointer to pointer is used to store adress of pointer(*pptr)
// // int i=5;
// // int *ptr=&i;
// // int **pptr=&ptr;
// // printf("%d\n",*ptr);//gives value of adress stored in ptr
// // printf("%d",**pptr);//gives value of adress stored in pptr



// return 0;}





// call by value(not using pointers) and call by referrence(By using ponters)
//call by value
void swap(int a,int b) {
  
  int t=b;
   b=a;
   a=t;
   printf("a=%d, b=%d",a,b);

}

int main () {
    int x=3;
    int y=5;
    swap(x,y); //swap is done here but we want to swap in function
    printf("\nx=%d,y=%d",x,y); //here swapping is not performed so we will use pointers


  

    return 0;
}

void _swap(int *x,int *y){
     
     int t=*y;
     *y=*x;
     *x=t;
     printf("%D")


}







