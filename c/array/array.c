#include<stdio.h>



int main(){

// Take User input

int num;
printf("\nEnter the lenth of the array\n");
scanf("%d",&num);
 int arr[num];

for(int i=0;i<num;i++){
    int a;
    printf("\nEnter element %d ",i);
    scanf("%d",&a);
    arr[i]=a;
}

for(int i=0;i<num;i++){
printf("%d ",arr[i]);
}

//made changes for testing purpose in github


// arr[0]=10;
// arr[1]=12;
// printf("\n %d %d",arr[0],arr[1]);






 
 




printf("\n");
// system("pause");
// system("cls");
return 0;
}