#include<bits/stdc++.h>
using namespace std;

string getString(string s){
    cout<<s<<endl;

    int n = s.size();
    string s1;
    for(int i=0;i<n;i++){
        cin>>s1;
    s.insert(i,s1);
    }
    

    cout<<s;

 return s;
}
int main(){

    string s;
    cin>>s;
    s =  getString(s);
    cout<<endl<<s;


    return 0;
}