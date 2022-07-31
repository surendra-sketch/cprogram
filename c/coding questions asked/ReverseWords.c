#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
  system("cls");
  
 char word[100];
 printf("Enter a sentace\n");
 gets(word);
 
 printf("\n%s\n",word);
//  strrev(word);
//  printf("\n%s",word);



int n=strlen(word);
// printf("str length is = %d",n);
 
// reverse string by using for loop
 
for(int i=n;i!= -1;i--){
   printf("%c",word[i]);
 }
 printf("\n");
//  double all letters
for(int i=n;i!= -1;i--){
   printf("%c",word[i]);
   if (word[i]>=65 || word[i]<=90){
      printf("%c",word[i]);
   }
}
// for(int i=n;i!= -1;i--){
//    printf("%c%c",word[i],word[i]);
    
// }

   printf("\n");
  system("pause");
  system("cls");
     return 0;
}