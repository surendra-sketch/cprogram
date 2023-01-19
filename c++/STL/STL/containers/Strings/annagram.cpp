#include<bits/stdc++.h>
 using namespace std;


 bool chek_annagramString(string s1, string s2){

 int len1 = s1.size(),len2=s2.size();
 int sl1[26]={0} ,sl2[26]={0};


 if (len1 != len2)
 {
    return false;
 }
 else
 {
     for (int i=0;i<len1;i++){
        
        int lower = tolower(s1[i]);
        sl1[lower - 'a']++;

        int lower1 = tolower(s2[i]);
        sl2[lower1 -'a']++;
     }
     
    for (int i = 0; i < 26; i++)
    {
         if(sl1[i] != sl2[i]){
             return false;
         }
         

    }
    
 
    
 
 } 
 
 
     
 return true;
 
 }
  








int main(){
system("cls");



int t;
cin>>t;
while (t--)
{

string s1, s2;
cin>>s1>>s2;

    
if( chek_annagramString(s1,s2)){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}


}

  






system("pause");
system("cls");


return 0;
}