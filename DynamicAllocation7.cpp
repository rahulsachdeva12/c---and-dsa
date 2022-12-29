#include<iostream>
using namespace std;
int main(){
    //dynamic memeory in heap;4 byes in heap and 8 bytes of pointer in stack
    int* p=new int;
    *p=10;
    cout<<*p<<endl;
    double* pd=new double;
    char* pc=new char;

    int* pa=new int[50];//array in heap;200 bytes in heap and 8 bytes in stack
    // int n;
    // cin>>n>>endl;  //wrong format
    // int p[n]
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int* pa2= new int[n];
    for(int i=0;i<n;i++){
        cin>> pa2[i];//pointer acts as an array
    }
    int max=-1;
     for(int i=0;i<n;i++){
        if(max<pa2[i]){
            max=pa2[i];
        }
    }
    cout<<"Maximum element is: "<<max<<endl;
    //deleting dynamic memory is necessary and done by user
    int* t=new int;
    delete t;//delete sthe memory of t in heap but t can still be used
    t=new int;
    delete t;//delete single element
    t=new int[50];
    delete[] t;//delete whole array



}