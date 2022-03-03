#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//The strlwr(string) function returns string characters in lowercase. 
//Let's see a simple example of strlwr() function.

void main (){
char str1[50];
printf("Enter string 1 value\n");
fgets(str1,50,stdin);

 
printf("After passing from strlwr fun the string value\n");
strlwr(str1);
puts(str1);

system("pause");
system("cls");


}
