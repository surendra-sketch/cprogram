#include<stdio.h>
int main(){

// int a[2][4];//here two rows and every row contains 4 elements or column
// total elements 2X4 = 8; 
// in above exm rows index 0 and 1 , and coluns index 0,1,2,3 for each row
// row 0   0, 1 ,2 ,3
// row 1   0, 1 ,2 ,3

 int a[2][4]={9,3,6,9,2,4,3,6};

// row  0  9 3 6 9
// row  1  2 4 3 6

for(int i=0;i<=1;i++){
    for(int j=0;j<=3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

 
     return 0;
}