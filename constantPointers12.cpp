#include<iostream>
using namespace std;\
void f(int const& p){

}
void g(int const* p){

}
int main(){
    int i=19;
    int* const p=&i;//p is a const pointer pointing towards int
    (*p)++;//cant do p=&j
    cout<<i;
    int const j=12;
    int const* p1=&j;//read from right: p1 is a pointer pointing to const int
    p1=&i;//cant do (*p)++
    int const* const p2=&i;//p2 is a const pointer pointing to const int
    (*p2)++;//cant do
    p2=&j;//cant do


    f(j);
    g(&j);


}