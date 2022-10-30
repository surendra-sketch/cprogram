#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;



int main(){
system("cls");

unordered_map<string,int>countwordfrequncy;

vector<string>str1{"hello","hello","jiji","jiji","hehe"};

for(auto str2:str1){
    countwordfrequncy[str2]++;
    // cout<<str2<<" ";
}

vector<string>v1;
vector<int>v2;

for(auto &count1:countwordfrequncy){
     cout<<count1.first<<" "<<count1.second<<endl;
    //  extracting int & str value below
     v1.push_back(count1.first);
     v2.push_back(count1.second);
}

cout<<endl;

for(auto vcet:v1){
    cout<<vcet<<" ";
}


cout<<endl;
for(auto vcet:v2){
    cout<<vcet<<" ";
}
 

  
cout<<endl;
system("pause");
system("cls");


return 0;
}