#include<stdio.h>

/*union is similar to struct,expet it allow you to define variable
that share storage space .
define union means creating new data type

different bw struct and union is memory allocation, in struct var each and evry data type
consist different memory block but in case of unio it is only one block
the memory will allow to union regarding with it's bigest data type.

*/

union  book
{
   int bookid;
   float bookPrice;
   char  Grade;
//    here this size of union will be 4 byte because float is the bigest data type in all of them.
};

int main(){


union book book1;
// book1.bookid=2;
book1.Grade='a';
book1.bookPrice=37;
// printf("\n%c",book1.Grade); 
// printf("\n%d",book1.bookid);

printf("\n%d",book1.bookPrice); 
// printf("\n%c",book1.Grade); 
// printf("\n%d",book1.bookid); 





printf("\n");

    return 0;

}