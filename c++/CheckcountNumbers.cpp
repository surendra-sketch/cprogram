#include<iostream>
using namespace std;

int countSpecficnumbers(int m,int n);





int main(){
int m,n;
cout<<"Enter two numbers\n";
cin>>m>>n;
cout<<countSpecficnumbers(m,n)<<endl;

system("pause>0");
system("cls");
return 0;
}

int countSpecficnumbers(int m,int n)
{
if(m<=n)
       {
         int i, count=0;
         for(i=m;i<=n;i++)
            {
                int num=i, flag=1;
                while (num)
                {
                    int n=num%10;
                    num=num/10;
                    if(n==1 || n==4 || n==9)
                    {
                        continue;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    count++;

                }
            }
             return count;
       }  
       return -1;
}



 