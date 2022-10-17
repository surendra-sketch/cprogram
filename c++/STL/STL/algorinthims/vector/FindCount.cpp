 #include<bits/stdc++.h>
 #include<stdlib.h>
 using namespace std;




int print(vector<int> &v){

for( auto &v1:v){
    cout<<v1<<" ";
    
}
cout<<endl;


// [2,6,7,7,8,1] 
// here count of seven will calculated
// output will 2

int cnt = count(v.begin(),v.end() ,7);
cout<<endl<<"count is below"<<endl;

 
 

 

 

 
return cnt;
}










int main() {
system("cls");
 

vector<int> v{2,6,7,7,1};
 
    
    
int count = print(v);
cout <<count<<endl;
	
	
	
	
	
	
	
	
	
	
    system("pause");
    system("cls");
	
	return 0;
}
