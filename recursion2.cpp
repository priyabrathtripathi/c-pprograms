#include<stdio.h>
int recursivefunctionprcntage();
float var;
unsigned int count=1;
float prcntage;
int main(){
    printf("\n enter a value to split in prcntage");
    scanf("%f",&var);
    var=var/100;
    recursivefunctionprcntage();
    printf("\n");
    return 0;
}
int recursivefunctionprcntage(){
    if(count==101){
        return 1;
    }
    prcntage=var*count;
    printf("\n%3d percent =%.04f",count,prcntage);
    count ++;
    recursivefunctionprcntage();
    return 0;
}