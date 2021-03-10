#include<stdio.h>
int main(){
    int n,arr[100],i,a,v;
    printf("number of element\n");
    scanf("%d",&n);

    printf("number %d integer\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n-1;i++){
        a=i;
        while(a>0 && arr[a]<arr[a-1]){
            v   = arr[a];
            arr[a] =arr[a-1];
            arr[a-1]=v;
            a--;
        }
    }
    printf("sort list in order\n");
    for(i=0;i<=n-1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}