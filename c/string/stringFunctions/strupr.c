#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// The strupr(string) function returns string characters in uppercase. 
//Let's see a simple example of strupr() function.
void main (){
char str1[50];
printf("Enter string 1 value\n");
fgets(str1,50,stdin);

 
printf("After passing from strupr fun the string value\n");
strupr(str1);
puts(str1);

system("pause");
system("cls");


}
