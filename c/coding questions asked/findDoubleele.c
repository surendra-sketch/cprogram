#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){

system("cls"); 
int arr[] ={ 2,4,4,2,5,6,6};
int n = sizeof(arr)/sizeof(int);
int arr1[7]={0},count=0;

 
// printf("%d \n",n);
 
for(int i=0;i<n;i++){
    int a;
for (int j = i+1; j < n; j++)
    {
    if(arr[i]==arr[j]){
        // a = arr[j];
        // arr1[i]=a;
        arr1[i]=arr[j];
        count++;
      }
       
    }
}

printf("\nTotal number of repeating elements is = %d\n",count);

// sorting

for (int i=0;i<n;i++){
    int a;
    for(int j=i;j<n;j++){
        if(arr1[i]>arr1[j]){

            a=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=a;

        }
    }
}

printf("\nThese are repeated elements in given array = ");

for (int i = 0; i < n; i++)
{
    if(arr1[i] !=0){

    printf("%d  ",arr1[i]);
    }
}








 printf("\n\n");
 system("pause");   
 system("cls");   

}