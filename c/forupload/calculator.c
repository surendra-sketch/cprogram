#include <stdio.h>
#include <stdlib.h>

void main()
{   int a,b,c;
    printf("enter two number for operation\n\n");
    scanf("%d%d", &a,&b);
    printf("for addion 1\n for multiplication 2\n for division 3\n for substractions 4\n");
    scanf("%d", &c);
    printf("entererd num is %d\n ", c);
    switch(c){
    case 1:{
    c=a+b;
    printf("sum is = %d\n ",c);
    }
    break;
    case 2:{
    c=a*b;
    printf("multiplication  is = %d\n ",c);
    }
    break;
    case 3:{
    c=a/b;
    printf("division is = %d \n",c);
    }
    break;
    case 4:{
    c=a-b;
    printf("substraction is = %d\n ",c);
    }
    }
  system("pause");
  system("cls");

 

}
