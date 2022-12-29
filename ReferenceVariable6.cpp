#include<iostream>
using namespace std;
void increment(int n){
    n++;
}
void increment1(int& n){//n is reference variable
    n++;
}
int main(){
    int i=10;
    int& j=i;//Reference variable;j and i points to same address
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    int k=100;
    j=k;
    cout<<i<<endl;
    increment(i);
    cout<<i<<endl;//will not affect i
    increment1(i);
    cout<<i<<endl;//will affect i
}