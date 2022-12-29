#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int x){
    int s=0,e=n-1;
    if(s>e){
        return -1;
    }
    while(s<=e){
        int mid=(s+e)/2;
        if(x==arr[mid]){
            return mid;
        }
        else if(x<arr[mid]){
             BinarySearch(arr,s,mid-1);
        }
        else{
             BinarySearch(arr,mid+1,e);
        }
    }
}
int main(){
    int n,x;
    cin>> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<<endl;
    cout<<"enter value to search"<<endl;
    cin>>x;
    int output= BinarySearch(arr,n,x);
    cout<<"index is: "<<output;
    return 0;
}