#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v[2]=100;
    //dont use [] for insertion
    //v[6]=75;
    v.pop_back();
    cout<<"Size: "<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    /*
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;

    //or
    cout<<v.at(2)<<endl;
    */


   for(int i=0;i<50;i++){
    cout<<"Cap: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    v.push_back(i+1);
   }
}