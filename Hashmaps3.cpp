#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    unordered_map<string,int> ourmap;
    ourmap["abc"]=1;
    ourmap["abc2"]=2;
    ourmap["abc3"]=3;
    ourmap["abc4"]=4;
    ourmap["abc5"]=5;
    ourmap["abc6"]=6;
    //iterator for unordered map
    unordered_map<string,int>::iterator it=ourmap.begin();
    while(it!=ourmap.end()){
        cout<<"Key: "<<it->first<<" "<<"Value: "<<it->second<<endl;
        it++;
    }
    //find  same in vector
    unordered_map<string,int>::iterator it2=ourmap.find("abc");
    cout<<it2->first<<" "<<it2->second<<endl;
    //erase
    ourmap.erase(it2);


    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //iterator for vector
    vector<int>::iterator it1=v.begin();
    while(it1!=v.end()){
        cout<<*it1<<endl;
        it1++;
    }


}