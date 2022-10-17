 #include<bits/stdc++.h>
 using namespace std;
 

void countChar(string &s1,vector<int> &vect){
    unordered_map<char,int> calculteCharFr;
    for(auto &str:s1){
    calculteCharFr[str]++;
    }
    for(auto &cal:calculteCharFr){
    cout<<cal.first << " "<<cal.second<<endl;
    vect.push_back(cal.second);
    }
     
sort(vect.begin(),vect.end());
 cout<<endl;
for(auto &v1:vect){
    cout<<v1<<" ";

}



}



int main(){
system("cls");
 
int n;
cin>>n;
vector<int>vect;

while (n--)
{
    string s;
    cin>>s;

 countChar(s,vect);
    
   
}










     





    cout<<endl;
    system("pause");
    system("cls");


    return 0;
}