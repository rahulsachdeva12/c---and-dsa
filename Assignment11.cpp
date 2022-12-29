#include<iostream>
using namespace std;
int SumOfDigits(int n){
    if(n==0){
        return 0;
    }
    int a=(n%10);
    return a+SumOfDigits(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<SumOfDigits(n);
}