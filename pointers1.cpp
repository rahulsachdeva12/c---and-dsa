#include<iostream>
using namespace std;
int main(){
    int i=10;
    int * p= &i;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<sizeof(p)<<endl;
    (*p)++;
    cout<<i<<endl;
    cout<<*p<<endl;//*p and i are same
    int * q=p;//q is pointing towards the address stored in p
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;
    int * a=0;//null pointer
    cout<<a<<endl;
    cout<<*a<<endl;


}