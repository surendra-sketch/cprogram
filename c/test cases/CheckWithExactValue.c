//when test case condition several form
//eg in int and char



#include<stdio.h>
#include<string.h>
int main(){

float n;
char cmp[20];
printf("Enter compare value for sting as abcd\n");
scanf("%s",cmp);
system("cls");
n=2;

printf("**********For First case *********\n\n\n");

if((strcmp(cmp,"abcd")==0) && (n=2)){
    printf("test case first passed !\n");
    printf("23\n");
    printf("23.89\n");
}

printf("********* For Second case********* \n\n\n");

n=3.4;
if((strcmp(cmp,"abcd")==0) && (n=3.4)){
    printf("test case second passed !\n");
}









printf("\n");
}