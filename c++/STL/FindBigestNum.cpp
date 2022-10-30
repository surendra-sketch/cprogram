#include<bits/stdc++.h>
using namespace std;

int main(){
 
int num=0,temp=0, arr[6]={2,57,7,9,3,1};
    
for(int i=0;i<6;i++){
    temp=arr[0];
     for(int j=0;j<6;j++){

        if(arr[j]>temp){
            temp =arr[j];
            num =temp;
        }

     }

}

     
 
    
    




cout<<endl<<num<<endl;

    system("pause");
    system("cls");
    return 0;
}