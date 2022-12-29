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
    int getnumerator() const{
        return numerator;
    }
    int getdenominator() const{
        return denominator;
    }
    void setnumerator(int n){
        numerator=n;
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
    //  void add(Fraction f2){//it makes copy of f2 we will avoid extra space by using reference operator
    //     int lcm=denominator*f2.denominator;
    //     int x=lcm/denominator;
    //     int y=lcm/f2.denominator;
    //     int num=x*numerator +(y*(f2.numerator));
    //     this->numerator=num;
    //     denominator=lcm;//this keyword is optional
    //     simplify();
    // }
    // void add(Fraction const &f2){//const so that our original value in main cannot be changed
    //     int lcm=denominator*f2.denominator;
    //     int x=lcm/denominator;
    //     int y=lcm/f2.denominator;
    //     int num=x*numerator +(y*(f2.numerator));
    //     this->numerator=num;
    //     denominator=lcm;//this keyword is optional
    //     simplify();
        
    // }
     Fraction add(Fraction const &f2){//const so that our original value in main cannot be changed
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator +(y*(f2.numerator));
        //this->numerator=num;
        //denominator=lcm;//this keyword is optional
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
     }
         Fraction operator+(Fraction const &f2)const{//const so that our original value in main cannot be changed
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator +(y*(f2.numerator));
        //this->numerator=num;
        //denominator=lcm;//this keyword is optional
        Fraction fnew(num,lcm);
        fnew.simplify();
        return fnew;
     }
        Fraction operator*(Fraction const&f2)const{
            int n=numerator*(f2.numerator);
            int d=denominator*(f2.denominator);
            Fraction fnew(n,d);
            fnew.simplify();
            return fnew;
        }
        bool operator==(Fraction const &f2)const{
            return(numerator==f2.numerator)&&(denominator==f2.denominator);
        }
     

        void multiply(Fraction const &f2){
            numerator=numerator*(f2.numerator);
            denominator=denominator*(f2.denominator);
            simplify();
        }

};