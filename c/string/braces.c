#include <stdio.h>
#include<stdlib.h>

int main() {
	printf("Enter a String\n");
	char brases[20];
	fgets(brases,20,stdin);
    // gets(brases); optional
	
	
	
	
	
	
	if(brases[0] == '{'){
	    printf("open");
	}else{
	    printf("close");
	}
	
	printf("%s",brases);
  
  
	return 0;
}





