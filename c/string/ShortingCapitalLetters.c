#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(){

char str[50];
printf("Enter string value \n");
fgets(str,50,stdin);
puts(str);
int n=strlen(str);
printf("str length\n%d\n",n);
printf("This string contains these capital letters given below \n");
for(int i=0;str[i] !='\0';i++){
    if (str[i]>=65 && str[i]<=90)
    {
        printf("%c ",str[i]);
 
    }

}




printf("\n");
system("pause");
system("cls");


}
