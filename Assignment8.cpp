#include<iostream>
using namespace std;
int mul(int m,int n){
    if(n==0){
        return 0;
    }
    int a=m+mul(m,n-1);
    return a;
}
int main(){
    int m,n;
    cin>>m>>n;
    int output=mul(m,n);
    cout<<output<<endl;
}