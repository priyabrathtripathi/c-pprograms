#include<stdio.h>
int main()
{
int num;
    printf("enter the value for which you want talble: \n");
    scanf("%d", &num);
    printf("multiplication table of entered value is as follows \n",num);
   // printf("%d X 1=%d\n",num, num*1);
    for(int i=1;i <11; i++)
     printf("%d X %d=%d\n",num,i, num*i);
    return 0;
}  