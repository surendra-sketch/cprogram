#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

void printarr(vector<int> &v1){
v1.push_back(8); 
// now vet is 3,3,7,5,1,21,23,8



// find min element
int min =*min_element(v1.begin(),v1.end());
cout<<"min ele:"<<min<<endl;

// find max element
int max =*max_element(v1.begin()+2,v1.end()-2);
cout<<"max ele:"<<max<<endl;

// find  sum
int sum =accumulate(v1.begin()+2,v1.end()-2,0);
cout<<"sum:"<<sum<<endl;

// find  sum
int countt =count(v1.begin(),v1.end(),3);
cout<<"count of 3 ele is:"<<countt<<endl;

// find  desired ele wrong method ,will return garbage val
int desire = *find(v1.begin(),v1.end(),31);
cout<<"desierd ele is:"<<desire<<endl;

//OR find  desired ele
auto desired = find(v1.begin(),v1.end(),31);
if(desired != v1.end()){
cout<<"desierd ele is:"<< *desired<<endl;
}
else{
    cout<<"NOt Found\n";
}

 for(auto &v:v1){
     cout<<v<<" ";
}
 
//Revers vect,arr,string

// cout<<"\nrevers vect\n";
// reverse(v1.begin()+3,v1.end());
// for(auto &v:v1){
//      cout<<v<<" ";
// }
cout<<"\nrevers vect\n";
reverse(v1.begin()+2,v1.end()-3);
for(auto &v:v1){
     cout<<v<<" ";
}
 
cout<<endl;
string s ="surendra";
 reverse(s.begin(),s.end());
 cout<<s<<endl;


}

int main(){
system("cls");


vector<int> v1{3,3,7,5,1,21,23};


// vector<int> v1;
// for(int i=0;i<5;i++){
//     int b;
//     cin>>b;
//     v1.push_back(b);
// }

// OR we can also take input direct without any 3rd var


// vector<int> v1(5);
// for(int i=0;i<v1.size();i++){
//     cin>>v1[i];
// }


     
printarr(v1);

cout<<"\n";
system("pause");
system("cls");
    
return 0;
}