#include<iostream>
#include<list>
#include<string>
// contructor must same name as class and this has no return type
using namespace std;

class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string>PublishedVideoTitles;

    YouTubeChannel(string name,string ownername){
        Name =name;
        OwnerName=ownername;
        SubscribersCount=0;
    };
    void GetInfo(){
        cout<<"Name : "<<Name<<endl;
        cout<<"OwnerName : "<<OwnerName<<endl;
        cout<<"subscribes Count : "<<SubscribersCount<<endl;
        cout<<"Videos titles"<<endl;
       for(string videotitle:PublishedVideoTitles){
         cout<<videotitle<<endl;
       } 

    }
 
 };

 


int main(){

 
       YouTubeChannel ytchannel("GyanGanga","Surendra"),
        ytchannel1("Gyan sagar","Surendra2");

       ytchannel.PublishedVideoTitles={"c++ vedio playlist","my channel information","Hello from list"};
    //    for(string videotitle:ytchannel.PublishedVideoTitles){
    //      cout<<videotitle<<endl;
    //    } 

    // // Another way to asinging the titles***********
    // ytchannel.PublishedVideoTitles.push_back("C++");
    // ytchannel.PublishedVideoTitles.push_back("Java list");
    // ytchannel.PublishedVideoTitles.push_back("Coundfgyigfyigy");


       ytchannel.GetInfo();
       ytchannel1.GetInfo();
 

system("pause>0");
system("cls");

    return 0;
}