#include<bits/stdc++.h>
using namespace std;

int main(){

    system("cls");


int a[]={309,7,900,10,5,66,4,70};
int n=a[0];
/*
// for bigest element
for(int i=0;i<7;i++){
    if(n<a[i]){
        n=a[i];
    }
}
*/ 

// for smallest element
for(int i=0;i<7;i++){
    if(n>a[i]){
        n=a[i];
    }
}

cout<<n<<endl;









/*
    const char s3[5]="\\tyu";
    const char s4[]= "\\tyu";
    cout<<s3<<endl<<s4<<endl;

*/ 
  

    system("pause");
    system("cls");
    return 0;
}