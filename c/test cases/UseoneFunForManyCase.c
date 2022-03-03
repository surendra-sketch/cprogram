#include<stdio.h>
#include<stdlib.h>


 
void myarr(int arr[],int num){
       
for(int i=0;i<num;i++){
    int a;
    printf("\nEnter element %d ",i);
    scanf("%d",&a);
    arr[i]=a;
}

for(int i=0;i<num;i++){
printf("%d ",arr[i]);
}
}


int main(){
system("cls");

int num;
printf("\nEnter the lenth of the array\n");
scanf("%d",&num);
int arr[num];


myarr(arr,num);

 



printf("\n");
system("pause");
system("cls");
return 0;
}

