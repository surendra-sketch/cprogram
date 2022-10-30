#include<bits/stdc++.h>

using namespace std;
 

int main(){
system("cls");

// int sticks=10;
// vector<int> v;
// int k=4;



// for (int i = 1; i <=sticks; i++)
// {
//     v.push_back(i);
// }

// reverse(v.begin()+k,v.end());
 

// //  sort(v.begin()+k,v.end());

// for(auto &v1:v){
//     cout<<v1<< " ";
// }

int sticks=10;
vector<int> v{3,5,32,1,7,9,87,3,90,5};
 

int k= v.back();
// cout<<k<<endl;


// for (int i = 1; i <=sticks; i++)
// {
//     int temp;
//     cin>>temp;
//     v.push_back(temp);
// }

 sort(v.begin(),v.begin()+k);
 sort(v.begin()+k,v.end());
reverse(v.begin()+k,v.end());
 


for(auto &v1:v){
    cout<<v1<< " ";
}


 

 

cout<<endl;
system("pause");
system("cls");
return 0;
}