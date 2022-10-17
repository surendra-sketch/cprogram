#include<bits/stdc++.h>
#include<string.h>

/*
// stack 
// operation
(1) push
(2) pop
(3) top
(4) empty
(5) size
(6) swap
(7) emplace

// Queues
(1) push
(2) pop
(3) front


*/ 
  
using namespace std;


int main(){

    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(4);

    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    

 
    system("pause") ;
    system("cls");
    return 0;
}