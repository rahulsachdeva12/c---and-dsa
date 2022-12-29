#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;

    public:
    Fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
        void print() const{
        cout<<this->numerator<<"/"<<denominator<<endl;//this keyword is optional
    }
    void simplify(){
        int gcd=1;
        int j=min(this->numerator,denominator);
        for(int i=1;i<=j;i++){
            if((numerator%i==0)&&(denominator%i==0)){
                gcd=i;
            }
        }
        this->numerator=numerator/gcd;
        this->denominator=denominator/gcd;
    }
    //pre increment
    Fraction& operator++(){//& operator to call reference
        numerator=numerator+denominator;
        simplify();
        return *this;
    }
    //post order
    Fraction operator++(int){
        Fraction fnew(numerator,denominator);
        numerator=numerator+denominator;
        simplify();
        fnew.simplify();
        return fnew;

    }
    //+= operator
    Fraction& operator+=(Fraction const &f2){
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator +(y*(f2.numerator));
        this->numerator=num;
        denominator=lcm;
        simplify();
        return *this;
    }
};