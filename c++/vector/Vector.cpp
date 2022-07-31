#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){
system("cls");
//vector is a dynamic array type class
// it has  some func as
// size() tells size of vector,
// push_back() it add value to the end of vector ,
// pop_back() it removes value of the of vector from end ,
//capacity , tells capacity of vector
// clear(), delete all elements

// itrater() for inserting the value at desired index

//initial capacity of vector by default is 1 but when we initialize
//then the give size will be capacity and it increses every times by double

// Declaration of vector as int type

/*
vector <int> first_vector;
// &&&&&&&& initializing of vetor by default it is capacity is 1; &&&&&&&&&
 vector <int> v1{12,34,56};//o/p 12 34 56
 for(int i=0;i<v1.size();i++){
 cout<<" "<<v1[i];
}
cout<<"\n";

*/

//&&&&&&&&&&& initializing with size   &&&&&&&&&&&&&&
 // in given vector below the first integer shows it is size and second
 // and second integer shows value means 20 asingned for 4 times
 // as - 20 20 20 20 

 /*
 vector <int> v2(4,20);
 for(int i=0;i<v2.size();i++){
 cout<<" "<<v2[i];
}
*/


// Declaration of vector as String type
/*
vector <string> second_vect {"hello","ji","hema"};
cout<<second_vect[0];//op hello
cout<<second_vect[1];//op ji
cout<<second_vect[2];//op hema
*/

//  Another method of initializing with size
//it will print 4 times content

/*
vector <string> str(4,"sexy bab");
for(int i=0;i<str.size();i++){
cout<<"\n"<<str[i];
}
*/



//****** use of push_back()  & pop_back() **********
/*
vector <int> v1{1,2,2};
cout<<" current capacity "<<v1.capacity()<<"\n";
v1.push_back(13);

for(int i=0;i<v1.size();i++){
cout<<" "<<v1[i];
}
//op 1 2 2 13
cout<<"\nafter push capacity "<<v1.capacity()<<"\n";

v1.pop_back();
for(int i=0;i<v1.size();i++){
cout<<" "<<v1[i];
}
//op 1 2 2 
cout<<" capacity "<<v1.capacity()<<"\n it means capacity dont reduce once incresed";
*/


/*
//****** use of capacity() **********
vector <int> v1;
cout<<v1.capacity()<<endl;
v1.push_back(12);
cout<<v1.capacity();
*/

 
// Use of clear(), for delete all elements
/*
vector <int> v1{1,2,3,3};
cout<<v1.capacity()<<endl;
v1.clear();
cout<<v1.capacity();
for(int i=0;i<v1.size();i++){
cout<<" "<<v1[i];
}

*/


//use of iterator

vector <int> v1{1,2,3,3};

for(int i=0;i<v1.size();i++){
cout<<" "<<v1[i];
}
cout<<" \n";

vector <int>:: iterator ite = v1.begin();

v1.insert(ite+1,23);//it will insert 23 at index 1 of v1
for(int i=0;i<v1.size();i++){
cout<<" "<<v1[i];
}

cout<<"\n\n";
system("\npause\n");
system("cls");
return 0;
}
 