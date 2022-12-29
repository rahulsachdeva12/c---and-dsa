#include<iostream>
using namespace std;
int main(){
    const int i=10;
    int const i1=12;//or can be declared like this as well
    //i=23;   cannot do
    int const& j=i;
    //j=12;//reference variable can only read
    int p=11;
    int const& s=p;
    p++;
    cout<<s;
    

}