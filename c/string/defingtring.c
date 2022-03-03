#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
//input method (0) or ordinary//it dint consider space but gives exact length of str
/*
// scanf("%s",str);
// printf("%s",str);
*/
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
   

//input method (1)//this method did not cosider space 
/*
printf("Enter the length of the string\n");
int length;
scanf("%d",&length);
char str[length];
printf("Enter string value\n");


for(int i=0;i<=length;i++){
    scanf("%c",&str[i]);
}
for(int i=0;i<=length;i++){
    printf("%s",str[i]);
}
*/
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
/*
//input method (2)
// fgets(str,20,stdin);// in this case length is +1 so get exact substract -1
 

char str[20];
printf("Enter string value \n");
// scanf("%s",str);
// printf("length is %d\n",strlen(str));//exact string length when using scanf %s
fgets(str,20,stdin);
printf("length is %d\n",strlen(str)-1);//string length is +1 when using fgets
// printf("%s",str);
int n=strlen(str)-2;// to get last char of str
printf("%c",str[n]);
 
// fgets(str,20,stdin);
// for(int i=0;i<strlen(str);i++){
//     printf("%c",str[i]);
// }
*/

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//checking conditions
 
char str[50];
printf("Enter string value \n");
fgets(str,20,stdin);
puts(str);


//alternate of printf
// for(int i=0;str[i] !='\0';i++){
//     printf("%c",str[i]);
// }


for(int i=0;str[i] !='\0';i++){
    if(str[i]==' '){
        printf("\nstring cotains white space\n");
        printf("At place %d",i);
    }else if (str[i]>=65 && str[i]<=100)
    {
        printf("\nstring cotains Captial letter  ");
        printf("%c",str[i]);

    }

}

 



printf("\n");
system("pause");
system("cls");




}