#include<iostream>
#include<stdlib.h>

#include<string>
using namespace std;
string Password( string s);
string Password( string s){
    if(s.length() <4 ){
        return "Short PassWord";
    }
    if(s[0]>=48 && s[0]<=57){
      return "At first place not must be a digit in PassWord";

    }
    for(int i=0;i<=s.length();i++){

 
        if(s[i]==' ' && s[i]=='/' && s[i]>=28 && s[i]<=47){
              break;
              }
        return "InValid PassWord";
    }
  return "Valid PassWord";
 
}

int main(){

    string pass;
    cout<<"Eneter password"<<endl;
    getline(cin,pass);
    pass=Password(pass);
    cout<<pass;
    
    
    system("pause");
    system("cls");


    return 0;
}