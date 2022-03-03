#include<stdio.h>
#include<stdlib.h>
#include<string.h>




/*
int main(){
 int n,count=0;
 printf("Enter Number of test caeses\n");
 scanf("%d",&n);

 while (n-->0)
 {
    count++;
    printf("test case %d passed!\n",count);
 }
printf("\n");
}
*/





//handle array with function***###############^^^^^^^^^^&&&&&&&&

// we can pass array two types given below by uing [] or *

void myarr(int a[]){ 
// void myarr(int* a){
  /* int temp;
      for(int i=0;i<5;i++){
      printf("%d",a[i]);
   }

   temp=a[0];
   a[0]=a[4];
   a[4]=temp;
   printf("\n");
   for(int i=0;i<3;i++){
      printf("%d",a[i]);
   }
*/
  for(int i=0;i<5;i++){
      printf("%d ",a[i]);
   }
//detremine size  here we are unable to find out the size but in main yes
//  printf("size of s %llu\n",sizeof(a));


}

int main(){
// system("cls");
int n=1;
int arr[]={2,3,4,5,6};
int arr1[]={22,34,45,5,6};

 while (n<9)
{ 
    if(n==1){
     printf("caes 1\n");
     myarr(arr);
    }
    if(n==8){
     printf("\ncase 8\n");
     myarr(arr1);
    }
  n++;
}
printf("\n");
system("pause");
system("cls");
return 0;
}








