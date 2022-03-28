#include<stdio.h>
#include<stdlib.h>

//logic is not emplimented in this program yet

void myarr(int* arr,int n,int sum)
{
    int s=sum,temp;
    printf("sumis %d\n",s);
    
    printf("Enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        if(arr[i]>arr[j]){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;   
        }  
        }
    }
    printf("Ascending order\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}


void main(){
    int n,sum=0;
    printf("Enter array size and espected sum\n");
    scanf("%d%d",&n,&sum);
    int arr[n];
    myarr(arr,n,sum);

    printf("\n");
    system("pause");
    system("cls");


}