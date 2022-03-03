#include<stdio.h>
 
int main(){

    char str[20];
    int count=0,subcount=0,fact=1;
     printf("Enter a sring\n");
     scanf("%s",str);

     for(int i=0;str[i]!='\0';i++){
       for(int j=i+1;str[j]!='\0';j++){
         int subcountt=0;
           if(str[i]==str[j]){
              subcountt++;
              printf("%c",str[i]);


              if(subcountt>0){
                printf("%d",subcountt);
            }
            }
        }  
       count++;
 }



     for(int i=1;i<=count;i++){
         fact=fact * i;
     }
     printf("\nsubcount is %d",subcount);
     printf("\ncount is %d",count);
     printf("\nfact is %d",fact);


     
     system("pause>0");
     system("cls");

return 0;

}