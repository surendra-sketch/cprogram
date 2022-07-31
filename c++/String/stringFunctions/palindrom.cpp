#include<bits/stdc++.h>
#include<string.h>
  
//  palindrom string or not 
 
using namespace std;


int main(){

/*

      string str1,str2;
      getline(cin,str1);
       
      for(int i=str1.size()-1;i>=0;--i){
         str2.push_back(str1[i]);
      }
      
      if(str1 == str2){

       cout<<"YES"<<endl;
      }
      else{
       cout<<"NO"<<endl;

      }

*/


// dealing with long number by string
string s;
cin>>s;

int last_digit =s[s.size()-1]-'0';
cout<<last_digit;

    

    system("pause") ;
    system("cls");
    return 0;
}