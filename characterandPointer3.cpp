#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3};
    char str[]="rahul";
    cout<<a<<endl;
    cout<<str<<endl;//character array acts  differently then normal array ;it prints actual value rather than address
    cout<<*str<<endl;
    char* ptr= &str[0];
    cout<<ptr<<endl;
    char c='a';
    char* p= &c;
    cout<<c<<endl;
    cout<<p<<endl;



}