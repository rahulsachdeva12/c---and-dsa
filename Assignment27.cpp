#include<iostream>
using namespace std;
void ReverseArray(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void RotateArray(int arr[],int n,int d){
    if(d>n){
        return ;
    }
    else{
    ReverseArray(arr,0,n-1);
    ReverseArray(arr,0,(n-1-d));
    ReverseArray(arr,(n-d),n-1);
    }
}
int main(){
    int testcases;
    cin>>testcases;
    while(testcases!=0){
    int n;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;

    RotateArray(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    testcases--;
    }
    
}