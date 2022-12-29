#include<iostream>
using namespace std;
int main(){
    int a[10];
    cout<<sizeof(a)<<endl;
    cout<<&a[0]<<endl;
    cout<<a<<endl;
    a[0]=5;
    a[1]=10;
    cout<<*a<<endl;//a acts same as pointer
    cout<<*(a+1)<<endl;
    int* p=&a[0];
    cout<<p<<endl;
    cout<<*p<<endl;       //Differences
    cout<<sizeof(a)<<endl;//1.size difference
    cout<<sizeof(p)<<endl;
    //2.& operator difference
    cout<<&a<<endl;
    cout<<&p<<endl;
    //3.increment
    p=p+1;
   // a=a+1;//we cant increment or change value of array
     cout<<&a<<endl;
    cout<<&p<<endl;
}