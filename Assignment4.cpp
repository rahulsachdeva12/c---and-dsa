#include<iostream>
using namespace std;
int sum(int a[],int n){
    int output;
    if(n<=0){
        return 0;
    }
    else
    return a[n]+ sum(a,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[100];
    //cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    cout<<endl;
    int sum1= sum(a,n);
    cout<<sum1;
    }