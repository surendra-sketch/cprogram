#include<iostream>
#include<list>
#include<string.h>
#include<vector>
#include<stdlib.h>

using namespace std;

int main(){

/*
// List class
// Can be accessed sequentialy
// list's functions  
// (1) sort()
// (2) size()
// (3a) push_back()
// (3b) push_front()

// (4a) pop_back()
// (4b) pop_front()
// (5)  reverse()
// (6) remove()
// (7) clear()

*/

system("cls");

// declaration of list
list <int> list1;
//or
list <int> list2{11,56,3,56,9};
list <string> list3{"sure","singh","all","ball"};

// use of sort
list2.sort();



// use of push back push front
// list2.push_back(12);
// list2.push_front(90);

// use of reverse
// list2.reverse();

// use of remove()

list2.remove(9);


// we can access list using [] bracktes , 
// list2[4] it will show error , to avoid error use iterator
list <int>:: iterator li = list2.begin();
 while (li != list2.end())
 {
    cout<<*li<<" ";
    li++;
 }

printf("\n");

list3.sort();

//Use of pop back & pop front

// list3.pop_back();
// list3.pop_front();
list <string>:: iterator it = list3.begin();

while (it != list3.end())
{
    cout<<*it <<" ";
    it++;
}

 


 
 

printf("\n");
system("pause");
system("cls");
return 0;
}