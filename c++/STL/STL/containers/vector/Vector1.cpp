#include<bits/stdc++.h>

using namespace std;



int main(){

    /*
    vector functions
    # push_back()
    # front()
    # back()
    # reverse()
    # empty()
    # size()
    # insert()
    # vector_name.insert (position, val)
    // # insert(position , ele_num, value)
    # erase()
    # assign()
    # sort()
    # remove(value)
    # clear()
    # capacity()



###### Iterators: #####
begin()
Return iterator to beginning (public member function )
end()
Return iterator to end (public member function )
rbegin()
Return reverse iterator to reverse beginning (public member function )
rend()
Return reverse iterator to reverse end (public member function )
cbegin() 
Return const_iterator to beginning (public member function )
cend() 
Return const_iterator to end (public member function )
crbegin() 
Return const_reverse_iterator to reverse beginning (public member function )
crend() 
Return const_reverse_iterator to reverse end (public member function )

###### Capacity: #########
size()
Return size (public member function )
max_size()
Return maximum size (public member function )
resize()
Change size (public member function )
capacity()
Return size of allocated storage capacity (public member function )
empty()
Test whether vector is empty (public member function )
reserve()
Request a change in capacity (public member function )
shrink_to_fit() 
Shrink to fit (public member function )

####### Element access: ######
operator[]
Access element (public member function )
at()
Access element (public member function )
front()
Access first element (public member function )
back()
Access last element (public member function )
data() 
Access data (public member function )

Modifiers:
assign()
Assign vector content (public member function )
push_back()
Add element at the end (public member function )
pop_back()
Delete last element (public member function )
insert()
Insert elements (public member function )
erase()
Erase elements (public member function )
swap()
Swap content (public member function )
clear()
Clear content (public member function )
emplace() 
Construct and insert element (public member function )
emplace_back() 
Construct and insert element at the end (public member function )

Allocator:
get_allocator()
Get allocator (public member function )


*/
    
    vector<int> vec1={2,5,7,9,4,6,7,2,9,4,2,9},v1={6,7,9};

// or 

    // vector<int> v2;
    // v2.push_back(2);
    // v2.push_back(4);
    // v2.push_back(7);

// OR we can also insert element like this 

//  vec1[0]=3;
//  vec1[1]=6;
//  vec1[2]=12;

// OR

// vector<int>:: iterator ite = vec1.begin();
// or
//   auto it = vec1.begin();

// vec1.insert(ite+1,20);

// vector<int> vector1;
    // for(int i=1;i<=10;i++){
    //     vector1.push_back(i*i);
    // }
     

    // vec1.pop_back();
    // int nu = vec1.front();
    // int nu1 = vec1.back();
    // cout <<nu <<" "<<nu1;// 2
    // cout<<vec1.size()<<endl;
    // cout<<vec1.capacity()<<endl;
    // cout << vec1.at(3)<<endl;//parameter pos return ele val



    //  vec1.clear();

    // we can define iterator as two typs 

//    vector<int>::iterator it ;
// or


        // sort(vec1.begin(),vec1.end());
        // sort(vec1.begin()+2,vec1.end()+3);
        // sort(vec1.begin(),vec1.end()+2);

  auto it = vec1.begin();
  auto ite = vec1.end();
  vec1.insert(ite,60);



    for(auto ls :vec1){
        cout <<" "<<ls;

    }
    cout<<endl;

    

    //   for(auto &ls :vector1){
    //     cout <<" "<<ls;
    // }


      



    cout<<endl;
    system("pause");
    system("cls");

    return 0;
}