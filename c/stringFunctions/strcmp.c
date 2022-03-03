#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//The strcmp(first_string, second_string) 
//function compares two string and returns 0 if both strings are equal.

//Here, we are using fgets() function which reads string from the console.
void main (){
char str1[50];
char str2[50];

printf("Enter string 1 value\n");
fgets(str1,50,stdin);
puts(str1);
printf("Enter string 2 value\n");
fgets(str2,50,stdin);
puts(str2);
 
printf("After comparing\n");
if(strcmp(str1,str2)==0)    
      printf("Strings are equal");    
  else    
      printf("Strings are not equal");    

printf("\n");
system("pause");
system("cls");


}
