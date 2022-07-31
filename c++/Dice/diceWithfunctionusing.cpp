#include<iostream>
using namespace std;
int dice(int n);

int dice(int n){
    int count=0;
 if(n>=2 && n<=12){
     for(int i=1;i<=6;i++){
              for(int j=1;j<=6;j++){
                  if(i+j==n){
                       count++;
                  }
              }
     }
     return count;
 }
 else{
     return count;
 }
}

int main(){

    int possible_out_coumes,sum;
    cout<<"Enter any possible the sum of two dice\n";
    cin>>sum;
    possible_out_coumes=dice(sum);
    cout<<possible_out_coumes<<endl;

    system("pause");
    system("cls");
    return 0;
}