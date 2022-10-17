 #include<bits/stdc++.h>
 #include<stdlib.h>
 using namespace std;


// still uncomplete task

void print(vector<int> &v){

for( auto &v1:v){
    cout<<v1<<" ";
    
}
cout<<endl;



//********* all counts *************//


// [2,6,7,7,8,8,8,8,1,1,1] 
// here count of all ele will calculated
// output will 
vector<int> v2{},v4{};
 
for( auto &v1:v){
  int  cnt = count(v.begin(),v.end() ,v1);
     v2.push_back(cnt);
    
}


for( auto &v6:v2){
    cout<<v6<<" ";
    
}
cout<<endl;


int temp = v2[0];
v4.push_back(temp);
 

 for(int i=0;i<v2.size();i++){
    int tem = v2[i];
    v4[i] =tem;
   
   if(temp != tem ){
    v4.push_back(tem);
   }
   

       
 }


for( auto &v5:v4){
    cout<<v5<<" ";
    
}
cout<<endl;
    



}


 

 

 










int main() {
system("cls");
 

vector<int> v{2,6,7,7,8,8,8,8,1,1,1};
print(v);
 
    
	
cout<<endl;
system("pause");
system("cls");
	
	return 0;
}
    
	
	
	
	
	
	
	
	
	
