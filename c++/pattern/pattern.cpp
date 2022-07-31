#include<iostream>
using namespace std;


int main(){

    int n,i,j;
    cout<<"Enter a number between 5 to 10 number\n";
    cin>>n;
    
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            cout<<"  ";
        }
        cout<<"*\n";
    }
 
 
    system("pause");
    system("cls");
    return 0;
}