#include<bits/stdc++.h>
// #include<iostream>
// #include<stdlib.h>
// #include <sstream>
// #include<string>
// #include<string.h>
using namespace std;

int count_word(string s){
   // Used for breaking words
    stringstream st(s);
   
    // To store individual words
    string word;
 
    int count = 0;
    while (st >> word){
        count++;
    }

    return count;
}


int main(){
system("cls");
string s;
getline(cin,s);
cout<<"Total word are :"<<count_word(s);



cout<<endl;
system("pause");
system("cls");
    return 0;
}