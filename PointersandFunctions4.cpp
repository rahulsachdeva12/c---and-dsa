#include<iostream>
using namespace std;
void printPointer(int * p){
    p=p+1;

}
void incrementPointer(int* p){
    (*p)++;
}
int main(){
    int i=10;
    int* p=&i;
    // cout<<p<<endl;
    // printPointer(p);
    // cout<<p<<endl;
    cout<<*p<<endl;
    incrementPointer(p);
    cout<<*p<<endl;

}