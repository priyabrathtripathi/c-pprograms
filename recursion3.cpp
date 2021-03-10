#include<stdio.h>
void fibonaci(int a,int b,int n)
{
    int sum;
    if(n>0){
        sum=a+b;
        printf("%d",sum);
        a=b;
        b=sum;
        fibonaci(a,b,n-1);
    }
}int main(){
    int a,b,sum,n;
    int i;
    a=0;
    b=1;
    printf("enter total no. of terms");
    scanf("%d",&n);
    printf("finonacci series is ");
    printf("%d\t%d\t",a,b);
    fibonaci(a,b,n-2);
    printf("\n");
    return 0;
}