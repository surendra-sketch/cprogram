#include<stdio.h>

void main(){
int temp1,temp2;
int arr[]={1,2,3,4,5};


for(int i=0;i<5;i++){
    temp1=arr[0];
    arr[0]=arr[4];
    arr[4]=temp1;
}
 



for(int i=0;i<5;i++){
     printf("%d ",arr[i]);
}
    





}