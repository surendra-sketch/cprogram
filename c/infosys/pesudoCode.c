#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


/* 
int global=5;

void display(){
    global--;
    printf("%d\n",global);
}

void main(){
global++;
display();
global++;
global++;
display();

system("pause");
}
*/


int sub(int a,int b){
    a=20;
    return(a-b);
}

 

void main(){
    system("cls");
    printf("%d\n",sub(40,10));
    system("pause");

}