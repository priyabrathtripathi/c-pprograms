#include<stdio.h>
long int factorial(int n){
    if(n==1)  return 1;
    return n*factorial(n-1);
}
int main(){
    int num;
    long int fact =0;
    printf("enter the value");
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial of %d is=%1d",num,fact);
    printf("\n");
    return 0;
}