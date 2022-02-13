#include<iostream>
using namespace std;

int BalanceFruits(int a,int m, int rs);
int main(){
  int a,m,rs;
  cout<<"Enter three numbers\n";
  cin>>a>>m>>rs;
  cout<<BalanceFruits(a,m,rs);


system("pause>0");
system("cls");
return 0;
}

// suppose a=8,m=4,rs=6
// here a>m so a-m mangos will bought at rs 1per rs meanse 8-4=4
// then then rupess left with us 6-4=2 as o/p
int BalanceFruits(int a,int m, int rs)
{
   int rupess,mangose;
   if(a>m)
    {
      mangose=a-m;
      rupess=rs-mangose;
      return rupess;
    }
    else if (a<m)
   {
      mangose=m-a;
      rupess=rs+mangose;
      return rupess;

   }
   else
   {
       return rs;
   }
   
}