#include<bits/stdc++.h>
#include<stdlib.h>
#include<map>
using namespace std;



int main(){
system("cls");
cout<<"Eneter a string\n";
string s;
cin>>s;
int count=0;
string s1 ="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
// cout<<s<<endl;

for(int i=0;i<s.length();i++){
    for(int j=0;j<s1.length();j++){

        if(s1[j] == s[i]){
            count++;
            break;
        } 

    }
    
 

}

cout<<"total consonents in string"<<"'"<<s<<"'"<<" is :"<<" "<<count;

 

cout<<"\n";
system("pause");
system("cls");
    
return 0;
}