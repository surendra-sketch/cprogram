/* encapsulation is the concept of oops ,that is used to wrap the data
member or properties and member methods into a single unit 
The main purpose of encapsulation to secure the data
*/ 




#include<iostream>
#include<string>

using namespace std;


class Thief
{
private:
    string name,address;
    int mobile;
public:
    // Thief(/* args */);
    void info(){
        name="Surendra";
        address="H No 36 delhi beerana buliding 3-floor";
        mobile=876565757;
    }
    void Getinfo(){
        cout<<name<<endl;
        cout<<address<<endl; 
        cout<<mobile<<endl;
    }
};

class police:public Thief{

};
 

int  main (){
    // Thief chore1;
    // chore1.info();
    // chore1.Getinfo();

    police p;
    p.info();
    p.Getinfo();


    system("pause>0");
    system("cls");
    return 0;
}