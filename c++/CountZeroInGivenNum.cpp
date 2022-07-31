#include<iostream>

using namespace std;
 
int CheckZero(int a);
int CheckZero(int a){
int count=0;    
while (a!=0)
{
    if(a%2==0){
       count++;
      a=a/2;
    }

    else{
        a=a-1;
    }
}
return count;
}


int main(){
cout<<"Enter a number\n";
  int count;
  cin>>count;
  cout<<CheckZero(count);
 return 0;
}