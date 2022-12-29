#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    unordered_map<string , int> ourmap;
    //insert
    pair<string,int> p("abc",1);
    ourmap.insert(p);
    ourmap["def"]=2;//or we can insert directly

    //find or access
    cout<<ourmap["abc"]<<endl;
    cout<<ourmap.at("def")<<endl;
    //cout<<ourmap.at("ghi")<<endl;    error will come as it is not present
    cout<<"Size: "<<ourmap.size()<<endl;
    cout<<ourmap["ghi"]<<endl;//it will insert the element with value 0
    cout<<"Size: "<<ourmap.size()<<endl;

    //check presence   
    if(ourmap.count("ghi")>0){//count fn will return 1 if element is present or 0 if element is not present
        cout<<"ghi is present"<<endl;
    } 

    //erase
    ourmap.erase("ghi");
    cout<<"Size: "<<ourmap.size()<<endl;
    if(ourmap.count("ghi")>0){
        cout<<"ghi is present"<<endl;
    } 


}