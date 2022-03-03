#include<stdio.h>
#include<stdlib.h>
// find out total possible outcumes when two dice thrown and sum must be eqaul to
//inputed number

int main(){
  int num ,count=0;
  printf("Enter a number\n");
  scanf("%d",&num);

  if(num<13 && num>0){
      for(int i=1;i<=6;i++){
         for(int j=1;j<=6;j++){
          if(i+j==num){
              count++;
          }
      }
      count;
      }
       
  }else{
      printf("\nWorng range num is : %d",num);
  }
   printf("\nPossible combination is %d ",count);    
 
  printf("\n");
  system("pause");
  system("cls");

    return 0;
}