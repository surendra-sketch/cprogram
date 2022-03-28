#include<stdio.h>
#include<string.h>
int main(){


   printf("given array\n");
   int arr[]={1,15,3,5,1},i,j,sum=0;
   for( i=0; i<=4 ;i++){
       for( j=i+1;j<=4;j++){
           if(arr[j]>arr[i]){
               break;
           }
           if(j==4){
           printf(" %d ",arr[i]);
            sum +=arr[i];
           }
       }
   }
 printf("sum is: %d ",sum);



    system("pause");
    system("cls");
    return 0;


    
}