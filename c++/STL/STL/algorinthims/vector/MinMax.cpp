 #include<bits/stdc++.h>
 #include<stdlib.h>
 using namespace std;


 void print(vector<int> &v){


for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
    
}
cout<<endl;

for( auto &v1:v){
    cout<<v1<<" ";
    
}

cout<<endl;

// int min = *min_element(v.begin(),v.end());
// int max = *max_element(v.begin(),v.end());

// we can find element in desired range for example
// v.min/max_element(v.begin()+2,v.end()-2)

// [2,4,55,6,8,9,12,5,67]


// int max = *max_element(v.begin()+1,v.end()+2);
// cout<<max<<endl;	


// cout<<v.end();


 }









int main() {
    system("cls");
	
int n;
cin>>n;

vector<int> v(n) ;

for(int i=0; i<n;i++){
    cin>>v[i];
    
}
    
    
print(v);

	
	
	
	
	
	
	
	
	
	
    system("pause");
    system("cls");
	
	return 0;
}
