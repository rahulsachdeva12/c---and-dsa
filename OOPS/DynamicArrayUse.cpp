#include<iostream>
using namespace std;
#include "DynamicArray.cpp"
int main(){
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();
    int j=d1.getElement(4);
    cout<<j<<endl;
    DynamicArray d2(d1);
    DynamicArray d3;
    d3=d1;
    d1.add(1,100);
    d2.print();
    d3.print();
}
