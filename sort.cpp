#include<stdio.h>
int main(){
    int arr[50],i,n,a,v;
    printf("number of element which u want to enter");
    scanf("%d",&a);
    printf("enter %d element one by one",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("element u entered\n");
    for(i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<a-1;i++){
        for(n=i+1;n<a;n++)
        {
            if(arr[i]>arr[n])
            {
                v=arr[i];
                arr[i]=arr[n];
                arr[n]=v;
            }
        }
    }
    printf("shorted element in order\n");
    for(i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}