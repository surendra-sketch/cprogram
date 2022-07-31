#include<stdio.h>
#include<stdlib.h>
#include<mem.h>
#include<string.h>


// first way to return a arrayfrom a function


// void getNextFive(int result[]){ //or
void getNextFive(int *result){
    // int x=5;
    // for (int i = 0; i < 5; i++)
    // {
    //    result[i] = x+i+1;     
    // } 

    int n;
    for (int i = 0; i < 5; i++)
    {
       printf("Enter %d element for array  ",i+1);
       scanf("%d",&n) ;
       result[i] =n;   
    }

    int count= sizeof(result)/sizeof(result[0]);

    for (int i = 0; i < 5; i++)
    {    
        int temp=0;
        for(int j=i+1;j<5;j++){
            if(result[i]>result[j]){
               temp=result[i];
               result[i]=result[j];
               result[j]=temp;

            }
        }
     }

 
    int sum=0;
    sum=result[0]+result[4];


    system("cls");
   printf("size= %d\n",count);
   printf("sum of 1st and last index ele of array= %d\n",sum);
   printf("\nSorted array\n");
}



void main(){

int x=5;//5,6,7,8,9
int arr[x];
getNextFive(arr);

    for (int i = 0; i < x; i++)
    {
       printf("%d ",arr[i]);    
    }


//     printf("\n\n");    
//     system("pause");
//    system("cls");


}



// second way to return a arrayfrom a function
/*
int* getNextFive(int x){
    int* result = malloc(sizeof(int) * 5);
     for (int i = 0; i < 5; i++)
    {
       result[i] = x+i+1;     
    }

    return result;
     
}

void main(){

int x=5;//5,6,7,8,9
int* arr = getNextFive(x);

    for (int i = 0; i < x; i++)
    {
       printf("%d ",arr[i]);    
    }

    free(arr);

}

*/