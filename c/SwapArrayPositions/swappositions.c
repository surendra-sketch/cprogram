#include<stdio.h>

void main(){
int temp1,temp2;
int arr[]={1,2,3,4,5};


// for(int i=0;i<5;i++){
//     temp1=arr[i];
//     arr[i]=arr[i+1];
//     arr[i+1]=temp1;
// }
//  for(int i=0;i<5;i++){
//     temp1=arr[i];
//     arr[i]=arr[i+1];
//     arr[i+1]=temp1;
// }
//  for(int i=0;i<5;i++){
//     temp1=arr[i];
//     arr[i]=arr[i+1];
//     arr[i+1]=temp1;
// }
 

//  chose one method above OR below 
 for(int j=0;j<3;j++){
     for(int i=0;i<5;i++){
     temp1=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=temp1;
     }
   }



for(int i=0;i<5;i++){
     printf("%d ",arr[i]);
}
    





}