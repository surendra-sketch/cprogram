#include<stdio.h>
#include<string.h>

int annagram(char str1[],char str2[]){
   int n,m,i;
   char num1[50]={0};
   char num2[50]={0};
   n=strlen(str1);
   m=strlen(str2);
  

 i=0;
   while(str1[i] != '\0'){
       num1[str1[i]-'a']++;
       i++;
   }


   i=0;
    while(str2[i] != '\0'){
       num2[str2[i]-'a']++;
       i++;
   }

for(i=0;i<50;i++){
// printf("%s %s ",num1[i],num2[i]);
}
   for(i=0;i<50;i++){
          if(num1[i] != num2[i]){
              return 0;
          }

   }
          

     
   return 1;
}



int main(){

int num;
char str1[50],str2[50];
gets(str1);
gets(str2);

num = annagram(str1,str2);

if(num){
    printf("String %s and %s are annagram\n",str1,str2);
}else{
    printf("String %s and %s are not annagram\n",str1,str2);

}



    return 0;

}
