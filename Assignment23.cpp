#include<iostream>
using namespace std;
void helper(int input[],int n,int output[],int m){
    if(n==0){
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int newout[20]={};
    int i;
    for(i=0;i<m;i++){
        newout[i]=output[i];
    }
    newout[i]=input[0];
    helper(input+1,n-1,output,m);
    helper(input+1,n-1,newout,m+1);
}
void printSubsequencesofArray(int input[],int n){
    int output[20]={};
    int m=0;
    helper(input,n,output,m);
}
int main(){
    int n,x;
    cout<<"Enter the size:"<<endl;
    cin>> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
        cout<<"array is"<<endl;
     for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    printSubsequencesofArray(arr,n);
    
}