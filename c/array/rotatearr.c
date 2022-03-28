#include<stdio.h>
int main(){
    int arr[]={2,10,40,30,20,50},k=0;
    
    for(int i=0;arr[i]!='\0';i++){
        printf("%d ,",arr[i]);
    }

    printf("\n");

    for(int i=5;i>=0;i--){
        printf("%d ,",arr[i]);
    }
    
printf("\n");
system("pause");
system("cls");

}