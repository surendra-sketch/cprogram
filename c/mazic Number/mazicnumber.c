#include<stdio.h>
#include<stdlib.h>

void main(){

// int arr[6]={1,23,344,563,23,566},

int n;
scanf("%d",&n);
int arr[n];

int arr1[n], count=0,count1=0;
int temp=0;
 for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
 
 
  for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
}
printf("\n");

 
 for(int i=0;i<n;i++){
     int temp1;
     count=0;
     printf("%d ",arr[i]);
     temp1=arr[i];
     while (temp1 != 0)
     {
        count++;
        temp1=temp1/10;
     }
     printf(" count is=%d \n",count);
     if (count == 3){
         count1++;
         int a;
         a=arr[i];
         arr1[temp]=a;
         arr[i]=a;
         temp++;
       }
  }

    
     
printf("after selecting new arr1 is \n");
printf("count1 is =%d \n",count1);

for(int i=0;i<count1;i++){
for(int j=i;j<count1;j++){
  if(arr1[i]>arr1[j]){
      int tem;
      tem=arr1[i];
      arr1[i]=arr1[j];
      arr1[j]=tem;
  }
}
}

if(count1 !=0){
for(int i=0;i<count1 ;i++){
     printf("%d ",arr1[i]);
}
     printf("\n%d \n",arr1[1]);
  
}
else{
    printf("There is no 3 digit number\n");
}

system("pause");
system("cls");
}

