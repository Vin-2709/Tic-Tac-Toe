int factorial(int n){
    if( n==1) {
    return 1;
}   
    else {
    return n*factorial(n-1);

}
}

int main (){
 int x;
 printf("Enter the value of x: ");
 scanf("%d",&x);
 printf("The factorial of %d is %d",x,factorial(x));
}

