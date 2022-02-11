#include<stdio.h>
int main(){

int a[2][4]={9,3,6,9,2,4,3,6};
int b[2][4]={9,3,5,1,2,4,5,7};
int c[2][4];

 
for(int i=0;i<=1;i++){
    for(int j=0;j<=3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("\n");

for(int i=0;i<=1;i++){
    for(int j=0;j<=3;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
printf("\n");

// Addition

for(int i=0;i<=1;i++){
    for(int j=0;j<=3;j++){

        c[i][j]=a[i][j]+b[i][j];
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
printf("\n");

// Multiplication

for(int i=0;i<=1;i++){
    for(int j=0;j<=3;j++){

        c[i][j]=a[i][j] * b[i][j];
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
printf("\n");


     return 0;
}