#include<stdio.h>
#include<string.h>
int password(char s[8]){

 int num =0,cap=0 ;
 if(strlen(s)>8){
  printf("Invaid password ! \nPassword must be less than 8 charactors");
  return 0;
}

if(s[0]>=48 && s[0]<=57){
 printf("Invaid password ! \nDont put integer at first palce");
return 0;
}
for(int i=0;s[i]<="\0";i++){
if(s[i] == " "){
    return 0;
}else if (s[i]>=65 && s[i]>=90){
    cap=1;
    
 }
 else if (s[i]>=48 &&s[i]<=57){
    num=1;
 }

return  (num&&cap) ;
}

}



int main (){
printf("Enter a password with max lenth 8 \n");

  char pass[8];
  scanf("%s",pass);

  int res;
  res= password(pass);

if(res==0){
 printf("Invaid password ! \n");
      
}
else{
     printf(" congratulation you inserted a Valid  password ! \n");
}
   

// printf("%d \n",res);
// printf("%s \n",pass);

//   for(int i=0;i<=4;i++){
//   }





system("pause");
system("cls");

return 0;
}