#include<stdio.h>
#include<stdlib.h>
 

int main(){
    int r,temp;
    long int n,sum,m;
    printf("Enter two for finding between them armstrongs numbers\n");
    scanf("%d%d",&n,&m);

for(int i=n;i<m;i++){
 
   temp=i;
   sum=0;//@*** here sum must be initilised
    while (temp)
    {
        r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;
     }
    if(i==sum){
        printf("\n%ld is an armstrong number\n",sum);
    }
 }    

    return 0;
}


// #include<stdio.h>  
  
// int main()  
// {  
//     int num, count, rem, sum;  
  
// for(count=1;count<= 500;count++)  
//     {  
//         num = count;  
//         sum = 0;  
  
//         while(num)  
//         {  
//             rem = num % 10;  
//             sum = sum + (rem * rem * rem);  
//             num = num / 10;  
//         }  
  
//         if(count == sum)  
//         {  
//             printf("%d is a Armstrong number\n", count);  
//         }  
  
//      }  
  
//      return 0;  
// }  