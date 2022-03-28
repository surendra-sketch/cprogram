#include<stdio.h>

void main(){

int num,sum=0;
scanf("%d",&num);

while (num>0)
{ 
    int temp;
    temp=num%10;
    sum += temp;
    num=num/10;
}
printf("sum=%d\n",sum);



}