#include<stdio.h>
#include<stdlib.h>
int main(){
char name[20];
printf("Enter Your Name\n");
// (1)Method
gets(name);
printf("%s",name);


// // (2)Method this matheod will not print after space
// scanf("%s",name);
// for(int i=0;name[i]!='\0';i++){
//     printf("%c",name[i]);
// }


// // (3)Method print full name with space
// fgets(name,20,stdin);
// printf("%s",name);
 

    return 0;
}