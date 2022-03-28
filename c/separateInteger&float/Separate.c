#include<stdio.h>
//A program to separate integer and float value
int main(){

int num;
float number ,n;
scanf("%f",&number);
num=number;
n=number-num;
printf("%0.4f\n",number);
printf("%d \n%0.4f\n",num,n);
return 0;    
}
  