#include<iostream>
using namespace std;
#include "Fraction.cpp"
int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    // f1.print();
    // f2.print();
    // f1.add(f2);
    // f1.print();
    // f2.print();
    // f1.multiply(f2);
    // f1.print();
    // f2.print();
    // Fraction const f3(10,3);//const object can only call const function
    // f3.getnumerator();
    // f3.getdenominator();
    // //f3.setnumerator(10);//will give error as it is not const fn
    // f3.print();


    //OPERATOR OVERLOADING
   Fraction f3=f1.add(f2);
    f1.print();
    f2.print();
    f3.print();
    Fraction f4=f1+f2;//operator overloading
    f4.print();
    Fraction f5=f1*f2;
    f5.print();
    if(f1==f2){
        cout<<"equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
}