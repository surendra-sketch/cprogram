#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;



int main(){
system("cls");


map<string,int>count;
int num=5;


// while(num--){
// string s;
// cin>>s;
// count[s]++;

// }

// for(auto s1:count){
// cout<<s1.first<<" "<<s1.second<<endl;

// }

// perform it automatic
// string s2="hehe ji js ki";
string s2;
getline(cin,s2);

stringstream st(s2);

string word;
int coun =0;
while (st>>word)
{      
      coun++;
      cout<<word;
/* it will calculate total number of words in a entered string*/
 }
cout<<endl<<coun;


cout<<endl;
system("pause");
system("cls");


return 0;
}