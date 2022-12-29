#include<iostream>
using namespace std;
class ComplexNo{
    private:
    int real;
    int imaginary;
    public:
    ComplexNo(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void print(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    void add(ComplexNo const &c2){
        real=real+(c2.real);
        imaginary=imaginary+(c2.imaginary);
    }
    void multiply(ComplexNo const &c2){
        real=real*(c2.real);
        imaginary=imaginary*(c2.imaginary);
    }


};