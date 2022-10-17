#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;



int main(){
system("cls");

/*
float num = 3.898977;
cout<<fixed<<num;
*/

 //**************  revers vector    *********************//

int n;
cin>>n;
vector<int> vect1(n);

for(int i=0;i<n;i++){
// for vector<int> vect1; declaration
// int x;
// cin>>x;
// vect1.push_back(x);

// for vector<int> vect1(n); declaration 
cin>>vect1[i];

}


/*
int sum = accumulate(vect1.begin(),vect1.end(),0);
cout<<sum;
*/

/**/

reverse(vect1.begin(),vect1.end());
for(auto &v:vect1){
    cout<<v<<" ";
}








cout<<endl;
system("pause");
system("cls");
    return 0;
}