#include<iostream>
using namespace std;
int StairCase(int n){
    if(n==0){
        return 1 ;
    }
    if(n<0){
        return 0;
    }
    int x=StairCase(n-1);
    int y=StairCase(n-2);
    int z=StairCase(n-3);
    return x+y+z;
}
int main(){
    int n;
    cin>>n;
    cout<<StairCase(n)<<endl;

}