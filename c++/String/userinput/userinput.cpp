#include<iostream>
#include<stdlib.h>

#include<string>
using namespace std;

int main(){



    string Name="Surendara", LastName=" Singh",fullname,copy_test;
    cout<<Name<<endl;     
    cout<<LastName<<endl; 
   
      fullname=Name.append(LastName);
      cout<<fullname;
      cout<<copy_test;

    // string fulname= Name +" "+ LastName;
    // cout<<fulname ;  
   
 
    system("pause");
    system("cls");


    return 0;
}