#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 
void main(){

char str[50];
printf("Enter string value \n");

/*
// (((strlen)))returns the length of string
//but if u r using fgets() then reduse -1 from length to get correct length

fgets(str,50,stdin);
puts(str);
int n=strlen(str);
printf("str length is %d\n",n-1);
*/
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

/*
 scanf("%[^\n]s",str);//it return correct length of str
 puts(str);
 int n=strlen(str);
 printf("str length is %d\n",n);
*/

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

gets(str);//return correct len
 
// for(int i=0;i<strlen(str);i++){
//     printf("%c",str[i]);
// }


//OR
for(int i=0;str[i] !='\0';i++){
    printf("%c",str[i]);
}


int n=strlen(str);
printf("\nstr length is %d %c\n",n,str[0]);



printf("\n");
system("pause");
system("cls");


}
