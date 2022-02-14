#include<iostream>
using namespace std;



class youtube
{
private:
    int a,b;
public:
  void sum(int a,int b){
      int c;
      c=a+b;
      cout<<"sum is "<<c;
  }
    youtube(){
        cout<<"constructor \n";
    };
    // ~youtube();
};

 




int main(){

    youtube channel,s,sc,v;
    channel.sum(2,3);


    return 0;
}