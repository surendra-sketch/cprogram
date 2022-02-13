#include<iostream>
#include<string>
using namespace std;

/*
here we need to print out permutation of given string for eg if input is 'ABC' THEN OP MUST BE 6
IF INPUT IS "abcd" 
*/ 

int main(){
 string s;   
 int fact=1,count=0;
 cout<<"Enter a string\n";
//  cin>>s;//it will only continous string not with white space
getline(cin,s);
int len=s.length();
cout<<"string length is : "<<len<<"\n";

for(int i=len;i>=1;i--)
{ 
fact = fact * i;

}
cout<<fact<<endl;

// print repeative elemnts

    for(int i = 0; i < len; i++) {    
        for(int j = i + 1; j < len; j++) {    
             if(s[i] == s[j])    
             cout<<s[j];
          }    
    }    








cout<<endl;
system("pause>0");
system("cls");


    return 0;
}