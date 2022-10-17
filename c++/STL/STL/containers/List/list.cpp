#include<bits/stdc++.h>

using namespace std;



int main(){

    /*
    list functions
    # push_back()
    # push_front()
    # front()
    # back()
    # reverse()
    # empty()
    # size()
    # insert()
    # insert(position , ele_num, value)
    # erase()
    # list_name.erase(iterator position)
    # assign()
    # sort()
    # remove(value)
    # clear()


    */
    
    list<int> list1;

    for(int i=1;i<=10;i++){
        list1.push_back(i*i);
        list1.push_front(i*i*i);
    }

    for(auto ls :list1){
        cout <<" "<<ls;
    }
    cout<<endl;

    // cout<<list1.front()<<" "<<list1.back();

    // int size = list1.size();
    // cout<<endl<<size<<endl;

    
    //  list1.sort();
    //  list1.reverse();

    // list1.remove(100);// take vale that u wnat remove
    // cout <<"after removing "<<endl;

    // list1.clear();
    // cout <<"after clear "<<endl;

    // list1.assign(3, 2);

    //  list<int>::iterator it = list1.begin();
    //  // iterator to point to 3rd position
    //  advance(it, 2);// point 3rd position
    // //  list1.insert(it,33);
    //  list1.insert(it,5,20);


    //  list<int>::iterator it = list1.begin();
    //  list1.erase(it);//erase single element for this can use pop too
   

    // list<int>::iterator it = list1.begin();
    // list<int>::iterator it1 = list1.begin();
    // advance(it1, 2);// point 3rd position
    // list1.erase(it ,it1);//erase in range 
     

    // int emp = list1.empty();// return 1 or 0
    //  cout <<" "<<emp;


      for(auto &ls :list1){
        cout <<" "<<ls;
    }


      



    cout<<endl;
    system("pause");
    system("cls");

    return 0;
}