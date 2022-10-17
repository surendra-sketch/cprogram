 #include<bits/stdc++.h>
 #include<stdlib.h>
 using namespace std;


 
void print(vector<int> &v){

for( auto &v1:v){
    cout<<v1<<" ";
    
}
cout<<endl;
//********* find desired element *************//
// in find function 3rd parameter take desired value
auto it = find(v.begin(),v.end(),2);
int ele;
if(it != v.end()){
    cout<< *it <<endl;
    ele = *it;
}
else{
    cout<<" NOT FOUND "<<endl;
}

cout<<ele;

 

 
    


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
    
	
	
	
	
	
	
	
	
	
