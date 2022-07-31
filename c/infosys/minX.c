#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int minX(int N,int* A){
 int min=0;

// 6 5 3 2
//a[i3]>a[j1]
//min a[j]=1;

    for (int i = 0; i < N; i++)
    {
      for (int j =i+1 ; j <N; j++)
      {
        if(A[i]>A[j]){
            min=A[j];
        }
      }
      

    }
    
 
    return min;
    
 }


int main(){

    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){

        scanf("%d",&A[i]);

    }
int result = minX(N,A);

printf("\n%d",result);

printf("\n");
system("pause");
system("cls");

return 0;
}