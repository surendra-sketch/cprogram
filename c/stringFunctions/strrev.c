#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//The strrev(string) function returns reverse of the given string.
//Let's see a simple example of strrev() function.
void main (){
char str1[50];

 
printf("Enter string 1 value\n");
fgets(str1,50,stdin);
printf("After Reversing the str value");
strrev(str1);
puts(str1);

system("pause");
system("cls");


}
