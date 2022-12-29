#include<iostream>
using namespace std;
int maxProfit(int n,int arr[],int x=30){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=x){
            res++;
        }
    }
    return x*res;
}
int main(){
    int n;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int output=maxProfit(n,arr);
    cout<<output<<endl;
}