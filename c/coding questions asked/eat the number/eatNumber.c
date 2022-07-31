#include<stdio.h>
#include<stdlib.h>
int fun(int arr[]){

    
}

void main (){

    system("cls");
    int arr[]={8,5,3,1};
    int n = sizeof(arr)/sizeof(int);
    printf("\n");
    for(int i=0;i<n;i++){

      int temp=0;
      for(int j=i+1;j<n;j++){

         if(arr[i]>arr[j]){
            arr[j]=arr[i]+arr[j];
            // temp=arr[i]+arr[j];
            // arr[j]=temp;
         }


      }


    }

    

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int num = fun(arr);

    printf("\n");


    system("pause");
    system("cls");
}