#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int** p= new int*[m];
    for(int i=0;i<m;i++){
    p[i]=new int[n];
    for(int j=0;j<n;j++){
        cin>>p[i][j];
    }
    }
    //deleting memory
    for(int i=0;i<m;i++){
        delete []p;
    }
    delete p;



    // int** p=new int* [10];
    // for(int i=0;i<10;i++){
    //     p[i]=new int[20];
    //     //for p[10][20]
    // }
}