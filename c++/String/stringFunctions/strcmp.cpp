#include<bits/stdc++.h>
#include<string.h>
  
 
using namespace std;

 

int main(){

    // 
    // string s="hello"; 
    // string str1;
    // cin>>str1;
    // cout<<s<<" "<<str1<<endl;


// compare 

//     string s1="hello"; 
//     string s2="hello"; 
//     string result = s1 +s2;
//     cout<<result.size()<<endl;
// // basic method
//     if (s1==s2)
//     {
//         cout<<"Equal"<<endl;

//     }
//     else
//     {
//         cout<<"Not Equal"<<endl;

//     }
// // user input
//       string str1,str2;
//       cin>>str1>>str2;
//       cout<<str1<<" "<<str2<<endl;
    
    

// // // user input with space
//       string str1,str2;
//       getline(cin,str1);
//       getline(cin,str2);
//      cout<<str1<<endl<<str2<<endl;
 
 
// // user multi line input with space
// int n;
// cin>>n;
// cin.ignore();// it will shift the cursor to next line to avoid 
// // space in same line of after n;
// while(n--){
//       string str1;
//       getline(cin,str1);
//       cout<<str1<<endl;
       

// }


// // compare string with the help of function
      string str1,str2;
      getline(cin,str1);
      
      for(int i=str1.size()-1;i>=0;--i){
        // str2= str2 + str1[i];
        // or
        str2.push_back(str1[i]);
      }
      
     cout<<str2<<endl;

    

    system("pause") ;
    system("cls");
    return 0;
}