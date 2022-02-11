#include<stdio.h>

int factorial(int n,int m);

int main(){


int num1,num2 ,fraction=0;
printf("Enter tow number for get thier factorial fraction\n");
scanf("%d%d",&num1,&num2);

fraction=factorial(num1,num2);
printf("Factorial fraction of the both numbers is %d =\n",fraction);



system("pause");
system("cls");

}

int factorial(int n,int m){
    int fact1=1,fact2=1;
    for(int i=n;i>=1;i--){
       fact1=fact1*i;
    }
    for(int i=m;i>=1;i--){
       fact2=fact2*i;
    }
    printf("\nfactorils of %d and %d are %d and %d\n",n,m,fact1,fact2);
    return (fact1/fact2);
}