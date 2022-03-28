#include<stdio.h>
#include<stdlib.h>
 
void main(){
int n;
n=2;
int arr[n],sum=0,mul=1,count=0,fact=1;

for(int i=0;i<2;i++){
scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){
        sum +=arr[i]; 
        // mul *=arr[i];
}

for(int i=0;i<n;i++){
int temp=0;
temp=arr[i];
for(int j=1;j<=temp;j++){
  fact=fact*j;
}
}


printf("sum= %d  fact=%d",sum,fact);









printf("\n");
system("pause");
system("cls");


}