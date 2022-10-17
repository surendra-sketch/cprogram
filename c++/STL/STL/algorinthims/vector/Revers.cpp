 #include<bits/stdc++.h>
 #include<stdlib.h>
 using namespace std;


 
void print(vector<int> &v){

for( auto &v1:v){
    cout<<v1<<" ";
    
}
cout<<endl;
// reverse(v.begin(),v.end());
// reverse(v.begin()+2,v.end());
reverse(v.begin()+2,v.end()-1);

for( auto &v1:v){
    cout<<v1<<" ";
    
}

 
    


cout<<endl;

}


 

 

 










int main() {
system("cls");
 

vector<int> v{2,6,4,7,8,1};
print(v);
 
    
	
cout<<endl;
system("pause");
system("cls");
	
return 0;
}
    
	
	
	
	
	
	
	
	
	
