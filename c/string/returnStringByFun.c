#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
char* returnChar(int a,int b){
     if(a==1 && b==2){
        return "helloo";
    }
    else{
        return "hihiihhi";
    }
}
void main(){
/*char str[50],str1[50], s[]="hello";
fgets(str1,50,stdin);
puts(str1);
gets(str);
puts(str);
printf("%s\n",s);
*/

int a,b;
scanf("%d %d",&a,&b);

char *s;

s = returnChar(a,b);
printf("%s\n",s);




system("pause");
system("cls");
}


