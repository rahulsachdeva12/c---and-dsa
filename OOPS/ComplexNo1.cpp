#include<iostream>
using namespace std;
#include "ComplexNo.cpp"
int main(){
    int real1,real2,imaginary1,imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;
    ComplexNo c1(real1,imaginary1);
    ComplexNo c2(real2,imaginary2);
    c1.print();
    c2.print();
    c1.add(c2);
    c1.print();
    c2.print();
    c1.multiply(c2);
    c1.print();
    c2.print();
}