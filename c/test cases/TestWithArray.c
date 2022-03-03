#include<stdio.h>
#include<stdlib.h>


/*
void myarr(int a, int b){
printf("%d\n",(a+b));

}
 




void main(){
int n;
printf("Test case one \n");
n=5;
if(n==5) {
   int a=2,b=2;
    myarr(a,b);
}

printf("Test case second \n");

n=2;
if(n==2) {
   int a=5,b=2;
    myarr(a,b);
}
 

}
*/

//o*****************************Rotate array

/*
void myarr(int a[]){
     //Rotate arry
    for(int i=0;i<5;i++){
        a[i]=a[i+1];
    }
    //move last element to first position
    // a[0]=temp;
    //  a[5]='\0';
    // Print array
    for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}
}



int main(){

int n;
printf("\n");
int arr1[]={1,2,3,4,5};
int arr2[]={2,5,82,7,4};


n=1;
if(n==1){
    printf("Actual array\n");
    for(int i=0;i<5;i++){
     printf("%d ",arr1[i]);
    }
         printf("\nAfter Rotation array\n");
    myarr(arr1);
}

printf("\n");

n=2;
if(n==2){
    // arr2[0]=14;
    printf("Actual array\n");
    for(int i=0;i<5;i++){
     printf("%d ",arr2[i]);
    }
    printf("\nAfter Rotation array\n");
    myarr(arr2);
}

printf("\n\n\n\n");

system("pause");
system("cls");

}
*/


//Exam Question**************************XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void myarr(int a[]){

 int temp;
 temp=a[0];
 a[0]=a[4];
 a[4]=temp;
 
 
//// Print array
    for(int i=0;i<3;i++){
    printf("%d ",a[i]);
}
}



int main(){

int n;
 
printf("\n");
int arr1[]={1,2,3,4,5};
int arr2[]={2,5,82,7,4};


n=1;
if(n==1){

    printf("Actual array\n");
    for(int i=0;i<5;i++){
     printf("%d ",arr1[i]);
    }
         printf("\nAfter Rotation array\n");
        // arr2[0]=5;
    myarr(arr1);
}

printf("\n");

n=2;
if(n==2){
    printf("Actual array\n");
    for(int i=0;i<5;i++){
     printf("%d ",arr2[i]);
    }
    printf("\nAfter Rotation array\n");
    // arr2[0]=4;
    myarr(arr2);
}

printf("\n\n\n\n");

system("pause");
system("cls");

}


















