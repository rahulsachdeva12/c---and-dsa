#include<iostream>
using namespace std;
#include "Templates.cpp"
int main(){
    //for printing three variable from this pair
    Pair<Pair<int,int>,int>p4;
    p4.setY(30);
    Pair<int,int>p2;
    p2.setX(10);
    p2.setY(20);

    p4.setX(p2);
    cout<<p4.getX().getX()<<" "<<p4.getX().getY()<<" "<<p4.getY()<<endl;


    Pair<int,Pair<char,double>>p3;
    p3.setX(10);
    Pair<char,double>p5;
    p5.setX('a');
    p5.setY(100.45);

    p3.setY(p5);
    cout<<p3.getX()<<" "<<p3.getY().getX()<<" "<<p3.getY().getY()<<endl;
    



    /*
    Pair <int ,double>p1;
    p1.setX(10);
    p1.setY(100.23);
    cout<<p1.getX()<<" "<<p1.getY()<<" "<<endl;
    */

    /*
    Pair <int> p1;
    p1.setX(10);
    p1.setY(20);
     
    cout<<p1.getX()<<" "<<p1.getY()<<" "<<endl;
     
    Pair <char> p2;
    p2.setX('a');
    p2.setY('b');
    cout<<p2.getX()<<" "<<p2.getY()<<" "<<endl;
    */
}