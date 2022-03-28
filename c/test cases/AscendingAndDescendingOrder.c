#include<stdio.h>
#include<stdlib.h>

void myarr(int* arr,int n){

  
printf("Enter array elements\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}


printf("\n");
// //ascending proccess
// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       if(arr[i]>arr[j]){
//        int temp;
//        temp=arr[i];
//        arr[i]=arr[j];
//        arr[j]=temp;   
//     //   printf("%d ",arr[i]);
//       }  
//     }
// }
// printf("Ascending order\n");
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }



// //Descending order only by printing but not in actual with the
// //help of above proccess
// printf("\n");
// printf("Descending order\n");

// for(int i=n-1;i>=0;i--){
//     printf("%d ",arr[i]);
// }


printf("\n");
//Descending order proccess in real
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if(arr[i]<arr[j]){
       int temp;
       temp=arr[j];
       arr[j]=arr[i];
       arr[i]=temp;   
       }  
    }
}
printf("Ascending order\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

}


void main(){
int n;
printf("Enter array size\n");
scanf("%d",&n);
int arr[n];
myarr(arr,n);

printf("\n");
system("pause");
system("cls");


}