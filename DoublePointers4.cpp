#include<iostream>
using namespace std;
int main(){
    int i=10;
    int* p=&i;
    int** p1=&p;
    cout<<p1<<endl;
    cout<<&p<<endl;

    cout<<*p1<<endl;
    cout<<p<<endl;
    cout<<&i<<endl;

    cout<<**p1<<endl;
    cout<<*p<<endl;
    cout<<i<<endl;
}