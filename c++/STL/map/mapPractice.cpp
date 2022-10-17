#include<iostream>
#include<stdlib.h>
#include<map>
#include<unordered_map>
#include<vector>
#include<bits/stdc++.h>
 
using namespace std;

int main(){
 system("cls");
 
/*
map<int,string> m1;

// m1[5] ="ass";
// m1[2] ="a777";
// m1[1] ="vvaa";

// OR

//  m1={{8,"hehhe"},{3,"oookk"},{6,"geekskk"}};

for (int i=0;i<2;i++){
    int a;
    string s1;
    cin>>a>>s1;
    m1.insert({{a,s1}});
}
    system("cls");

for(auto &m2:m1){
    cout<<m2.first<<" "<<m2.second<<endl;
}
*/  




/*
// calculte frequency in of lettters in given instring
string s="hhhoopqqq";
map<char,int> calculteCharFr;

for(auto &str:s){
calculteCharFr[str]++;
}
for(auto &cal:calculteCharFr){
 cout<<cal.first << " "<<cal.second<<endl;
 }
*/





/*
// calculte frequency in of lettters in given instring
// for n test case

int n;
cin>>n;
while (n--)
{
    string s;
    cin>>s;
    map<char,int> calculteCharFr;
    for(auto &str:s){
    calculteCharFr[str]++;
    }
    for(auto &cal:calculteCharFr){
    cout<<cal.first << " "<<cal.second<<endl;
    }
}
*/

// calculte frequency in of lettters in given instring
// for n test case same case for undered map

int n;
cin>>n;
vector<int>vect;

while (n--)
{
    string s;
    cin>>s;
    
    unordered_map<char,int> calculteCharFr;
    for(auto &str:s){
    calculteCharFr[str]++;
    }
    for(auto &cal:calculteCharFr){
    cout<<cal.first << " "<<cal.second<<endl;
    vect.push_back(cal.second);
    }

}

 
sort(vect.begin(),vect.end());

for(auto &v1:vect){
    cout<<v1<<" ";

}









     





    cout<<endl;
    system("pause");
    system("cls");


    return 0;
}