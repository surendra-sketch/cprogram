#include<bits/stdc++.h>
#include<vector>
#include<stdlib.h>
using namespace std;




// void print(vector <int> &v){
//     v.push_back(6); 
//     for(int i=0; i<v.size();++i)
//     {
//      cout<<v[i]<< " ";
//     }
  
// cout<<endl;
// }


// int main(){
// system("cls");

// int n; 
// cin>>n;


// vector<int> arr;

 
//  for(int i=0; i<n;i++){
//   int x;
//   cin>>x;
//   arr.push_back(x);
// }
 

//  for(int i=0; i<arr.size();i++){
//       cout<<arr[i]<< " ";
  
// }

// cout<<endl;
// print(arr);


////////// vector pair*****************



void print(vector <pair<int ,int>> &v){
    v.push_back({2,6});
     for(int i=0; i<v.size();++i)
    {
     cout<<v[i].first<< " "<<v[i].second<<" ";
    }
  
cout<<endl;
}


int main(){
system("cls");

int n; 
cin>>n;


// vector<pair <int ,int>> arr ={{1,2},{4,6},{4,8}};

  
vector<pair <int ,int>> arr;
 for(int i=0; i<n;i++){
    int x,y;
    cin>>x>>y;
    arr.push_back({x,y});
}


for(int i=0; i<arr.size();++i)
{
    cout<<arr[i].first<< " "<<arr[i].second<<" ";
} 

  

cout<<endl;
print(arr);



 //// ****** for strings ***************////////// 




// void print(vector <string> &v){
//     v.push_back("haha");

//     // vector<int> :: iterator it = v.begin();
 
//     for(int i=0; i<v.size();++i)
//     {
//      cout<<v[i]<< " ";
//     }
  
// cout<<endl;
// }


// int main(){
// system("cls");

// int n; 
// cin>>n;


// vector<string> arr;

 
//  for(int i=0; i<n;i++){
//   string x;
//   cin>>x;
//   arr.push_back(x);
// }
 

//  for(int i=0; i<arr.size();i++){
//       cout<<arr[i]<< " ";
  
// }
// cout<<endl;

// print(arr);
 

















system("pause");
system("cls");
return 0;
}