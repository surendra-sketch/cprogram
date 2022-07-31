#include<stdio.h>
#include<stdlib.h>
 

 

// void getNextFive(int result[]){ //or
int getNextFive(int* result,int n){

// first method to asign value to an array
    // result[0] = 12;
    // result[1] = 13;
    // result[2] = 14;
    // result[3] = 15;
    // result[4] = 16;

// second method to asign value to an array
    
    // for (int i = 0; i < n; i++)
    // {
    //    result[i] = n+i;     
    // }


// third method to asign value to an array
     
   for (int i = 0; i < n; i++)
    {  int t=0;
       printf("Enter %d element for array  ",i+1);
       scanf("%d",&t) ;
       result[i] =t;   
    }
     
      return result[4];

   
 
}



void main(){

int x=5;
int arr[x];
int sum = getNextFive(arr,x);


     printf("sum = %d \n",sum);    

    for (int i = 0; i < x; i++)
    {
       printf("%d ",arr[i]);    
    }


//     printf("\n\n");    
//     system("pause");
//    system("cls");


}



 