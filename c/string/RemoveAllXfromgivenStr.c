#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void chekx(char str[]){


// printf("%s",str);
int n=strlen(str);
// printf("%d\n",n);

for(int i=0;i<n-1;i++){
   if(str[i]==120 || str[i]==88){
    printf("%c",'\0');
 }
 else{
     printf("%c",str[i]);
 }
}
}
void main(){
char str[50];
// char str1[50];
printf("Enter a word including with 'x'\n");

fgets(str,50,stdin);
// fgets(str1,50,stdin);
// printf("%s",str);
// printf("%s",str1);
chekx(str);

}