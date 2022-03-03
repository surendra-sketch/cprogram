#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

   int n,sum=0,rem,temp;
   printf("Enter a number\n");
   scanf("%d",&n);
   temp=n;

   while (temp!=0)
   {
     rem =temp%10;
     sum=sum+(rem*rem*rem);  
     temp=temp/10;
   }
   if(n==sum){
   printf("Number%d is armstrong number\n",n);
   }
   else{
       printf("Number %d is not a prime number\n",n);
   }
 return 0;
}

 
 