#include<iostream>
using namespace std;
#define PI 3.14//very good practice to use
int a;//global variable not a good practice dont use
void g(){
    cout<<a<<endl;
    a++;
}
void f(){
    cout<<a<<endl;
    a++;
    g();
}
int main(){
    int r;
    cin>>r;
    cout<<"si is: "<<PI*r*r<<endl;
    a=10;
    f();
    cout<<a<<endl;

}