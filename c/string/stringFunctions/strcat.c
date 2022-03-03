#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// The strcat(first_string, second_string) function concatenates two strings 
//and result is returned to first_string.


/*
//only for two str
void main(){
char str1[50]="sure";
char str2[50]="ndra";
char str3[50]="singh";

printf("1 string value\n");
puts(str1);
printf("2 string value\n");
puts(str2);
 
printf("After concatation\n");
strcat(str1,str2);
printf("%s",str1);

*/


//for three str
void main(){
char str1[50]="sure";
char str2[50]="ndra";
char str3[50]=" singh";

printf("1 string value\n");
puts(str1);
printf("2 string value\n");
puts(str2);
printf("3 string value\n");
puts(str3);
 
printf("After concatation\n");
strcat(str1,str2);
strcat(str1,str3);
printf("%s",str1);




/*
char str1[50];
char str2[50];

printf("Enter string 1 value\n");
fgets(str1,50,stdin);
puts(str1);
printf("Enter string 2 value\n");
fgets(str2,50,stdin);
puts(str2);
 
printf("After concatation\n");
strcat(str2,str1);
printf("%s",str2);
*/
printf("\n");
system("pause");
system("cls");


}
