#include<stdio.h>
#include<stdlib.h>


int main(){
   printf("Enter the Size of arry\n");
   int size;
   scanf("%d",&size);
   int arr[size];

   for(int i=0;i<size;i++){
       scanf("%d",&arr[i]);
   }
  printf("Before sorting\n");

   for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
   }



//    size=sizeof(arr)/sizeof(int);//for calculating the size of arr
 //{6,9,2,7,8}
 
   for (int i = 0; i <size; i++)
   {    
       for (int j = i; j <size; j++)
        if(arr[i]>arr[j]){
       {    int a;         
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
       }
    }
   




   printf("\nAfter sorting\n");
   for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
   }

 printf("\n");
 system("pause\n");
 system("cls");

    return 0;
}