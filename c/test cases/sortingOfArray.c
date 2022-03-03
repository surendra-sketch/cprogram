#include<stdio.h>
#include<stdlib.h>


int main(){

   int size,arr[]={7,5,3,8,9,4};
   size=sizeof(arr)/sizeof(int);

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
   




    
   for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
   }

 printf("\n");
 system("pause\n");
 system("cls");

    return 0;
}



/*
#include<stdio.h>
#include<stdlib.h>
 
// void myarr(int s[],int a);

void myarr(int arr[],int num){ 

printf("%d\n",sizeof(arr));


 for(int i=0;i<num;i++){
    int a;
    printf("Enter array element of index %d   ",i);
    scanf("%d",&a);
    arr[i]=a;
}

for(int i=0;i<num;i++){
printf("%d ",arr[i]);
}
 printf("\n\n");  

 }

int main(){
// system("cls");
int n=1,m=0,b=0;
 
 while (n<9)
{ 

     
    if(n==1){

     printf("caes 1   Enter the size of array \n");
     scanf("%d",&m);
     int arr[m];
     myarr(arr,m);
   

     }

    if(n==8){
     printf("\ncase 8  Enter the Size of array\n");
     scanf("%d",&b);
     int arr1[b];
     myarr(arr1,b);
     
    }
  n++;
}

 

printf("\n");
system("pause");
system("cls");
return 0;
}

*/