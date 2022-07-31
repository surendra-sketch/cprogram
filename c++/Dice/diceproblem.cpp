#include<iostream>
using namespace std;


int main(){

    int n,i,j,count=0;

    cout<<"Enter the sum of two dice\n";
    cin>>n;

   if(n>=2 && n<=12){
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            if(i+j==n){
                count++;
            }
        }
    }
    cout<<count<<endl;
    }
    else{
    cout<<count<<endl;
    }
    system("pause");
    system("cls");
    return 0;
}