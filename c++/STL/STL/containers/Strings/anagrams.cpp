#include<bits/stdc++.h>
using namespace std;

bool checkAnagrams(string s1,string s2){

    int len1 = s1.size();
    int len2 = s2.size();


if(len1 != len2){
    return false;
}
else{
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());

     for(int i=0;i<len1;i++){
        if(s1[i] != s2[i]){
            return false;
        }
     }

}


    return true;

}



int main(){
    system("cls");

  string s1="yudfgs";
  string s2="sgfduy";
  sort(s1.begin(),s1.end());

  

  if(checkAnagrams(s1,s2)){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }

    cout<<endl;
    system("pause");
    system("cls");
    return 0;
}