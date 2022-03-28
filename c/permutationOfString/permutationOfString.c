#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
char  name[100],newname[]={};
printf("Enter any word\n");
gets(name);
int n,count=0,countarr[100]={},fact1=1,overallfact=0;
n=strlen(name);
// puts(name);

for(int i=1;i<=n;i++){
    fact1 = fact1 *i;
}
printf("\nfact1=%d\n",fact1);
for(int i=0;i<=n;i++){
    count=0;
    for(int j=i;j<=n;j++){
        if(name[i]==name[j]){
            count++;
            if(count>1){
//for getting correct o/p comment counter[i] below line
            // printf("%c \n",name[j]);
            countarr[i]=count;
            }
            newname[i]=name[i];

        }

    }
    printf("%d ",countarr[i]);
}
printf("\n");

for(int i=0;i<=n;i++){
    int temp;
    for(int j=i;j<=n;j++){
      if(countarr[i]<countarr[j]){
          temp=countarr[j];
          countarr[j]=countarr[i];
          countarr[i]=temp;
      }

    }
}

int arr2[100]={0},subarrlenth=0;

for(int i=0;i<=n;i++){
    printf("%d ",countarr[i]);
    if(countarr[i] !=0){
        subarrlenth++;
        arr2[i]=countarr[i];
      
    }
}
printf("\n");
for(int i=0;i<subarrlenth;i++){
    printf("%d ",arr2[i]);
 }
printf("subarrlength=%d",subarrlenth);

int fact=1;
for(int i=0;i<subarrlenth;i++){
int temp=0;
temp=arr2[i];
for(int j=1;j<=temp;j++){
  fact=fact*j;
}
}
printf("\nfact=%d\n",fact);

overallfact=fact1/fact;
printf("\npermutation=%d\n",overallfact);


// puts(newname); 
printf("\n");
system("pause");
system("cls");


}