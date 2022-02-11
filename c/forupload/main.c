#include <stdio.h>
//#include <stdlib.h
#include <string.h>

int main()

{
/*

//taking integer value input from user
int age;
printf("enter your age\n");
scanf("%d",&age);
printf("your age is: %d\n",age);
*/

/*
//taking decimal value input from user
double gpa;
printf("enter your gpa\n");
scanf("%lf",&gpa);
printf("your gpa is: %f\n",gpa);

*/



/*
//taking chractor value as input from user
char grade;
printf("enter your grade\n");
scanf("%c",&grade);
printf("grade is :%c", grade);
*/

/*

//printing string value
char name[]="surendra";
printf("your name is %s",name);
*/

/*
//taking string  value  from user
char name[20];
printf("\nEnter your name\n");
scanf("%s",name);
printf("\nyour name is :%s\n\n",name);

//but above code only gonna print the str value before white space after space you are not going to have another value
//Exp if u entered surendra singh
//op only be - surendra not surendra singh
//because there is space btw the surendra and singh


*/
 /*to over come from above problem see below method*/
/*
char name[20];
printf("\nEnter your name\n");
fgets(name,20,stdin);
printf("\n your name is :%s\n\n",name);
*/
/*
//copying a string or use of strcpy;

char name[20]="'surendra singh'";
char namee[20];
strcpy(namee,name);

printf("%s",namee);
*/



//compare two or more strings
/*
char name1[]="",name2[]="";
printf("Enter 1st string\n");
gets(name1);
printf("Enter second string\n");
gets(name2);
if(strcmp(name1,name2)){
    printf("both strings are equal");
}else{
printf("Not equal");
}
*/


/*
int ar[2][4]={1,2,3,4,5,6,7,8};
printf("%d%d",ar[0][3]);
*/


// char *ps="sure";
// printf("%s", ps);
// printf("%s", ++ps);
// printf("%s", ++ps[1]);


system("pause");
















    return 0;
}
