 #include<bits/stdc++.h>
 #include<stdlib.h>
 using namespace std;


//  void print(int v[],int n){
void print(int *v,int n){


for(int i=0; i<n;i++){
    cout<<v[i]<<" ";
    
}
cout<<endl;
  
// [1,9,8,3,6,2]

// int min = *min_element(v,v+n);
// int max = *max_element(v,v+n);

int min = *min_element(v+2,v+n);
int max = *max_element(v+2,v+n);
cout<<min<<" "<<max<<endl;
 


 }









int main() {
    system("cls");
	
int n;
cin>>n;

int v[n];

for(int i=0; i<n;i++){
    cin>>v[i];
    
}
    
    
print(v,n);

	
	
	
	
	
	
	
	
	
	
    system("pause");
    system("cls");
	
	return 0;
}
