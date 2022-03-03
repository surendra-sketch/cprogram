#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//The strcpy(destination, source) function copies the source string in destination. 
void main(){
/*
char str1[]="my name is dai";
char str2[]="hello";
printf("First string\n");
puts(str1);
printf("second string befor copying from first\n");
puts(str2);
printf("second string after copying from first\n");
strcpy(str2,str1);
puts(str2);
*/
char str1[50];
char str2[50];

printf("Enter string 1 value\n");
fgets(str1,50,stdin);
puts(str1);
printf("Enter string 2 value\n");
fgets(str2,50,stdin);
puts(str2);
 
printf("After copying from one into second\n");
strcpy(str2,str1);
puts(str2);

// printf("\n");
system("pause");
system("cls");


}
