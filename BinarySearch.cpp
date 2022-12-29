#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int x){
int start=0, end=n-1;
while(start<=end){
    int mid=(start+end)/2;
    if(x==arr[mid]){
        return mid;
    }
    else if(x<arr[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
}
if(start>end){
    return -1;
}

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
    cout<<"enter value to search"<<endl;
    cin>>x;
    int output= BinarySearch(arr,n,x);
    cout<<"index is: "<<output;
    return 0;
}

