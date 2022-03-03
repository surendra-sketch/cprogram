#include <stdio.h>
#include<stdlib.h>
int bresescounter(char s[20]);

int bresescounter(char s[20]){
  int count=0;
  for(int i=0;s[i]!='\0';i++){
        for(int j=i;s[j]!='\0';j++){
            if(s[i]==s[j]){
                 count++;
            }
            else{

                 return 0;
            }
      
  }
return count;
  }

}

 
int main() {
	printf("Enter a String\n");
	char brases[20];
     gets(brases);
     int num;
     num= bresescounter(brases);
     if(num!=0){
    	printf("\nSuccessful input and value is %d",num);
        }
        else{
            printf("Wrong input");
        }
	return 0;
}





