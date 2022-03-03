
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//The strstr() function returns pointer to the first occurrence of the matched string in the given string.
//It is used to return substring from first match till the last character


//Syntax:
//char *strstr(const char *string, const char *match)  

//String strstr() parameters

//string: It represents the full string from where substring will be searched.
//match: It represents the substring to be searched in the full string.



void main(){

  char str[100];    
  char *str1; 
  printf("Enter a sentance using word 'with'\n")   ;
  fgets(str,100,stdin);
  str1=strstr(str,"with");    
  puts(str1);

printf("\n");
system("pause");
system("cls");


}
