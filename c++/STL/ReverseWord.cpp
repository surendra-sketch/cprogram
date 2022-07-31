#include<iostream>
#include<string.h>
#include<string>

using namespace std;

 
 

int main(){
string s =" surendra";
  
 
for(int i=0;s[i] !='\0';i++){
if(s[i]==' ' || s[i]=='.'){
 s[i+1] = s[i+1]-32;
}
 

}
for(int i=0;s[i] !='\0';i++){
 s[i]=s[i+1];
}

 cout<<s<<endl;
return 0;

}

