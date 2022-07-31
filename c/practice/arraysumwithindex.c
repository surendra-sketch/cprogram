#include<stdio.h>
#include<stdlib.h>
void subarr(int arr[],int n,int s);
void main(){

    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
      int n,s;
      scanf("%d %d",&n,&s);
      int arr[n];
      printf("Enter elements\n");
       for(int i=0;i<n;i++){
           scanf("%d",&arr[i]);
       }
      
       subarr(arr,n,s);
    }

    printf("\n\n");
    system("pause");
    system("cls");
}


void subarr(int arr[],int n,int s){
 int cursum=0;
 for(int i=0;i<n;i++){
           printf("%d ",arr[i]);
       }
 printf("\n");      
 for(int i=0;i<n;i++){
 cursum=arr[i];
 for(int j=i+1;j<n;j++){

 if(cursum==s){
     printf("%d %d",i+1,j);
     return;
 };
 if(cursum>s){
      break;
 };
 cursum +=arr[j];
 }
 }
  printf("-1\n");      
}
