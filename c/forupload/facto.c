#include<stdio.h>

int main (){


printf("Enter a number to find the factorial\n");
int num,num1 ,fact=1,fact1=1,fract=0;;
scanf("%d %d",&num,&num1);

for(int i=num;i>=1;i--){
    fact=fact *i;
}
for(int i=num1;i>=1;i--){
    fact1=fact1 *i;
}
printf("Factorial of %d is = %d  \n",num,fact);
printf("Factorial of %d is = %d  \n",num1,fact1);

fract = fact/fact1;

printf("Fractional both factorial is %d   \n",fract);
 
system("pause");
system("cls");


}