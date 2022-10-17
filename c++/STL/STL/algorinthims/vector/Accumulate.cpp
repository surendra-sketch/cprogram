 #include<bits/stdc++.h>
 #include<stdlib.h>
 using namespace std;


int print(vector<int> &v){



for( auto &v1:v){
    cout<<v1<<" ";
    
}
cout<<endl<<"sum is below"<<endl;


// [2,6,7,8,1] 
int s = accumulate(v.begin(),v.end(),10);
// int s = accumulate(v.begin()+2,v.end()-2,0);

// here s+10;
 

 
return s;
}










int main() {
    system("cls");
	
// int n;
// cin>>n;

vector<int> v{2,6,7,8,1};
 
    
    
int sum = print(v);
cout <<sum<<endl;
	
	
	
	
	
	
	
	
	
	
    system("pause");
    system("cls");
	
	return 0;
}
